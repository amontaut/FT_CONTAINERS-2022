/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_iterator.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 20:38:09 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/30 20:48:06 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REVERSE_ITERATOR_HPP
#define REVERSE_ITERATOR_HPP

#include "iterators_traits.hpp"
#include <uchar.h>
#include <memory>

namespace ft
{
	/* ************************************************************************** */
	/* Defined according to ***************************************************** */
	/* https://en.cppreference.com/w/cpp/iterator/reverse_iterator*************** */
	/* ************************************************************************** */
	
	template <class Iter> 
	class reverse_iterator
	{
	public:
		typedef Iter iterator_type;														
		typedef typename ft::iterator_traits<Iter>::iterator_category iterator_category;
		typedef typename ft::iterator_traits<Iter>::value_type value_type;				
		typedef typename ft::iterator_traits<Iter>::difference_type difference_type;	
		typedef typename ft::iterator_traits<Iter>::pointer pointer;					
		typedef typename ft::iterator_traits<Iter>::reference reference;				
		reverse_iterator() : current() {}												 
		explicit reverse_iterator(iterator_type x) : current(x) {}						 
		template <class U>																
		reverse_iterator(const reverse_iterator<U> &other) : current(other.base())
		{
		}

		template <class U> // The underlying iterator is assigned the value of the underlying iterator of other, i.e. other.base().
		reverse_iterator &operator=(const reverse_iterator<U> &other)
		{
			this->current = other.base();
			return (*this);
		}

		// Retourne l'itérateur de base
		iterator_type base() const
		{
			return (this->current);
		}

		// Renvoie une référence ou un pointeur vers l'élément précédent à current .
		// Equivalent to Iter tmp = current; return *--tmp;
		reference operator*() const
		{
			Iter tmp = current;
			return *--tmp;
		}

		// Renvoie une référence ou un pointeur vers l'élément précédent à current .
		// Equivalent to return std::addressof(operator*());.
		pointer operator->() const
		{
			return (std::__addressof(operator*()));
		}

		// Renvoie une référence à l'élément à l'emplacement spécifié relatif
		// Returns A reference to the element at relative location, that is, base()[-n-1].
		reference operator[](difference_type n) const
		{
			return (base()[-n - 1]);
		}

		// Incrémente ou décrémente l'itérateur.
		// 1) 2) Pre-increments or pre-decrements by one respectively. return *this
		reverse_iterator &operator++()
		{
			--current;
			return (*this);
		}
		reverse_iterator &operator--()
		{
			++current;
			return (*this);
		}

		// 3) 4) Post-increments or post-decrements by one respectively. Returns a copy of *this that was made before the change.
		reverse_iterator operator++(int)
		{
			reverse_iterator tmp(current);
			current--;
			return (tmp);
		}
		reverse_iterator operator--(int)
		{
			reverse_iterator tmp(current);
			current++;
			return (tmp);
		}

		// Returns an iterator which is advanced by n or -n positions respectively.
		// Returns reverse_iterator(base()-n) or reverse_iterator(base()+n) respectively.
		reverse_iterator operator+(difference_type n) const
		{
			return (reverse_iterator(current - n));
		}
		reverse_iterator operator-(difference_type n) const
		{
			return (reverse_iterator(current + n));
		}

		// 7) 8) Advances the iterator by n or -n positions respectively. Returns *this
		reverse_iterator &operator+=(difference_type n)
		{
			current -= n;
			return (*this);
		}
		reverse_iterator &operator-=(difference_type n)
		{
			current += n;
			return (*this);
		}

	protected:
		iterator_type current;
	};

	// Returns lhs.base() == rhs.base()
	template <class Iterator1, class Iterator2>
	bool operator==(const ft::reverse_iterator<Iterator1> &lhs, const ft::reverse_iterator<Iterator2> &rhs)
	{
		return (lhs.base() == rhs.base());
	}

	// Returns lhs.base() != rhs.base()
	template <class Iterator1, class Iterator2>
	bool operator!=(const ft::reverse_iterator<Iterator1> &lhs, const ft::reverse_iterator<Iterator2> &rhs)
	{
		return (lhs.base() != rhs.base());
	}

	// Returns lhs.base() > rhs.base()
	template <class Iterator1, class Iterator2>
	bool operator<(const ft::reverse_iterator<Iterator1> &lhs, const ft::reverse_iterator<Iterator2> &rhs)
	{
		return (lhs.base() > rhs.base());
	}

	// Returns lhs.base() >= rhs.base()
	template <class Iterator1, class Iterator2>
	bool operator<=(const ft::reverse_iterator<Iterator1> &lhs, const ft::reverse_iterator<Iterator2> &rhs)
	{
		return (lhs.base() >= rhs.base());
	}

	// Returns lhs.base() < rhs.base()
	template <class Iterator1, class Iterator2>
	bool operator>(const ft::reverse_iterator<Iterator1> &lhs, const ft::reverse_iterator<Iterator2> &rhs)
	{
		return (lhs.base() < rhs.base());
	}

	// returns lhs.base() <= rhs.base()
	template <class Iterator1, class Iterator2>
	bool operator>=(const ft::reverse_iterator<Iterator1> &lhs, const ft::reverse_iterator<Iterator2> &rhs)
	{
		return (lhs.base() <= rhs.base());
	}

	// Returns the incremented iterator, that is reverse_iterator<Iter>(it.base() - n)
	template <class Iter>
	reverse_iterator<Iter> operator+(typename reverse_iterator<Iter>::difference_type n, const reverse_iterator<Iter> &it)
	{
		return (reverse_iterator<Iter>(it.base() - n));
	}

	// Returns the distance between two iterator adaptors. returns rhs.base() - lhs.base()
	template <class L, class R>
	typename reverse_iterator<L>::difference_type operator-(const reverse_iterator<L> &lhs, const reverse_iterator<R> &rhs)
	{
		return (rhs.base() - lhs.base());
	}

}

#endif
