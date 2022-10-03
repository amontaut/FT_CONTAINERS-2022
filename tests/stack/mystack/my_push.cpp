/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_push.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:35:46 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/25 16:52:37 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <iterator>
#include <limits.h>
#include "../../../containers/stack.hpp"

#define GREY "\e[0;30m"
#define RED "\e[0;31m"
#define GREEN "\e[0;32m"
#define YELLOW "\e[0;33m"
#define BLUE "\e[0;34m"
#define MAGENTA "\e[0;35m"
#define CYAN "\e[0;36m"
#define WHITE "\e[0;37m"
#define BOLD "\e[1;37m"
#define ITALIC "\e[3;37m"
#define ITGREY "\e[3;30m"
#define UNDERL "\e[4;37m"
#define E "\e[0m"

int main()
{
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Test for the member function push **************************************** */" E << std::endl;
	std::cout << BLUE "/* Appends the given element value to the end of the container. ************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with ints. ********************************************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	ft::stack<int> a_stack;
	std::cout << "a_stack is (empty stack):" << std::endl;
	for (ft::stack<int> tmp = a_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << a_stack.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: add value on an emtpy stack using push: " E << std::endl;
	a_stack.push(42);
	std::cout << "a_stack is:" << std::endl;
	for (ft::stack<int> tmp = a_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << a_stack.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: add values using push in a loop: " E << std::endl;
	for (int i = 0; i <= 100; i += 11)
		a_stack.push(i);
	std::cout << "a_stack is:" << std::endl;
	for (ft::stack<int> tmp = a_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << a_stack.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: add weird values: " E << std::endl;
	a_stack.push(0);
	a_stack.push(-42);
	a_stack.push(INT_MAX);
	a_stack.push(INT_MIN);
	a_stack.push('a');
	std::cout << "a_stack is:" << std::endl;
	for (ft::stack<int> tmp = a_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << a_stack.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with str. ********************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	ft::stack<std::string> z_stack;
	std::cout << "z_stack is (empty stack):" << std::endl;
	std::cout << "z_stack is:" << std::endl;
	for (ft::stack<std::string> tmp = z_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << z_stack.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: add value on an emtpy stack using push: " E << std::endl;
	z_stack.push("Earth");
	std::cout << "z_stack is:" << std::endl;
	for (ft::stack<std::string> tmp = z_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << z_stack.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: add values using push in a loop: " E << std::endl;
	for (int i = 0; i < 2; i++)
		z_stack.push("Satellite");
	std::cout << "z_stack is:" << std::endl;
	for (ft::stack<std::string> tmp = z_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << z_stack.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: add weird values: " E << std::endl;
	z_stack.push("a");
	std::cout << "z_stack is:" << std::endl;
	for (ft::stack<std::string> tmp = z_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << z_stack.size() << E;
	std::cout << std::endl;

	return (0);
}