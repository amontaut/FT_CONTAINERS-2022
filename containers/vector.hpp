/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:29:13 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/30 20:47:20 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP
#include <signal.h>

#include "../utils/reverse_iterator.hpp"
#include "../utils/lexicographical_compare.hpp"
#include "../utils/equal.hpp"
#include "../utils/iterators_traits.hpp"

#include "../utils/enable_if.hpp"
#include "../utils/is_integral.hpp"
#include "vector_iterator.hpp"
#include <iterator>
#include <iostream>
#include <memory>
#include <algorithm>
#include <stdexcept>
#include <sstream>
#ifndef SSTR
#define SSTR(x) static_cast<std::ostringstream &>((std::ostringstream() << std::dec << (x))).str()
#endif

namespace ft
{
	/* ************************************************************************** */
	/* Defined according to ***************************************************** */
	/* https://en.cppreference.com/w/cpp/container/vector *********************** */
	/* ************************************************************************** */
	template <class T,
			  class Allocator = std::allocator<T> >
	class vector
	{
		/* Member types and member class: ******************************************* */
	public:
		typedef T value_type;
		typedef Allocator allocator_type;
		typedef std::size_t size_type;
		typedef typename std::ptrdiff_t difference_type;
		typedef typename Allocator::reference reference;
		typedef typename Allocator::const_reference const_reference;
		typedef typename Allocator::pointer pointer;
		typedef typename Allocator::const_pointer const_pointer;
		typedef vectorIterator<T> iterator;
		typedef vectorIterator<const T> const_iterator;
		typedef ft::reverse_iterator<iterator> reverse_iterator;
		typedef ft::reverse_iterator<const_iterator> const_reverse_iterator;

	private:
		allocator_type A;
		pointer _data;
		size_type _capacity;
		size_type _size;

		/* Member functions ********************************************************* */
	public:
		/* Coplien form ********************************************************** */
		vector() : A(allocator_type()), _data(NULL), _capacity(0), _size(0) {}
		explicit vector(const Allocator &alloc) : A(alloc), _data(NULL), _capacity(0), _size(0) {}
		explicit vector(size_type count, const T &value = T(), const Allocator &alloc = Allocator())
			: A(alloc), _data(A.allocate(count)), _capacity(count), _size(count)
		{
			for (size_type i = 0; i < count; i++)
				this->A.construct(this->_data + i, T(value));
		}
		template <class InputIt>
		vector(InputIt first, InputIt last, const Allocator &alloc = Allocator()) : A(alloc), _data(NULL), _capacity(0), _size(0)
		{
			while (first != last)
			{
				this->insert(this->end(), *first);
				++first;
			}
		}
		vector(const vector &other) : A(other.A), _data(A.allocate(other._capacity)),
									  _capacity(other._capacity), _size(other._size)
		{
			for (size_type i = 0; i < other._size; i++)
				this->A.construct(this->_data + i, other._data[i]);
		}
		~vector()
		{
			this->clear();
			this->A.deallocate(this->_data, this->_capacity);
		}

		// operator= .
		// Efface tout le contenu du récipient et remplace.
		// 1) Copy assignment operator. Replaces the contents with a copy of the contents of other.		// 2) Déplacez opérateur d'affectation. Remplace le contenu avec ceux de other en utilisant la sémantique de déplacement (c'est à dire les données dans other est déplacé d'other dans ce récipient). other est dans un état valide, mais non précisées par la suite
		// returns *this
		vector &operator=(const vector &other)
		{
			this->clear();
			this->A.deallocate(this->_data, this->_capacity);
			this->A = other.A;
			this->_data = this->A.allocate(other._capacity);
			this->_capacity = other._capacity;
			this->_size = other._size;
			for (size_type i = 0; i < other._size; i++)
				this->A.construct(this->_data + i, other._data[i]);
			return (*this);
		}

		// Remplace le contenu du récipient .
		//  1) remplace le contenu des copies de count value valeur
		// Replaces the contents with count copies of value value
		// This causes an automatic reallocation of the allocated storage space if -and only if- the new vector size surpasses the current vector capacity.
		void assign(size_type count, const T &value)
		{
			this->clear();
			if (count > _capacity)
			{
				this->A.deallocate(this->_data, this->_capacity);
				this->_data = this->A.allocate(count);
				this->_capacity = count;
			}
			this->_size = count;
			for (size_type i = 0; i < count; i++)
				this->A.construct(this->_data + i, value);
		}

		template <class InputIt>
		void assign(InputIt first, typename ft::enable_if<!ft::is_integral<InputIt>::value, InputIt>::type last)
		{
			size_type count = last - first;
			this->clear();
			if (count > _capacity)
			{
				this->A.deallocate(this->_data, this->_capacity);
				this->_data = this->A.allocate(count);
				this->_capacity = count;
			}
			this->_size = count;
			int j = 0;
			for (InputIt i(first); i != last; i++)
				this->A.construct(this->_data + j++, *i);
		}

		// Renvoie l'allocateur associé
		allocator_type get_allocator() const
		{
			return allocator_type(this->A);
		}

		/* Element access *********************************************************** */
		//  accède à l'élément spécifié avec vérification de bornes proto 1
		//  Returns a reference to the element at specified location pos, with bounds checking.
		//  If pos is not within the range of the container, an exception of type std::out_of_range is thrown.
		//  Renvoie une ref de l'element place a la position pos
		reference at(size_type pos)
		{
			if (pos > this->_size || pos < 0)
			{
				if (pos < 0)
					throw std::out_of_range("vector::_M_range_check: __n (which is " + SSTR(pos) + ") < 0");
				if (pos >= this->_size)
					throw std::out_of_range("vector::_M_range_check: __n (which is " + SSTR(pos) + ") >= this->size() (which is " + SSTR(this->_size) + ")");
			}
			return (this->_data[pos]);
		}

		const_reference at(size_type pos) const
		{
			if (pos > this->_size || pos < 0)
			{
				if (pos < 0)
					throw std::out_of_range("vector::_M_range_check: __n (which is " + SSTR(pos) + ") < 0");
				if (pos >= this->_size)
					throw std::out_of_range("vector::_M_range_check: __n (which is " + SSTR(pos) + ") >= this->size() (which is " + SSTR(this->_size) + ")");
			}
			return (this->_data[pos]);
		}

		// Renvoie une référence à l'élément à pos emplacement spécifié. Aucune vérification de limites est effectuée .
		reference operator[](size_type pos)
		{
			return (this->_data[pos]);
		}

		// Renvoie une référence à l'élément à pos emplacement spécifié. Aucune vérification de limites est effectuée .
		const_reference operator[](size_type pos) const
		{
			return (this->_data[pos]);
		}

		// accede au premier element. Proto 1
		reference front()
		{
			return (this->_data[0]);
		}

		// accede au premier element. Proto 2
		const_reference front() const
		{
			return (this->_data[0]);
		}

		// accede au dernier element. Proto 1
		reference back()
		{
			return (this->_data[this->_size - 1]);
		}

		// accede au dernier element. Proto 2
		const_reference back() const
		{
			return (this->_data[this->_size - 1]);
		}

		/* Iterators **************************************************************** */
		// Retourne un itérateur sur le premier élément du conteneur. Proto 1
		iterator begin()
		{
			return (iterator(&this->_data[0]));
		}

		// Retourne un itérateur sur le premier élément du conteneur. Proto 2
		const_iterator begin() const
		{
			return (const_iterator(&this->_data[0]));
		}

		// retourne un itérateur à la fin. Proto 1
		iterator end()
		{
			return (iterator(&this->_data[this->_size]));
		}

		// retourne un itérateur à la fin. Proto 2
		const_iterator end() const
		{
			return (const_iterator(&this->_data[this->_size]));
		}

		// Retourne un itérateur inverse au premier élément du conteneur renversé. Il correspond au dernier élément du conteneur non inversée. Proto 1
		// iterate backwards: increasing them moves them towards the beginning of the container.
		reverse_iterator rbegin()
		{
			return (reverse_iterator(&this->_data[this->_size]));
		}

		// Retourne un itérateur inverse au premier élément du conteneur renversé. Il correspond au dernier élément du conteneur non inversée. Proto2
		const_reverse_iterator rbegin() const
		{
			return (const_reverse_iterator(&this->_data[this->_size]));
		}

		// Retourne un itérateur inverse de l'élément suivant du dernier élément du récipient renversé. Elle correspond à l'élément précédant le premier élément du conteneur non inversée. Cet élément agit comme un espace réservé, tente d'y accéder en résulte un comportement indéfini. Proto 1
		reverse_iterator rend()
		{
			return (reverse_iterator(&this->_data[0]));
		}

		// Proto 2
		const_reverse_iterator rend() const
		{
			return (const_reverse_iterator(&this->_data[0]));
		}

		/* Capacity ***************************************************************** */
		// Vérifie si le conteneur n'a pas d'éléments, à savoir si begin() == end()
		bool empty() const
		{
			if (this->begin() == this->end())
				return (true);
			return (false);
		}

		// Returns the number of elements in the container, i.e. std::distance(begin(), end()).
		size_type size() const
		{
			return (this->_size);
		}

		// Retourne le nombre maximal d'éléments du conteneur est capable de tenir en raison des limites du système de mise en œuvre ou à la bibliothèque, à savoir std::distance(begin(), end()) pour le plus grand réservoir .
		size_type max_size() const
		{
			return (this->A.max_size());
		}

		// Définit la capacité du récipient à au moins size. Stockage est alloué si nécessaire .
		// réserve de l'espace mémoire
		// New cap est en vrai size dans le proto
		void reserve(size_type new_cap)
		{
			if (new_cap <= this->_capacity)
				return;
			if (new_cap > this->max_size())
				throw std::length_error("allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
			pointer tmp = A.allocate(new_cap);
			for (size_type i = 0; i < this->_size; i++)
			{
				this->A.construct(tmp + i, this->_data[i]);
				this->A.destroy(this->_data + i);
			}
			this->A.deallocate(this->_data, this->_capacity);
			this->_capacity = new_cap;
			this->_data = tmp;
		}

		// renvoie le nombre d'éléments qui peuvent être contenus dans l'espace mémoire actuellement alloué
		size_type capacity() const
		{
			return (this->_capacity);
		}
		
		/* Modifiers **************************************************************** */
		// Supprime tous les éléments du conteneur. The allocated memory will not be released, effectively leaving the capacity of the vector unchanged.
		void clear()
		{
			while (this->_size > 0)
			{
				this->A.destroy(this->_data + this->_size - 1);
				--this->_size;
			}
			this->_size = 0;
		}

		iterator insert(iterator pos, const T &value)
		{
			size_type i = 0;
			size_type tmp = pos - this->begin();
			if (this->_size + 1 > this->_capacity)
			{
				size_type new_cap = get_size(1);
				pointer new_data = this->A.allocate(new_cap);
				for (; i < tmp; i++)
					this->A.construct(new_data + i, this->_data[i]);
				this->A.construct(new_data + i, value);
				++i;
				for (; i <= this->_size; i++)
					this->A.construct(new_data + i, this->_data[i - 1]);
				size_type new_size = _size + 1;
				this->clear();
				this->A.deallocate(this->_data, this->_capacity);
				this->_data = new_data;
				this->_size = new_size;
				this->_capacity = new_cap;
				return (iterator(this->_data + tmp));
			}
			i = this->_size;
			if (i != tmp)
			{
				this->A.construct(this->_data + i, this->_data[i - 1]);
				--i;
				for (; i > tmp; i--)
					this->_data[i] = this->_data[i - 1];
				this->_data[i] = value;
			}
			else
				this->A.construct(this->_data + i, value);
			this->_size++;
			return (pos);
		}

		// inserts count copies du value avant l'élément pointé par pos
		void
		insert(iterator pos, size_type count, const T &value)
		{
			if (!count)
				return;
			size_type tmp = pos - this->begin();
			size_type i = 0;

			if (this->_size + count > this->_capacity)
			{
				size_type new_cap = get_size(count);
				pointer new_data = this->A.allocate(new_cap);
				for (; i < tmp; i++)
					this->A.construct(new_data + i, this->_data[i]);
				for (size_type j = 0; j < count; j++)
				{
					this->A.construct(new_data + i, value);
					++i;
				}
				for (; i < this->_size + count; i++)
					this->A.construct(new_data + i, this->_data[i - count]);
				size_type new_size = _size + count;
				this->clear();
				this->A.deallocate(this->_data, this->_capacity);
				this->_data = new_data;
				this->_size = new_size;
				this->_capacity = new_cap;
				return;
			}
			i = this->_size + count;
			while (i > tmp + count)
			{
				if (i > _size)
					this->A.construct(this->_data + i - 1, this->_data[i - count - 1]);
				else
					this->_data[i - 1] = this->_data[i - count - 1];
				--i;
			}
			while (i > tmp)
			{
				if (i > _size)
					this->A.construct(this->_data + i - 1, value);
				else
					this->_data[i - 1] = value;
				--i;
			}
			this->_size += count;
		}

		//éléments inserts de [first, last) plage avant l'élément pointé par pos
		template <class InputIterator>
		void insert(iterator pos, InputIterator first, InputIterator last,
					typename enable_if<!is_integral<InputIterator>::value, InputIterator>::type * = NULL)
		{
			while (first != last)
			{
				pos = this->insert(pos, *first++) + 1;
			}
		}

		iterator erase(iterator pos)
		{
			size_type anchor = pos - this->begin();
			for (size_t i = this->_size - 1; anchor < i; anchor++)
				this->_data[anchor] = this->_data[anchor + 1];
			this->A.destroy(_data + this->_size - 1);
			_size--;
			return (pos);
		}

		//  supp les elements entre first et last
		iterator erase(iterator first, iterator last)
		{
			size_type start = first - this->begin();
			size_type end = last - this->begin();
			size_type total = last - first;
			while (end < this->_size)
			{
				this->_data[start] = this->_data[end];
				start++;
				end++;
			}
			this->_size -= total;
			this->A.destroy(_data + this->_size - total);
			return (this->begin() + end);
		}

		void push_back(const T &value)
		{
			if (this->_size == this->_capacity)
				this->reserve(this->_size + 1);
			this->A.construct(this->_data + this->_size, value);
			this->_size++;
		}

		// Supprime le dernier élément du conteneur
		void pop_back()
		{
			this->_size--;
			this->A.destroy(this->_data + this->_size);
		}

		// Resizes the container to contain count elements.
		// If the current size is greater than count, the container is reduced to its first count elements.
		// If the current size is less than count,
		// Additional default-inserted elements are appended with value T
		void resize(size_type count, T value = T())
		{
			if (count < this->_size)
			{
				for (size_type i = count; i < this->_size; i++)
					this->A.destroy(this->_data + i);
				this->_size = count;
			}
			else if (count > this->_size)
			{
				if (count > _capacity)
					this->reserve(count);
				for (size_type j = _size; j < count; j++)
					this->A.construct(this->_data + j, value);
				this->_size = count;
			}
		}

		// Exchanges the contents of the container with those of other.
		void swap(vector &other)
		{
			size_t tmpsize = this->_size;
			size_t tmpcapa = this->_capacity;
			pointer tmpdata = this->_data;
			allocator_type tmpA = this->A;

			this->A = other.A;
			this->_data = other._data;
			this->_size = other._size;
			this->_capacity = other._capacity;

			other.A = tmpA;
			other._data = tmpdata;
			other._size = tmpsize;
			other._capacity = tmpcapa;
		}
		
			private:
		size_type get_size(size_type wanted)
		{
			wanted += this->_size;
			if (wanted > 2 * _capacity)
				return (wanted);
			else
				return (2 * _capacity);
		}
		
/* Non member functions ***************************************************** */
		friend bool operator==(const vector &lhs, const vector &rhs)
		{
			return (ft::equal(lhs.begin(), lhs.end(), rhs.begin()) && (lhs.size() == rhs.size()));
		}

		friend bool operator!=(const vector &lhs, const vector &rhs)
		{
			return (!(lhs == rhs));
		}
		friend bool operator<(const vector &lhs, const vector &rhs)
		{
			return (ft::lexicographical_compare<iterator, iterator>(lhs.begin(), lhs.end(), rhs.begin(), rhs.end()));
		}
		friend bool operator<=(const vector &lhs, const vector &rhs)
		{
			return (!(rhs < lhs));
		}
		friend bool operator>(const vector &lhs, const vector &rhs)
		{
			return (rhs < lhs);
		}
		friend bool operator>=(const vector &lhs, const vector &rhs)
		{
			return (!(lhs < rhs));
		}


	};
}

namespace std
{
	template <class T, class Alloc>
	void swap(ft::vector<T, Alloc> &lhs, ft::vector<T, Alloc> &rhs)
	{
		lhs.swap(rhs);
	}
}

#endif
