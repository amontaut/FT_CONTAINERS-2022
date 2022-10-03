/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_iterator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:23:55 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/30 20:07:53 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_ITERATOR_HPP
#define VECTOR_ITERATOR_HPP

#include <cstddef>
#include <iterator>

namespace ft
{
	template <typename U>
	class vectorIterator
	{
	public:
		/* Member types ***************************************************** */
		typedef std::ptrdiff_t difference_type;
		typedef U value_type;
		typedef U *pointer;
		typedef U &reference;
		typedef std::random_access_iterator_tag iterator_category;

	protected:
		U *p;

	public:
		/* Member functions ************************************************* */
		/* Coplien form ***************************************************** */
		template <typename V>
		vectorIterator(vectorIterator<V> const &src) : p((value_type *)src.operator->())
		{
		}
		vectorIterator(U *src) : p(src) {}
		vectorIterator() : p(0) {}
		~vectorIterator() {}
		template <typename V>
		vectorIterator &operator=(vectorIterator<V> &src)
		{
			this->p = src.operator->();
			return (*this);
		}
		U &operator*() const { return (*p); }
		U *operator->() const { return (p); }
		vectorIterator &operator++()
		{
			++p;
			return (*this);
		}
		vectorIterator operator++(int)
		{
			vectorIterator tmp = *this;
			p++;
			return (tmp);
		}
		vectorIterator &operator--()
		{
			--p;
			return (*this);
		}
		vectorIterator operator--(int)
		{
			vectorIterator tmp = *this;
			p--;
			return (tmp);
		}
		operator vectorIterator<const value_type>() const { return (vectorIterator<const value_type>(this->p)); }
		U &operator[](int n) { return (p[n]); }
		vectorIterator &operator+=(int n)
		{
			this->p += n;
			return (*this);
		}
		vectorIterator &operator-=(int n)
		{
			this->p -= n;
			return (*this);
		}
	};
	template <typename L, typename R>
	bool operator==(const vectorIterator<L> &lhs, const vectorIterator<R> &rhs)
	{
		return (lhs.operator->() == rhs.operator->());
	}

	template <typename L, typename R>
	bool operator!=(const vectorIterator<L> &lhs, const vectorIterator<R> &rhs)
	{
		return (lhs.operator->() != rhs.operator->());
	}
	template <typename L, typename R>
	bool operator<(const vectorIterator<L> &lhs, const vectorIterator<R> &rhs)
	{
		return (lhs.operator->() < rhs.operator->());
	}
	template <typename L, typename R>
	bool operator>(const vectorIterator<L> lhs, const vectorIterator<R> &rhs)
	{
		return (lhs.operator->() > rhs.operator->());
	}
	template <typename L, typename R>
	bool operator<=(const vectorIterator<L> &lhs, const vectorIterator<R> &rhs)
	{
		return (lhs.operator->() <= rhs.operator->());
	}
	template <typename L, typename R>
	bool operator>=(const vectorIterator<L> &lhs, const vectorIterator<R> &rhs)
	{
		return (lhs.operator->() >= rhs.operator->());
	}
	template <typename V>
	vectorIterator<V> operator+(vectorIterator<V> lhs, typename vectorIterator<V>::difference_type rhs) { return (vectorIterator<V>(lhs.operator->() + rhs)); }
	template <typename V>
	vectorIterator<V> operator+(typename vectorIterator<V>::difference_type lhs, vectorIterator<V> &rhs) { return (vectorIterator<V>(rhs.operator->() + lhs)); }
	template <typename V>
	vectorIterator<V> operator-(vectorIterator<V> lhs, typename vectorIterator<V>::difference_type rhs) { return (vectorIterator<V>(lhs.operator->() - rhs)); }
	template <typename L, typename R>
	typename vectorIterator<L>::difference_type operator-(vectorIterator<L> lhs, vectorIterator<R> rhs) { return (lhs.operator->() - rhs.operator->()); }
}
#endif
