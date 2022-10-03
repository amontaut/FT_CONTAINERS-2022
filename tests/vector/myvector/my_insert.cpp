/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_insert.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:35:46 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/26 12:39:12 by amontaut         ###   ########.fr       */
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
	std::cout << BLUE "/* Test for the member function insert ************************************** */" E << std::endl;
	std::cout << BLUE "/* Inserts elements at the specified location in the container. ************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with ints. ********************************************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	ft::vector<int> a_vector;
	for (int i = 0; i <= 5; i++)
		a_vector.push_back(i);
	ft::vector<int> other;
	for (int i = 100; i <= 600; i += 100)
		other.push_back(i);
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: inserts value 800 before the end :" E << std::endl;
	a_vector.insert(a_vector.end(), 800);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: inserts value 800 before the end (2nd time):" E << std::endl;
	a_vector.insert(a_vector.end(), 800);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: inserts value 8 before the end:" E << std::endl;
	a_vector.insert(a_vector.end(), 8);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 2: inserts 4 copies of the value 70 before the end -2" E << std::endl;
	a_vector.insert(a_vector.end() - 2, 4, 70);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: inserts value 40 before the beggining:" E << std::endl;
	a_vector.insert(a_vector.begin(), 40);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 3: inserts elements from vector other at the beginning of the vector a_vector" E << std::endl;
	a_vector.insert(a_vector.begin(), other.begin(), other.end());
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 3: inserts 3 first elements from vector other at the beginning of the vector a_vector" E << std::endl;
	a_vector.insert(a_vector.begin(), other.begin(), other.begin() + 3);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 2: inserts 2 copies of the value 100 before the end -4" E << std::endl;
	a_vector.insert(a_vector.end() - 4, 2, 100);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 3: inserts 0 elements from vector other at the beginning of the vector a_vector" E << std::endl;
	a_vector.insert(a_vector.begin(), other.begin(), other.begin());
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: inserts value 0 before the beggining + 3:" E << std::endl;
	a_vector.insert(a_vector.begin() + 3, 0);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 2: inserts 0 copies of the value -3 before the end" E << std::endl;
	a_vector.insert(a_vector.end(), 0, -3);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 30 so capacity > size" E << std::endl;
	a_vector.reserve(30);
	std::cout << BOLD "do: clear vector" E << std::endl;
	a_vector.clear();
	other.clear();
	for (int i = 0; i <= 5; i++)
		a_vector.push_back(i);
	for (int i = 100; i <= 600; i += 100)
		other.push_back(i);
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: inserts value 800 before the end :" E << std::endl;
	a_vector.insert(a_vector.end(), 800);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: inserts value 800 before the end (2nd time):" E << std::endl;
	a_vector.insert(a_vector.end(), 800);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: inserts value 8 before the end:" E << std::endl;
	a_vector.insert(a_vector.end(), 8);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 2: inserts 4 copies of the value 70 before the end -2" E << std::endl;
	a_vector.insert(a_vector.end() - 2, 4, 70);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: inserts value 40 before the beggining:" E << std::endl;
	a_vector.insert(a_vector.begin(), 40);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 3: inserts elements from vector other at the beginning of the vector a_vector" E << std::endl;
	a_vector.insert(a_vector.begin(), other.begin(), other.end());
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 3: inserts 3 first elements from vector other at the beginning of the vector a_vector" E << std::endl;
	a_vector.insert(a_vector.begin(), other.begin(), other.begin() + 3);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 2: inserts 2 copies of the value 100 before the end -4" E << std::endl;
	a_vector.insert(a_vector.end() - 4, 2, 100);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 3: inserts 0 elements from vector other at the beginning of the vector a_vector" E << std::endl;
	a_vector.insert(a_vector.begin(), other.begin(), other.begin());
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: inserts value 0 before the beggining + 3:" E << std::endl;
	a_vector.insert(a_vector.begin() + 3, 0);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 2: inserts 0 copies of the value -3 before the end" E << std::endl;
	a_vector.insert(a_vector.end(), 0, -3);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with str. ********************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	ft::vector<std::string> z_vector;
	z_vector.push_back("Paris");
	z_vector.push_back("Londres");
	z_vector.push_back("Singapour");
	z_vector.push_back("New York");
	z_vector.push_back("Sydney");
	ft::vector<std::string> z_other;
	z_other.push_back("Hola");
	z_other.push_back("Bonjour");
	z_other.push_back("Ciao");

	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: inserts value \"Madrid\" before the end :" E << std::endl;
	z_vector.insert(z_vector.end(), "Madrid");
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: inserts value \"Madrid\" before the end (2nd time):" E << std::endl;
	z_vector.insert(z_vector.end(), "Madrid");
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: inserts value \"Porto\" before the end:" E << std::endl;
	z_vector.insert(z_vector.end(), "Porto");
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 2: inserts 4 copies of the value \"Rio\" before the end -2" E << std::endl;
	z_vector.insert(z_vector.end() - 2, 4, "Rio");
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: inserts value \"Seoul\" before the beggining:" E << std::endl;
	z_vector.insert(z_vector.begin(), "Seoul");
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 3: inserts elements from vector z_other at the beginning of the vector z_vector" E << std::endl;
	z_vector.insert(z_vector.begin(), z_other.begin(), z_other.end());
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 3: inserts first element from vector z_other at the beginning of the vector z_vector" E << std::endl;
	z_vector.insert(z_vector.begin(), z_other.begin(), z_other.begin() + 1);
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 2: inserts 2 copies of the value \"Dakar\" before the end -4" E << std::endl;
	z_vector.insert(z_vector.end() - 4, 2, "Dakar");
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 3: inserts 0 element from vector z_other at the beginning of the vector z_vector" E << std::endl;
	z_vector.insert(z_vector.begin(), z_other.begin(), z_other.begin());
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 2: inserts 0 copies of the value \"Blackhole\" before the end" E << std::endl;
	z_vector.insert(z_vector.end(), 0, "Blackhole");
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 30 so capacity > size" E << std::endl;
	z_vector.reserve(30);
	std::cout << BOLD "do: clear vector" E << std::endl;
	z_vector.clear();
	z_other.clear();

	z_vector.push_back("Paris");
	z_vector.push_back("Londres");
	z_vector.push_back("Singapour");
	z_vector.push_back("New York");
	z_vector.push_back("Sydney");
	z_other.push_back("Hola");
	z_other.push_back("Bonjour");
	z_other.push_back("Ciao");

	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: inserts value \"Madrid\" before the end :" E << std::endl;
	z_vector.insert(z_vector.end(), "Madrid");
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: inserts value \"Madrid\" before the end (2nd time):" E << std::endl;
	z_vector.insert(z_vector.end(), "Madrid");
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: inserts value \"Porto\" before the end:" E << std::endl;
	z_vector.insert(z_vector.end(), "Porto");
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 2: inserts 4 copies of the value \"Rio\" before the end -2" E << std::endl;
	z_vector.insert(z_vector.end() - 2, 4, "Rio");
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: inserts value \"Seoul\" before the beggining:" E << std::endl;
	z_vector.insert(z_vector.begin(), "Seoul");
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 3: inserts elements from vector z_other at the beginning of the vector z_vector" E << std::endl;
	z_vector.insert(z_vector.begin(), z_other.begin(), z_other.end());
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 3: inserts first element from vector z_other at the beginning of the vector z_vector" E << std::endl;
	z_vector.insert(z_vector.begin(), z_other.begin(), z_other.begin() + 1);
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 2: inserts 2 copies of the value \"Dakar\" before the end -4" E << std::endl;
	z_vector.insert(z_vector.end() - 4, 2, "Dakar");
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 3: inserts 0 element from vector z_other at the beginning of the vector z_vector" E << std::endl;
	z_vector.insert(z_vector.begin(), z_other.begin(), z_other.begin());
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "Proto 2: inserts 0 copies of the value \"Blackhole\" before the end" E << std::endl;
	z_vector.insert(z_vector.end(), 0, "Blackhole");
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;
	return (0);
}