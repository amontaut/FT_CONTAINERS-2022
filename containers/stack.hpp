/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 17:16:47 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/30 20:32:04 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_HPP
#define STACK_HPP
#include "vector.hpp"

namespace ft
{
	/* ************************************************************************** */
	/* Defined according to ***************************************************** */
	/* https://en.cppreference.com/w/cpp/container/stack ************************ */
	/* ************************************************************************** */
	template <							 
		class T,						 
		class Container = ft::vector<T> > 
	class stack							 
	{
	/* Member types: ************************************************************ */
	public:
		typedef Container container_type;							
		typedef typename Container::value_type value_type;			
		typedef typename Container::size_type size_type;			
		typedef typename Container::reference reference;			
		typedef typename Container::const_reference const_reference;

	protected:
		container_type c;
		
	/* Member functions ********************************************************* */
	public:
		/* Coplien form ********************************************************** */
		explicit stack(const Container &cont = Container()) : c(cont){}; 
		stack(const stack &other) : c(other.c){};						 
		~stack(){};														 
		stack &operator=(const stack &other)							 
		{
			this->c = other.c;
			return (*this);
		};
		
		/* Element access *********************************************************** */
		reference top() { return (c.back()); };						
		const_reference top() const { return (c.back()); };			
		
		/* Capacity ***************************************************************** */
		bool empty() const { return (c.empty()); };					
		size_type size() const { return (c.size()); };				
		
		/* Modifiers **************************************************************** */
		void push(const value_type &value) { c.push_back(value); }; 
		void pop() { c.pop_back(); };								
		
		/* Non member functions ***************************************************** */
		friend bool operator==(const ft::stack<T, Container> &lhs, const ft::stack<T, Container> &rhs)
		{
			return (lhs.c == rhs.c);
		};

		friend bool operator!=(const ft::stack<T, Container> &lhs, const ft::stack<T, Container> &rhs)
		{
			return (lhs.c != rhs.c);
		};
		friend bool operator<(const ft::stack<T, Container> &lhs, const ft::stack<T, Container> &rhs)
		{
			return (lhs.c < rhs.c);
		};
		friend bool operator<=(const ft::stack<T, Container> &lhs, const ft::stack<T, Container> &rhs)
		{
			return (lhs.c <= rhs.c);
		};
		friend bool operator>(const ft::stack<T, Container> &lhs, const ft::stack<T, Container> &rhs)
		{
			return (lhs.c > rhs.c);
		};
		friend bool operator>=(const ft::stack<T, Container> &lhs, const ft::stack<T, Container> &rhs)
		{
			return (lhs.c >= rhs.c);
		};
	};

}
#endif
