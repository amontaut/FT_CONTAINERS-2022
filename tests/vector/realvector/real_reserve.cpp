/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_reserve.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:35:46 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/26 10:19:16 by amontaut         ###   ########.fr       */
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
	std::cout << BLUE "/* Test for the member function reserve ************************************* */" E << std::endl;
	std::cout << BLUE "/* Increase the capacity of the container to a value that's greater or ****** */" E << std::endl;
	std::cout << BLUE "/* equal to new_cap. ******************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with ints. ********************************************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;
	std::vector<int> a_vector;
	std::cout << "a_vector is (empty vector):" << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */<< E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 12 (the new capacity is greater than the current (the vector is empty)): " E << std::endl;
	a_vector.reserve(12);
	std::cout << "a_vector is: " << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << "The new capacity is: " << a_vector.capacity() << ITGREY " || size is: " << a_vector.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: add values to the vector (we add less values than the capacity)" E << std::endl;
	for (int i = 1; i <= 100; i += 11)
		a_vector.push_back(i);
	std::cout << "a_vector is:" << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "The capacity is: " << a_vector.capacity() << ITGREY " || size is: " << a_vector.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 4 (the new capacity is less than the current): " E << std::endl;
	a_vector.reserve(4);
	std::cout << "a_vector is: " << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "The new capacity is: " << a_vector.capacity() << ITGREY " || size is: " << a_vector.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 12 (the new capacity is same as the current): " E << std::endl;
	a_vector.reserve(4);
	std::cout << "a_vector is: " << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "The new capacity is: " << a_vector.capacity() << ITGREY " || size is: " << a_vector.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 13 (the new capacity is greater than the current): " E << std::endl;
	a_vector.reserve(13);
	std::cout << "a_vector is: " << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "The new capacity is: " << a_vector.capacity() << ITGREY " || size is: " << a_vector.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 0 (the new capacity is less than the current): " E << std::endl;
	a_vector.reserve(0);
	std::cout << "a_vector is: " << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "The new capacity is: " << a_vector.capacity() << ITGREY " || size is: " << a_vector.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve of max_size + 1 (the new capacity is greater than the current): " E << std::endl;
	try
	{
		a_vector.reserve(a_vector.max_size() + 1);
	}
	catch (std::length_error const &excmax)
	{
		std::cout << "exceeds maximum supported size" << std::endl;
	}
	std::cout << "a_vector is: " << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "The new capacity is: " << a_vector.capacity() << ITGREY " || size is: " << a_vector.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with str. ********************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::vector<std::string> z_vector;

	std::cout << "z_vector is (empty vector):" << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 12 (the new capacity is greater than the current (the vector is empty)): " E << std::endl;
	z_vector.reserve(12);
	std::cout << "z_vector is: " << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << "The new capacity is: " << z_vector.capacity() << ITGREY " || size is: " << z_vector.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: add values to the vector (we add less values than the capacity)" E << std::endl;
	z_vector.push_back("Paris");
	z_vector.push_back("Londres");
	z_vector.push_back("Singapour");
	z_vector.push_back("New York");
	z_vector.push_back("Sydney");
	std::cout << "z_vector is:" << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "The capacity is: " << z_vector.capacity() << ITGREY " || size is: " << z_vector.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 4 (the new capacity is less than the current): " E << std::endl;
	z_vector.reserve(4);
	std::cout << "z_vector is: " << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "The new capacity is: " << z_vector.capacity() << ITGREY " || size is: " << z_vector.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 12 (the new capacity is same as the current): " E << std::endl;
	z_vector.reserve(4);
	std::cout << "z_vector is: " << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "The new capacity is: " << z_vector.capacity() << ITGREY " || size is: " << z_vector.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 13 (the new capacity is greater than the current): " E << std::endl;
	z_vector.reserve(13);
	std::cout << "z_vector is: " << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "The new capacity is: " << z_vector.capacity() << ITGREY " || size is: " << z_vector.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 0 (the new capacity is less than the current): " E << std::endl;
	z_vector.reserve(0);
	std::cout << "z_vector is: " << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "The new capacity is: " << z_vector.capacity() << ITGREY " || size is: " << z_vector.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve of max_size + 1 (the new capacity is greater than the current): " E << std::endl;
	try
	{
		z_vector.reserve(z_vector.max_size() + 1);
	}
	catch (std::length_error const &excmax)
	{
		std::cout << "exceeds maximum supported size" << std::endl;
	}
	std::cout << "z_vector is: " << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "The new capacity is: " << z_vector.capacity() << ITGREY " || size is: " << z_vector.size() << E;
	std::cout << std::endl;

	return (0);
}