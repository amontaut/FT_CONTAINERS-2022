/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_pop.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:35:46 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/26 16:50:24 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#include <iterator>
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
	std::cout << BLUE "/* Test for the member function pop ***************************************** */" E << std::endl;
	std::cout << BLUE "/* Removes the last element of the container. ******************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with ints. ********************************************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	ft::stack<int> a_stack;
	a_stack.push(-12);
	a_stack.push(42);
	a_stack.push(123);
	a_stack.push(50);
	a_stack.push(-3);
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "a_stack is:" << std::endl;
	for (ft::stack<int> tmp = a_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << a_stack.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: pop: " E << std::endl;
	a_stack.pop();
	std::cout << "a_stack is:" << std::endl;
	for (ft::stack<int> tmp = a_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << a_stack.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: remove all values using pop in a loop: " E << std::endl;
	for (int i = a_stack.size(); i > 0; i--)
		a_stack.pop();
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
	z_stack.push("Paris");
	z_stack.push("Londres");
	z_stack.push("Singapour");
	z_stack.push("New York");
	z_stack.push("Sydney");
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "z_stack is:" << std::endl;
	for (ft::stack<std::string> tmp = z_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << z_stack.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: pop: " E << std::endl;
	z_stack.pop();
	std::cout << "z_stack is:" << std::endl;
	for (ft::stack<std::string> tmp = z_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << z_stack.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: remove all values using pop in a loop: " E << std::endl;
	for (int i = z_stack.size(); i > 0; i--)
		z_stack.pop();
	std::cout << "z_stack is:" << std::endl;
	for (ft::stack<std::string> tmp = z_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << z_stack.size() << E;
	std::cout << std::endl;

	return (0);
}