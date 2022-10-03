/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_begin_end.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:35:46 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/26 16:44:44 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <iterator>
#include "../../../containers/vector.hpp"

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
	std::cout << BLUE "/* Test for the member functions begin and end ****************************** */" E << std::endl;
	std::cout << BLUE "/* (begin) Returns a iterator to the first element of the vector. *********** */" E << std::endl;
	std::cout << BLUE "/* (end) Returns a iterator to the last element of the vector. ************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with ints. ********************************************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: functions begin and end NOT CONST" E << std::endl;
	ft::vector<int> a_vector;
	std::cout << "a_vector is (empty vector):" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;

	std::cout << BOLD "do: add values to the vector" E << std::endl;
	for (int i = 1; i <= 100; i += 11)
		a_vector.push_back(i);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 2: function begin and end CONST" E << std::endl;
	const ft::vector<int> const_a_vector = a_vector;
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "const_a_vector is:" << std::endl;
	for (ft::vector<int>::const_iterator it = const_a_vector.begin(); it != const_a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << const_a_vector.size() /* << " || capacity is: " << const_a_vector.capacity() */ << E;
	std::cout << std::endl;

	std::cout << BOLD "do: reserve 30 so capacity > size" E << std::endl;
	a_vector.reserve(30);
	std::cout << BOLD "do: clear vector" E << std::endl;
	a_vector.clear();

	std::cout << BOLD "Proto 1: functions begin and end NOT CONST" E << std::endl;
	std::cout << "a_vector is (empty vector):" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;

	std::cout << BOLD "do: add values to the vector" E << std::endl;
	for (int i = 1; i <= 100; i += 11)
		a_vector.push_back(i);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 2: function begin and end CONST" E << std::endl;
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "const_a_vector is:" << std::endl;
	for (ft::vector<int>::const_iterator it = const_a_vector.begin(); it != const_a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << const_a_vector.size() /* << " || capacity is: " << const_a_vector.capacity() */ << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with str. ********************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: function begin and end NOT CONST" E << std::endl;
	ft::vector<std::string> z_vector;
	std::cout << "a_vector is (empty vector):" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;

	std::cout << BOLD "do: add values to the vector" E << std::endl;
	z_vector.push_back("Paris");
	z_vector.push_back("Londres");
	z_vector.push_back("Singapour");
	z_vector.push_back("New York");
	z_vector.push_back("Sydney");
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 2: function begin and end CONST" E << std::endl;
	const ft::vector<std::string> const_z_vector = z_vector;
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "const_z_vector is:" << std::endl;
	for (ft::vector<std::string>::const_iterator it = const_z_vector.begin(); it != const_z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << const_z_vector.size() /* << " || capacity is: " << const_z_vector.capacity() */ << E;
	std::cout << std::endl;

	std::cout << BOLD "do: reserve 30 so capacity > size" E << std::endl;
	z_vector.reserve(30);
	std::cout << BOLD "do: clear vector" E << std::endl;
	z_vector.clear();

	std::cout << BOLD "Proto 1: function begin and end NOT CONST" E << std::endl;
	std::cout << "a_vector is (empty vector):" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;

	std::cout << BOLD "do: add values to the vector" E << std::endl;
	z_vector.push_back("Paris");
	z_vector.push_back("Londres");
	z_vector.push_back("Singapour");
	z_vector.push_back("New York");
	z_vector.push_back("Sydney");
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 2: function begin and end CONST" E << std::endl;
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "const_z_vector is:" << std::endl;
	for (ft::vector<std::string>::const_iterator it = const_z_vector.begin(); it != const_z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << const_z_vector.size() /* << " || capacity is: " << const_z_vector.capacity() */ << E;
	std::cout << std::endl;
	return (0);
}