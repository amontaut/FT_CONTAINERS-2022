/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_operator>.cpp                                 :+:      :+:    :+:   */
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
	std::cout << BLUE "/* Test for the non-member function operator> ******************************* */" E << std::endl;
	std::cout << BLUE "/* Checks if the contents of lhs and rhs are equal. ************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with ints. ********************************************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	ft::stack<int> a_stack;
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "a_stack is (empty stack):" << std::endl;
	for (ft::stack<int> tmp = a_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << a_stack.size() << E;
	std::cout << std::endl;
	ft::stack<int> a_other;
	std::cout << "a_other is (empty stack):" << std::endl;
	for (ft::stack<int> tmp = a_other; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << a_other.size() << E;
	std::cout << std::endl;

	if (a_stack > a_other)
		std::cout << GREEN "Contents of a_stack are lexicographically greater than the contents of a_other" E << std::endl;
	else
		std::cout << RED "Contents of a_stack are lexicographically less than or equal to the contents of a_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: insert values in the stacks: " E << std::endl;
	for (int i = 0; i <= 8; i += 2)
		a_other.push(i);
	for (int i = 0; i <= 8; i += 2)
		a_stack.push(i);
	std::cout << "a_stack is:" << std::endl;
	for (ft::stack<int> tmp = a_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << a_stack.size() << E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (ft::stack<int> tmp = a_other; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << a_other.size() << E;
	std::cout << std::endl;

	if (a_stack > a_other)
		std::cout << GREEN "Contents of a_stack are lexicographically greater than the contents of a_other" E << std::endl;
	else
		std::cout << RED "Contents of a_stack are lexicographically less than or equal to the contents of a_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	a_other.pop();
	std::cout << "a_stack is:" << std::endl;
	for (ft::stack<int> tmp = a_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << a_stack.size() << E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (ft::stack<int> tmp = a_other; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << a_other.size() << E;
	std::cout << std::endl;

	if (a_stack > a_other)
		std::cout << GREEN "Contents of a_stack are lexicographically greater than the contents of a_other" E << std::endl;
	else
		std::cout << RED "Contents of a_stack are lexicographically less than or equal to the contents of a_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	a_stack.pop();
	a_stack.pop();
	std::cout << "a_stack is:" << std::endl;
	for (ft::stack<int> tmp = a_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << a_stack.size() << E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (ft::stack<int> tmp = a_other; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << a_other.size() << E;
	std::cout << std::endl;

	if (a_stack > a_other)
		std::cout << GREEN "Contents of a_stack are lexicographically greater than the contents of a_other" E << std::endl;
	else
		std::cout << RED "Contents of a_stack are lexicographically less than or equal to the contents of a_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with str. ********************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	ft::stack<std::string> z_stack;
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "z_stack is (empty stack):" << std::endl;
	for (ft::stack<std::string> tmp = z_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << z_stack.size() << E;
	std::cout << std::endl;
	ft::stack<std::string> z_other;
	for (ft::stack<std::string> tmp = z_other; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << z_other.size() << E;
	std::cout << std::endl;

	if (z_stack > z_other)
		std::cout << GREEN "Contents of z_stack are lexicographically greater than the contents of z_other" E << std::endl;
	else
		std::cout << RED "Contents of z_stack are lexicographically less than or equal to the contents of z_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: insert values in the stacks: " E << std::endl;
	z_stack.push("Paris");
	z_stack.push("Londres");
	z_stack.push("Singapour");
	z_stack.push("New York");
	z_stack.push("Sydney");
	z_other.push("Paris");
	z_other.push("Londres");
	z_other.push("Singapour");
	z_other.push("New York");
	z_other.push("Sydney");
	std::cout << "z_stack is:" << std::endl;
	for (ft::stack<std::string> tmp = z_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << z_stack.size() << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (ft::stack<std::string> tmp = z_other; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << z_other.size() << E;
	std::cout << std::endl;

	if (z_stack > z_other)
		std::cout << GREEN "Contents of z_stack are lexicographically greater than the contents of z_other" E << std::endl;
	else
		std::cout << RED "Contents of z_stack are lexicographically less than or equal to the contents of z_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	z_other.pop();
	std::cout << "z_stack is:" << std::endl;
	for (ft::stack<std::string> tmp = z_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << z_stack.size() << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (ft::stack<std::string> tmp = z_other; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << z_other.size() << E;
	std::cout << std::endl;

	if (z_stack > z_other)
		std::cout << GREEN "Contents of z_stack are lexicographically greater than the contents of z_other" E << std::endl;
	else
		std::cout << RED "Contents of z_stack are lexicographically less than or equal to the contents of z_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	z_stack.pop();
	z_stack.pop();
	std::cout << "z_stack is:" << std::endl;
	for (ft::stack<std::string> tmp = z_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << z_stack.size() << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (ft::stack<std::string> tmp = z_other; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << z_other.size() << E;
	std::cout << std::endl;

	if (z_stack > z_other)
		std::cout << GREEN "Contents of z_stack are lexicographically greater than the contents of z_other" E << std::endl;
	else
		std::cout << RED "Contents of z_stack are lexicographically less than or equal to the contents of z_other" E << std::endl;

	return (0);
}