/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_operator<=.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:35:46 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/26 11:49:17 by amontaut         ###   ########.fr       */
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
	std::cout << BLUE "/* Test for the non-member function operator<= ****************************** */*/" E << std::endl;
	std::cout << BLUE "/* Compares the contents of lhs and rhs lexicographically. ****************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with ints. ********************************************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::vector<int> a_vector;
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "a_vector is (empty vector):" << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::vector<int> a_other;
	std::cout << "a_other is (empty vector):" << std::endl;
	for (std::vector<int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (a_vector <= a_other)
		std::cout << RED "Contents of a_vector are lexicographically less or equal to the contents of a_other" E << std::endl;
	else
		std::cout << GREEN "Contents of a_vector are lexicographically greater than the contents of a_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: insert values in the vectors: " E << std::endl;
	for (int i = 0; i <= 8; i += 2)
		a_other.push_back(i);
	for (int i = 0; i <= 8; i += 2)
		a_vector.push_back(i);
	std::cout << "a_vector is:" << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (std::vector<int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (a_vector <= a_other)
		std::cout << RED "Contents of a_vector are lexicographically less or equal to the contents of a_other" E << std::endl;
	else
		std::cout << GREEN "Contents of a_vector are lexicographically greater than the contents of a_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	a_other[1] = 0;
	a_other[0] = 2;
	std::cout << "a_vector is:" << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (std::vector<int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (a_vector <= a_other)
		std::cout << RED "Contents of a_vector are lexicographically less or equal to the contents of a_other" E << std::endl;
	else
		std::cout << GREEN "Contents of a_vector are lexicographically greater than the contents of a_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	a_other.erase(a_other.begin());
	std::cout << "a_vector is:" << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (std::vector<int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (a_vector <= a_other)
		std::cout << RED "Contents of a_vector are lexicographically less or equal to the contents of a_other" E << std::endl;
	else
		std::cout << GREEN "Contents of a_vector are lexicographically greater than the contents of a_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	a_vector.erase(a_vector.begin());
	a_vector.erase(a_vector.begin());
	std::cout << "a_vector is:" << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (std::vector<int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (a_vector <= a_other)
		std::cout << RED "Contents of a_vector are lexicographically less or equal to the contents of a_other" E << std::endl;
	else
		std::cout << GREEN "Contents of a_vector are lexicographically greater than the contents of a_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 30 so capacity > size" E << std::endl;
	a_vector.reserve(30);
	std::cout << BOLD "do: clear vector" E << std::endl;
	a_vector.clear();
	a_other.clear();

	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "a_vector is (empty vector):" << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "a_other is (empty vector):" << std::endl;
	for (std::vector<int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (a_vector <= a_other)
		std::cout << RED "Contents of a_vector are lexicographically less or equal to the contents of a_other" E << std::endl;
	else
		std::cout << GREEN "Contents of a_vector are lexicographically greater than the contents of a_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: insert values in the vectors: " E << std::endl;
	for (int i = 0; i <= 8; i += 2)
		a_other.push_back(i);
	for (int i = 0; i <= 8; i += 2)
		a_vector.push_back(i);
	std::cout << "a_vector is:" << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (std::vector<int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (a_vector <= a_other)
		std::cout << RED "Contents of a_vector are lexicographically less or equal to the contents of a_other" E << std::endl;
	else
		std::cout << GREEN "Contents of a_vector are lexicographically greater than the contents of a_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	a_other[1] = 0;
	a_other[0] = 2;
	std::cout << "a_vector is:" << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (std::vector<int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (a_vector <= a_other)
		std::cout << RED "Contents of a_vector are lexicographically less or equal to the contents of a_other" E << std::endl;
	else
		std::cout << GREEN "Contents of a_vector are lexicographically greater than the contents of a_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	a_other.erase(a_other.begin());
	std::cout << "a_vector is:" << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (std::vector<int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (a_vector <= a_other)
		std::cout << RED "Contents of a_vector are lexicographically less or equal to the contents of a_other" E << std::endl;
	else
		std::cout << GREEN "Contents of a_vector are lexicographically greater than the contents of a_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	a_vector.erase(a_vector.begin());
	a_vector.erase(a_vector.begin());
	std::cout << "a_vector is:" << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (std::vector<int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (a_vector <= a_other)
		std::cout << RED "Contents of a_vector are lexicographically less or equal to the contents of a_other" E << std::endl;
	else
		std::cout << GREEN "Contents of a_vector are lexicographically greater than the contents of a_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with str. ********************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::vector<std::string> z_vector;
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "z_vector is (empty vector):" << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::vector<std::string> z_other;
	std::cout << "z_other is (empty vector):" << std::endl;
	for (std::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (z_vector <= z_other)
		std::cout << RED "Contents of z_vector are lexicographically less or equal to the contents of z_other" E << std::endl;
	else
		std::cout << GREEN "Contents of z_vector are lexicographically greater than the contents of z_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: insert values in the vectors: " E << std::endl;
	z_vector.push_back("Paris");
	z_vector.push_back("Londres");
	z_vector.push_back("Singapour");
	z_vector.push_back("New York");
	z_vector.push_back("Sydney");
	z_other.push_back("Paris");
	z_other.push_back("Londres");
	z_other.push_back("Singapour");
	z_other.push_back("New York");
	z_other.push_back("Sydney");
	std::cout << "z_vector is:" << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (std::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (z_vector <= z_other)
		std::cout << RED "Contents of z_vector are lexicographically less or equal to the contents of z_other" E << std::endl;
	else
		std::cout << GREEN "Contents of z_vector are lexicographically greater than the contents of z_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	z_other[1] = "Paris";
	z_other[0] = "Londres";
	std::cout << "z_vector is:" << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (std::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (z_vector <= z_other)
		std::cout << RED "Contents of z_vector are lexicographically less or equal to the contents of z_other" E << std::endl;
	else
		std::cout << GREEN "Contents of z_vector are lexicographically greater than the contents of z_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	z_other.erase(z_other.begin());
	std::cout << "z_vector is:" << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (std::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (z_vector <= z_other)
		std::cout << RED "Contents of z_vector are lexicographically less or equal to the contents of z_other" E << std::endl;
	else
		std::cout << GREEN "Contents of z_vector are lexicographically greater than the contents of z_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	z_vector.erase(z_vector.begin());
	z_vector.erase(z_vector.begin());
	std::cout << "z_vector is:" << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (std::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (z_vector <= z_other)
		std::cout << RED "Contents of z_vector are lexicographically less or equal to the contents of z_other" E << std::endl;
	else
		std::cout << GREEN "Contents of z_vector are lexicographically greater than the contents of z_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 30 so capacity > size" E << std::endl;
	z_vector.reserve(30);
	std::cout << BOLD "do: clear vector" E << std::endl;
	z_vector.clear();
	z_other.clear();

	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "z_vector is (empty vector):" << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is (empty vector):" << std::endl;
	for (std::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (z_vector <= z_other)
		std::cout << RED "Contents of z_vector are lexicographically less or equal to the contents of z_other" E << std::endl;
	else
		std::cout << GREEN "Contents of z_vector are lexicographically greater than the contents of z_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: insert values in the vectors: " E << std::endl;
	z_vector.push_back("Paris");
	z_vector.push_back("Londres");
	z_vector.push_back("Singapour");
	z_vector.push_back("New York");
	z_vector.push_back("Sydney");
	z_other.push_back("Paris");
	z_other.push_back("Londres");
	z_other.push_back("Singapour");
	z_other.push_back("New York");
	z_other.push_back("Sydney");
	std::cout << "z_vector is:" << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (std::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (z_vector <= z_other)
		std::cout << RED "Contents of z_vector are lexicographically less or equal to the contents of z_other" E << std::endl;
	else
		std::cout << GREEN "Contents of z_vector are lexicographically greater than the contents of z_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	z_other[1] = "Paris";
	z_other[0] = "Londres";
	std::cout << "z_vector is:" << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (std::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (z_vector <= z_other)
		std::cout << RED "Contents of z_vector are lexicographically less or equal to the contents of z_other" E << std::endl;
	else
		std::cout << GREEN "Contents of z_vector are lexicographically greater than the contents of z_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	z_other.erase(z_other.begin());
	std::cout << "z_vector is:" << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (std::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (z_vector <= z_other)
		std::cout << RED "Contents of z_vector are lexicographically less or equal to the contents of z_other" E << std::endl;
	else
		std::cout << GREEN "Contents of z_vector are lexicographically greater than the contents of z_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	z_vector.erase(z_vector.begin());
	z_vector.erase(z_vector.begin());
	std::cout << "z_vector is:" << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (std::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */ << E;
	std::cout << std::endl;

	if (z_vector <= z_other)
		std::cout << RED "Contents of z_vector are lexicographically less or equal to the contents of z_other" E << std::endl;
	else
		std::cout << GREEN "Contents of z_vector are lexicographically greater than the contents of z_other" E << std::endl;

	return (0);
}