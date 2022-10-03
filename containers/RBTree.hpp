/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RBTree.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:57:16 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/30 19:45:39 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RBTREE_HPP
#define RBTREE_HPP
#include <stddef.h>
#include <memory>
#include "../utils/pair.hpp"

/* ************************************************************************** */
/* Red black tree *********************************************************** */
/* ************************************************************************** */

template <typename T, class Compare, class Allocator = std::allocator<T> >
class RBtree
{
	public:
		/* Member types ********************************************************* */
		/* Struct node: ********************************************************* */
		struct nodePtr
		{
			nodePtr *right;
			nodePtr *left;
			nodePtr *parent;
			bool color; // 0 = back; red = 1
			T key;
		};

		typedef T value_type;
		typedef size_t size_type;
		typedef Compare value_compare;
		typedef Allocator allocator_type;

		/* ********************************************************************** */
		/* Iterator ************************************************************* */
		/* ********************************************************************** */
		template <typename U>
			class mapIterator
			{
				public:
					/* Member types ***************************************************** */
					typedef std::ptrdiff_t difference_type;
					typedef U value_type;
					typedef U *pointer;
					typedef U &reference;
					typedef std::bidirectional_iterator_tag iterator_category;
					nodePtr *data;
					/* Member functions ************************************************* */
					/* Coplien form ***************************************************** */
					mapIterator() : data(NULL){};
					mapIterator(nodePtr *n) : data(n){};
					mapIterator(const nodePtr *n) : data((nodePtr *)n){};
					mapIterator(const mapIterator<value_type> &src) : data(src.data) {}
					mapIterator &operator=(const mapIterator &src)
					{
						this->data = (nodePtr *)src.data;
						return (*this);
					}
					operator mapIterator<const U>()
					{
						return (mapIterator<const U>(this->data));
					}
					pointer operator->() const { return (&(this->data->key)); }
					reference operator*() const { return (this->data->key); }
					mapIterator &operator++() { return (increment(this->data, NULL)); }
					mapIterator &operator--() { return (decrement(this->data, NULL)); }
					mapIterator operator++(int)
					{
						const mapIterator tmp(*this);
						increment(this->data, NULL);
						return (tmp);
					}
					mapIterator operator--(int)
					{
						mapIterator tmp(*this);
						decrement(this->data, NULL);
						return (tmp);
					}

				private:
					mapIterator &increment(nodePtr *n, nodePtr *old)
					{
						if (n->left && old == n->parent)
							return (increment(n->left, n));
						if (old == n->parent)
						{
							this->data = (nodePtr *)n;
							return (*this);
						}
						if (n->left && n->left == old)
						{
							this->data = (nodePtr *)n;
							return (*this);
						}
						if (n->right && n->right != old)
							return (increment(n->right, n));
						if (n->parent)
							return (increment(n->parent, n));
						return (*this);
					}

					mapIterator &decrement(nodePtr *n, nodePtr *old)
					{
						if (n->right && old == n->parent)
							return (decrement(n->right, n));
						if (old == n->parent)
						{
							this->data = (nodePtr *)n;
							return (*this);
						}
						if (n->right && n->right == old)
						{
							this->data = (nodePtr *)n;
							return (*this);
						}
						if (n->left && n->left != old)
							return (decrement(n->left, n));
						if (n->parent)
							return (decrement(n->parent, n));
						return (*this);
					}
			};
		/* ********************************************************************** */
		/* END Iterator ********************************************************* */
		/* ********************************************************************** */

		/* Member types ********************************************************* */
		typedef mapIterator<value_type> iterator;
		typedef mapIterator<const value_type> const_iterator;
		nodePtr *tree;
		nodePtr root;
		nodePtr *first;
		nodePtr *last;
		size_type size;
		typename Allocator::template rebind<nodePtr>::other allocator;
		const Compare &_comp;

		/* Member functions ***************************************************** */
		/* Coplien form ********************************************************* */
		RBtree(const value_compare &comp = value_compare(),
				const allocator_type &alloc = allocator_type()) : tree(NULL), root((nodePtr){}), first(&root), last(&root), size(0), allocator(alloc), _comp(comp) {}
		RBtree(RBtree const &other) : root((nodePtr){}), first(&root), last(&root), size(0), allocator(other.allocator), _comp(other._comp)
		{
			tree = deep_copy_tree(other, other.tree);
			if (tree)
				tree->parent = &this->root;
			this->reset_root();
		}
		~RBtree()
		{
			this->clear();
		}
		RBtree &operator=(RBtree const &other)
		{
			this->clear();
			this->tree = deep_copy_tree(other, other.tree);
			this->reset_root();
			return (*this);
		}

		/* Needed in map.hpp **************************************************** */
		iterator begin() 
		{ return (iterator(this->first)); }
		const_iterator begin() const 
		{ return (const_iterator(this->first)); }
		iterator end() 
		{ return (iterator(&this->root)); }
		const_iterator end() const 
		{ return (const_iterator(&this->root)); }

		ft::pair<iterator, bool> insert(const value_type &key)
		{
			return (helper_insert(this->tree, &this->root, key));
		}

		ft::pair<iterator, bool> insert(iterator hint, const value_type &key)
		{
			++hint;
			if (hint.data != &root && _comp(hint.data->key, key) && (hint.data == &this->root || _comp(key, hint.data->key)))
			{
				if (!hint.data->right)
					return (helper_insert(hint.data->right, hint.data, key));
				else
					return (helper_insert(hint.data->left, hint.data, key));
			}
			return (helper_insert(tree, &this->root, key));
		}

		void clear()
		{
			this->delete_left_right(this->tree);
			this->reset_root();
		}

		void swap(RBtree &other)
		{
			nodePtr *tmptree = tree;
			nodePtr *tmpfirst = first;
			nodePtr *tmplast = last;
			size_type tmpsize = size;

			tree = other.tree;
			first = other.first;
			last = other.last;
			size = other.size;

			other.tree = tmptree;
			other.first = tmpfirst;
			other.last = tmplast;
			other.size = tmpsize;

			if (first == &other.root)
				first = &this->root;
			if (last == &other.root)
				last = &this->root;
			if (other.first == &root)
				other.first = &other.root;
			if (other.last == &root)
				other.last = &other.root;
			other.reset_root();
			this->reset_root();
		}

		iterator find(const value_type &k) const
		{
			return (this->find(this->tree, k));
		}
		
		iterator find(nodePtr *x, const value_type &key) const
		{
			while (1)
			{
				if (!x)
					return (iterator(&this->root));
				else if (_comp(key, x->key))
					x = x->left;
				else if (_comp(x->key, key))
					x = x->right;
				else
					return (iterator(x));
			}
		}

		void erase(iterator it)
		{
			nodePtr *n = it.data;
			if (this->first == n)
				this->first = (++iterator(n)).data;
			if (this->last == n)
				this->last = (--iterator(n)).data;
			if (it.data == this->tree && !n->right && !n->left)
			{
				delete_node(this->tree);
				this->tree = NULL;
				this->root.left = NULL;
				this->root.right = NULL;
				return;
			}
			if (n->left && n->right)
				swap_node(n, (++iterator(it)).data);
			if (n->color == 1)
			{
				if (it.data->parent->right == it.data)
				it.data->parent->right = NULL;
				else
				it.data->parent->left = NULL;
				delete_node(it.data);
				return;
			}
			if (n->left && n->left->color == 1)
			{
				n->left->color = 0;
				this->change_node(n, n->left);
				n->left = NULL;
				delete_node(it.data);
				return;
			}
			if (n->right && n->right->color == 1)
			{
				n->right->color = 0;
				this->change_node(n, n->right);
				n->right = NULL;
				delete_node(it.data);
				return;
			}
			nodePtr *p;
			while (n != this->tree && n->color == 0)
			{
				if (n == n->parent->left)
				{
					p = n->parent->right;
					if (p->color == 1)
					{
						p->color = 0;
						n->parent->color = 1;
						rotate_right(n->parent);
						p = n->parent->right;
					}
					if ((!p->left || p->left->color == 0) && (!p->right || p->right->color == 0))
					{
						p->color = 1;
						n = n->parent;
					}
					else
					{
						if (!p->right || p->right->color == 0)
						{
							p->left->color = 0;
							p->color = 1;
							rotate_left(p);
							p = n->parent->right;
						}
						p->color = n->parent->color;
						n->parent->color = 0;
						if (p->right)
							p->right->color = 0;
						rotate_right(n->parent);
						n = this->tree;
					}
				}
				else
				{
					p = n->parent->left;
					if (p->color == 1)
					{
						p->color = 0;
						n->parent->color = 1;
						rotate_left(n->parent);
						p = n->parent->left;
					}
					if ((!p->left || p->left->color == 0) && (!p->right || p->right->color == 0))
					{
						p->color = 1;
						n = n->parent;
					}
					else
					{
						if (!p->left || p->left->color == 0)
						{
							p->right->color = 0;
							p->color = 1;
							rotate_right(p);
							p = n->parent->left;
						}
						p->color = n->parent->color;
						n->parent->color = 0;
						if (p->left)
							p->left->color = 0;
						rotate_left(n->parent);
						n = this->tree;
					}
				}
			}
			n->color = 0;
			if (it.data->parent->right == it.data)
			it.data->parent->right = NULL;
			else
			it.data->parent->left = NULL;
			delete_node(it.data);
			return;
		}

		iterator upper_bound(const value_type &key) const
		{
			iterator it(recursive_lower_bound(this->tree, key, (nodePtr *)&this->root));

			if (!this->_comp(*it, key) && !this->_comp(key, *it) && it != this->end())
				return (++it);
			return (it);
		}

		iterator lower_bound(const value_type &key) const
		{
			return (recursive_lower_bound(this->tree, key, (nodePtr *)&this->root));
		}

	private: 
		nodePtr *create_node(nodePtr new_node)
		{
			nodePtr *n = allocator.allocate(1);
			this->allocator.construct(n, new_node);
			this->size++;
			return (n);
		}

		void delete_node(nodePtr *&x)
		{
			if (x == this->first)
				this->first = x->parent;
			if (x == this->last)
				this->last = x->parent;
			allocator.destroy(x);
			allocator.deallocate(x, 1);
			x = NULL;
			this->size--;
		}

		void delete_left_right(nodePtr *&x)
		{
			if (!x)
				return;
			if (x->right)
				delete_left_right(x->right);
			if (x->left)
				delete_left_right(x->left);
			delete_node(x);
		}

		nodePtr *rotate_left(nodePtr *x)
		{
			nodePtr **ref;
			if (x->parent && x->parent != &this->root && x->parent->left == x)
				ref = &(x->parent->left);
			else if (x->parent && x->parent != &this->root)
				ref = &(x->parent->right) ;
			else
				ref = NULL ;
			nodePtr *y = x->left;
			y->parent = x->parent;
			x->left = y->right;
			if (y->right && y->right != &this->root)
				y->right->parent = x;
			y->right = x;
			x->parent = y;
			if (!ref)
			{
				this->tree = y;
				this->tree->parent = &this->root;
				this->root.left = this->tree;
				this->root.right = this->tree;
			}
			else
				*ref = y;
			return (x);
		}
		
		nodePtr *rotate_right(nodePtr *x)
		{
			nodePtr **ref;
			if (x->parent && x->parent != &this->root && x->parent->left == x)
				ref = &(x->parent->left);
			else if (x->parent && x->parent != &this->root)
				ref = &(x->parent->right) ;
			else
				ref = NULL ;
			nodePtr *y = x->right;
			y->parent = x->parent;
			x->right = y->left;
			if (y->left && y->left != &this->root)
				y->left->parent = x;
			y->left = x;
			x->parent = y;
			if (!ref)
			{
				this->tree = y;
				this->tree->parent = &this->root;
				this->root.left = this->tree;
				this->root.right = this->tree;
			}
			else
				*ref = y;
			return (x);
		}

		nodePtr *get_uncle(nodePtr *x)
		{
			if (!(x->parent && x->parent != &this->root))
				return (NULL);
			if (!(x->parent->parent && x->parent->parent != &this->root))
				return (NULL);
			if (x->parent->parent->left == x->parent)
				return x->parent->parent->right;
			else
				return x->parent->parent->left;
		}

		void swap_node(nodePtr *x, nodePtr *y)
		{
			nodePtr *swap_node;

			if (x->right)
				x->right->parent = y;
			if (x->left)
				x->left->parent = y;
			if (y->right)
				y->right->parent = x;
			if (y->left)
				y->left->parent = x;
			swap_node = x->right;
			x->right = y->right;
			y->right = swap_node;

			swap_node = x->left;
			x->left = y->left;
			y->left = swap_node;

			if (x->parent->right == x)
				x->parent->right = y;
			if (x->parent->left == x)
				x->parent->left = y;
			if (y->parent->right == y)
				y->parent->right = x;
			if (y->parent->left == y)
				y->parent->left = x;
			swap_node = x->parent;
			x->parent = y->parent;
			y->parent = swap_node;
			bool swap_color = x->color;
			x->color = y->color;
			y->color = swap_color;
			if (this->tree == x)
				this->tree = y;
			else if (this->tree == y)
				this->tree = x;
		}

		void change_node(nodePtr *x, nodePtr *y)
		{
			if (x == x->parent->right)
				x->parent->right = y;
			if (x == x->parent->left)
				x->parent->left = y;
			if (y)
				y->parent = x->parent;
			if (x == this->tree)
				this->tree = y;
		}

		iterator recursive_lower_bound(nodePtr *n, const value_type &key, nodePtr *current) const
		{
			if (!n)
				return (iterator(current));
			if ((current == &root || _comp(n->key, current->key)) && !_comp(n->key, key))
				if ((current == &root || _comp(n->key, current->key)) && !_comp(n->key, key))
					current = n;
			if (_comp(key, n->key))
				return (recursive_lower_bound(n->left, key, current));
			if (_comp(n->key, key))
				return (recursive_lower_bound(n->right, key, current));
			return (iterator(current));
		}

		nodePtr *deep_copy_tree(RBtree const &other, nodePtr *x)

		{
			if (!x)
				return (NULL);
			nodePtr new_node = 
			{
				deep_copy_tree(other, x->right),
				deep_copy_tree(other, x->left),
				NULL,
				x->color,
				x->key
			};
			nodePtr *n = this->create_node(new_node);
			if (x == other.first)
				this->first = n;
			if (x == other.last)
				this->last = n;
			if (new_node.left)
				new_node.left->parent = n;
			if (new_node.right)
				new_node.right->parent = n;
			return (n);
		}

		void reset_root()
		{
			this->root = (nodePtr){
				.right = this->tree,
					.left = this->tree,
			};
			if (this->tree)
				this->tree->parent = &this->root;
			if (this->first && this->first->left)
				this->first = this->first->left;
			if (this->last && this->last->right)
				this->last = this->last->right;
		}

		ft::pair<iterator, bool> balance(nodePtr *data)
		{

			nodePtr *uncle;
			nodePtr *tmp = data;
start_of_balancing:
			if (tmp->parent->color == 0)
				return (ft::make_pair<iterator, bool>(iterator(data), true));
			if (!((tmp->parent->parent && tmp->parent->parent != &this->root)))
			{
				tmp->parent->color = 0;
				return (ft::make_pair<iterator, bool>(iterator(data), true));
			}
			uncle = get_uncle(tmp);
			if ((uncle && uncle != &this->root) && uncle->color == 1)
			{
				uncle = get_uncle(tmp);
				tmp->parent->color = 0;
				uncle->color = 0;
				tmp->parent->parent->color = 1;
				tmp = tmp->parent->parent;
				if ((tmp && tmp != &this->root) && (tmp->parent && tmp->parent != &this->root))
					goto start_of_balancing;
				return (ft::make_pair<iterator, bool>(iterator(data), true));
			}

			if (tmp == tmp->parent->left)
			{
				if (tmp->parent->parent->right == tmp->parent)
				{
					rotate_left(tmp->parent);
					tmp->color = 0;
					tmp->parent->color = 1;
					rotate_right(tmp->parent);
				}
				else
				{
					tmp->parent->color = 0;
					tmp->parent->parent->color = 1;
					rotate_left(tmp->parent->parent);
				}
			}
			else
			{
				if (tmp->parent->parent->left == tmp->parent)
				{
					rotate_right(tmp->parent);
					tmp->color = 0;
					tmp->parent->color = 1;
					rotate_left(tmp->parent);
				}
				else
				{
					tmp->parent->color = 0;
					tmp->parent->parent->color = 1;
					rotate_right(tmp->parent->parent);
				}
			}
			return (ft::make_pair<iterator, bool>(iterator(data), true));
		}

		ft::pair<iterator, bool> helper_insert(nodePtr *&data, nodePtr *parent, const value_type &key)
		{
			if (!data)
			{
				data = create_node((nodePtr){NULL, NULL, parent, 1, key});
				this->reset_root();
				return (balance(data));
			}
			else if (_comp(key, data->key))
				return (helper_insert(data->left, data, key));
			else if (_comp(data->key, key))
				return (helper_insert(data->right, data, key));
			else
				return (ft::pair<iterator, bool>(iterator(data), false));
		}

};

#endif
