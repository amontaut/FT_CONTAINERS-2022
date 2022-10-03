/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_at.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:35:46 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/27 09:54:37 by amontaut         ###   ########.fr       */
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
	std::cout << BLUE "/* Test for the member function at ****************************************** */" E << std::endl;
	std::cout << BLUE "/* Returns a reference to the element at specified location pos, ************ */" E << std::endl;
	std::cout << BLUE "/* with bounds checking. **************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with ints. ********************************************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: function at NOT CONST" E << std::endl;
	ft::vector<int> a_vector;
	for (int i = 0; i <= 8; i += 2)
		a_vector.push_back(i);
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;

	try
	{
		std::cout << "In 3rd position of my vector: " << a_vector.at(2) << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In 8th position of my vector (out of range): " << a_vector.at(7) << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In 0th position of my vector: " << a_vector.at(0) << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In -1th position of my vector (out of range): " << a_vector.at(-1) << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << BOLD "Proto 2: function at CONST" E << std::endl;
	const ft::vector<int> const_a_vector = a_vector;
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "const_a_vector is:" << std::endl;
	for (ft::vector<int>::const_iterator it = const_a_vector.begin(); it != const_a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << const_a_vector.size() /* << " || capacity is: " << const_a_vector.capacity() */ << E;
	std::cout << std::endl;

	try
	{
		std::cout << "In 3rd position of my vector: " << const_a_vector.at(2) << ITGREY " || size is: " << const_a_vector.size() /* << " || capacity is: " << const_a_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In 8th position of my vector (out of range): " << const_a_vector.at(7) << ITGREY " || size is: " << const_a_vector.size() /* << " || capacity is: " << const_a_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In 0th position of my vector: " << const_a_vector.at(0) << ITGREY " || size is: " << const_a_vector.size() /* << " || capacity is: " << const_a_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In -1th position of my vector (out of range): " << const_a_vector.at(-1) << ITGREY " || size is: " << const_a_vector.size() /* << " || capacity is: " << const_a_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	std::cout << BOLD "do: reserve 30 so capacity > size" E << std::endl;
	a_vector.reserve(30);
	std::cout << BOLD "do: clear vector" E << std::endl;
	a_vector.clear();

	std::cout << BOLD "Proto 1: function at NOT CONST" E << std::endl;
	for (int i = 0; i <= 8; i += 2)
		a_vector.push_back(i);
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;

	try
	{
		std::cout << "In 3rd position of my vector: " << a_vector.at(2) << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In 8th position of my vector (out of range): " << a_vector.at(7) << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In 0th position of my vector: " << a_vector.at(0) << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In -1th position of my vector (out of range): " << a_vector.at(-1) << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << BOLD "Proto 2: function at CONST" E << std::endl;
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "const_a_vector is:" << std::endl;
	for (ft::vector<int>::const_iterator it = const_a_vector.begin(); it != const_a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << const_a_vector.size() /* << " || capacity is: " << const_a_vector.capacity() */ << E;
	std::cout << std::endl;

	try
	{
		std::cout << "In 3rd position of my vector: " << const_a_vector.at(2) << ITGREY " || size is: " << const_a_vector.size() /* << " || capacity is: " << const_a_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In 8th position of my vector (out of range): " << const_a_vector.at(7) << ITGREY " || size is: " << const_a_vector.size() /* << " || capacity is: " << const_a_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In 0th position of my vector: " << const_a_vector.at(0) << ITGREY " || size is: " << const_a_vector.size() /* << " || capacity is: " << const_a_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In -1th position of my vector (out of range): " << const_a_vector.at(-1) << ITGREY " || size is: " << const_a_vector.size() /* << " || capacity is: " << const_a_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with str. ********************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: function at NOT CONST" E << std::endl;
	ft::vector<std::string> z_vector;
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

	try
	{
		std::cout << "In 3rd position of my vector: " << z_vector.at(2) << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In 8th position of my vector (out of range): " << z_vector.at(7) << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In 0th position of my vector: " << z_vector.at(0) << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In -1th position of my vector (out of range): " << z_vector.at(-1) << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << BOLD "Proto 2: function at CONST" E << std::endl;
	const ft::vector<std::string> const_z_vector = z_vector;
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "const_z_vector is:" << std::endl;
	for (ft::vector<std::string>::const_iterator it = const_z_vector.begin(); it != const_z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << const_z_vector.size() /* << " || capacity is: " << const_z_vector.capacity() */ << E;
	std::cout << std::endl;

	try
	{
		std::cout << "In 3rd position of my vector: " << const_z_vector.at(2) << ITGREY " || size is: " << const_z_vector.size() /* << " || capacity is: " << const_z_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In 8th position of my vector (out of range): " << const_z_vector.at(7) << ITGREY " || size is: " << const_z_vector.size() /* << " || capacity is: " << const_z_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In 0th position of my vector: " << const_z_vector.at(0) << ITGREY " || size is: " << const_z_vector.size() /* << " || capacity is: " << const_z_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In -1th position of my vector (out of range): " << const_z_vector.at(-1) << ITGREY " || size is: " << const_z_vector.size() /* << " || capacity is: " << const_z_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	std::cout << BOLD "do: reserve 30 so capacity > size" E << std::endl;
	z_vector.reserve(30);
	std::cout << BOLD "do: clear vector" E << std::endl;
	z_vector.clear();

	std::cout << BOLD "Proto 1: function at NOT CONST" E << std::endl;
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

	try
	{
		std::cout << "In 3rd position of my vector: " << z_vector.at(2) << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In 8th position of my vector (out of range): " << z_vector.at(7) << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In 0th position of my vector: " << z_vector.at(0) << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In -1th position of my vector (out of range): " << z_vector.at(-1) << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << BOLD "Proto 2: function at CONST" E << std::endl;
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "const_z_vector is:" << std::endl;
	for (ft::vector<std::string>::const_iterator it = const_z_vector.begin(); it != const_z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << const_z_vector.size() /* << " || capacity is: " << const_z_vector.capacity() */ << E;
	std::cout << std::endl;

	try
	{
		std::cout << "In 3rd position of my vector: " << const_z_vector.at(2) << ITGREY " || size is: " << const_z_vector.size() /* << " || capacity is: " << const_z_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In 8th position of my vector (out of range): " << const_z_vector.at(7) << ITGREY " || size is: " << const_z_vector.size() /* << " || capacity is: " << const_z_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In 0th position of my vector: " << const_z_vector.at(0) << ITGREY " || size is: " << const_z_vector.size() /* << " || capacity is: " << const_z_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "In -1th position of my vector (out of range): " << const_z_vector.at(-1) << ITGREY " || size is: " << const_z_vector.size() /* << " || capacity is: " << const_z_vector.capacity() */ << E << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	return (0);
}