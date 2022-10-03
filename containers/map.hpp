/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:57:08 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/30 20:31:59 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAP_HPP
#define MAP_HPP
#include "../utils/pair.hpp"
#include "../utils/iterator.hpp"
#include "../utils/reverse_iterator.hpp"
#include "../utils/enable_if.hpp"
#include <cstddef>
#include "../utils/lexicographical_compare.hpp"
#include "../utils/equal.hpp"
#include <limits>
#include <stdexcept>
#include <iostream>
#include <utility>
#include <memory>
#include "RBTree.hpp"

namespace ft
{

	/* ************************************************************************** */
	/* Defined according to https://en.cppreference.com/w/cpp/container/map ***** */
	/* ************************************************************************** */
	template <class Key,										   
			  class T,											   
			  class Compare = std::less<Key>,					   
			  class Allocator = std::allocator<pair<const Key, T> >
			  >
	class map
	{
	/* Member types and member class: ******************************************* */
	public:
		typedef Key key_type;
		typedef T mapped_type;
		typedef pair<const Key, T> value_type;
		typedef size_t size_type;
		typedef std::ptrdiff_t difference_type;
		typedef Compare key_compare;
		class value_compare : public std::binary_function<value_type, value_type, bool>
		{
		protected:
			Compare comp;

		public:
			value_compare(Compare c) : comp(c) {}
			bool operator()(const value_type &lhs, const value_type &rhs) const
			{
				return (comp(lhs.first, rhs.first));
			}
		};
	
		typedef Allocator allocator_type;
		typedef value_type &reference;
		typedef const value_type &const_reference;
		typedef typename Allocator::pointer pointer;
		typedef typename Allocator::const_pointer const_pointer;

	private:
		typedef RBtree<value_type, value_compare, Allocator> tree_type;

	public:
		typedef typename tree_type::iterator iterator;
		typedef typename tree_type::const_iterator const_iterator;
		typedef ft::reverse_iterator<iterator> reverse_iterator;
		typedef ft::reverse_iterator<const_iterator> const_reverse_iterator;

	private:
		key_compare _comp;
		RBtree<value_type, value_compare, Allocator> tree;

	/* Member functions ********************************************************** */
	public:
		/* Coplien form ********************************************************** */
		explicit map(const Compare &comp = key_compare(),
					 const Allocator &alloc = Allocator()) : _comp(comp), tree(comp, alloc){};
		template <class InputIt>
		map(InputIt first, InputIt last,
			const Compare &comp = Compare(),
			const Allocator &alloc = Allocator()) : _comp(comp), tree(comp, alloc)
		{
			this->insert(first, last);
		};
		map(const map &other) : _comp(other._comp), tree(other.tree){};
		~map() {}
		map &operator=(const map &other)
		{
			this->_comp = other._comp;
			this->tree = other.tree;
			return (*this);
		}
		allocator_type get_allocator() const { return (allocator_type(this->tree.allocator)); };

		/* Element access *********************************************************** */
		T &operator[](const Key &key)
		{
			return (insert(ft::make_pair<key_type, mapped_type>(key, T())).first->second);
		}

		/* Iterators **************************************************************** */
		iterator begin()
		{
			return (this->tree.begin());
		}

		const_iterator begin() const
		{
			return (this->tree.begin());
		}

		iterator end()
		{
			return (this->tree.end());
		}

		const_iterator end() const
		{
			return (this->tree.end());
		}

		reverse_iterator rbegin()
		{
			return (reverse_iterator(this->end()));
		}

		const_reverse_iterator rbegin() const
		{
			return (const_reverse_iterator(this->end()));
		}

		reverse_iterator rend()
		{
			return (reverse_iterator(this->begin()));
		}

		const_reverse_iterator rend() const
		{
			return (const_reverse_iterator(this->begin()));
		}

		/* Capacity ***************************************************************** */
		bool empty() const
		{
			return (this->tree.size == 0);
		}

		size_type size() const
		{
			return (this->tree.size);
		}

		size_type max_size() const
		{
			return (this->tree.allocator.max_size());
		}

		/* Modifiers **************************************************************** */
		void clear()
		{
			this->tree.clear();
		};

		ft::pair<iterator, bool> insert(const value_type &value)
		{
			return (this->tree.insert(value));
		}

		iterator insert(iterator hint, const value_type &value)
		{
			return (this->tree.insert(hint, value).first);
		}

		template <class InputIt>
		void insert(InputIt first, InputIt last)
		{
			iterator tmp = this->begin();

			while (first != last)
			{
				tmp = this->insert(tmp, *first);
				first++;
			}
		}

		void erase(iterator pos)
		{
			this->tree.erase(pos);
		}

		void erase(iterator first, iterator last)
		{
			while (first != last)
			{
				erase(first++);
			}
		}

		size_type erase(const Key &key)
		{
			iterator node = this->tree.find(ft::make_pair(key, mapped_type()));
			if (node == end())
				return (0);
			erase(node);
			return (1);
		}

		void swap(map &other)
		{
			this->tree.swap(other.tree);
		};

		size_type count(const Key &key) const
		{
			iterator node = this->tree.find(ft::make_pair(key, mapped_type()));

			if (node == end())
				return (0);
			return (1);
		}

		iterator find(const Key &key)
		{
			iterator node = this->tree.find(ft::make_pair<key_type, mapped_type>(key, mapped_type()));
			return (node);
		}

		const_iterator find(const Key &key) const
		{
			iterator node = this->tree.find(ft::make_pair<key_type, mapped_type>(key, mapped_type()));
			return (node);
		}

		ft::pair<iterator, iterator> equal_range(const Key &key)
		{
			return (ft::make_pair<iterator, iterator>(this->tree.lower_bound(ft::make_pair<key_type, mapped_type>(key, mapped_type())), this->tree.upper_bound(ft::make_pair<key_type, mapped_type>(key, mapped_type()))));
		}

		ft::pair<const_iterator, const_iterator> equal_range(const Key &key) const
		{
			return (ft::make_pair<const_iterator, const_iterator>(const_iterator(this->tree.lower_bound(ft::make_pair<key_type, mapped_type>(key, mapped_type()))), const_iterator(this->tree.upper_bound(ft::make_pair<key_type, mapped_type>(key, mapped_type())))));
		}

		iterator lower_bound(const Key &key)
		{
			return (this->tree.lower_bound(ft::make_pair<key_type, mapped_type>(key, mapped_type())));
		}

		const_iterator lower_bound(const Key &key) const
		{
			return (const_iterator(this->tree.lower_bound(ft::make_pair<key_type, mapped_type>(key, mapped_type()))));
		}

		iterator upper_bound(const Key &key)
		{
			return (this->tree.upper_bound(ft::make_pair<key_type, mapped_type>(key, mapped_type())));
		}

		const_iterator upper_bound(const Key &key) const
		{
			return (const_iterator(this->tree.upper_bound(ft::make_pair<key_type, mapped_type>(key, mapped_type()))));
		}
		
		/* Observers **************************************************************** */
		key_compare key_comp() const
		{
			return (_comp);
		}

		value_compare value_comp() const
		{
			return (this->tree._comp);
		};

		/* Non member functions ***************************************************** */
		friend bool operator==(const map &lhs, const map &rhs)
		{
			return (ft::equal(lhs.begin(), lhs.end(), rhs.begin()) && (lhs.size() == rhs.size()));
		}
		friend bool operator!=(const map &lhs, const map &rhs)
		{
			if (lhs.size() != rhs.size())
				return (true);
			return (false);
		}
		friend bool operator<(const map &lhs, const map &rhs)
		{
			return (ft::lexicographical_compare<const_iterator, const_iterator>(lhs.begin(), lhs.end(), rhs.begin(), rhs.end()));
		}
		friend bool operator<=(const map &lhs, const map &rhs)
		{
			return (!(rhs < lhs));
		}
		friend bool operator>(const map &lhs, const map &rhs)
		{
			return (rhs < lhs);
		}
		friend bool operator>=(const map &lhs, const map &rhs)
		{
			return (!(lhs < rhs));
		}
	};
	template <typename i1, typename i2>
	bool operator==(i1 l, i2 r) { return (&*l == &*r); }
	template <typename i1, typename i2>
	bool operator!=(i1 l, i2 r) { return !(&*l == &*r); }
}

namespace ft
{
	template <class Key, class T, class Compare, class Alloc>
	void swap(ft::map<Key, T, Compare, Alloc> &lhs, ft::map<Key, T, Compare, Alloc> &rhs)
	{
		lhs.swap(rhs);
	}
}

#endif