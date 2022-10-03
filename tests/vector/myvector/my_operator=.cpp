/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_operator=.cpp                                   :+:      :+:    :+:   */
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
#define UNDERL "\e[4;30m"
#define E "\e[0m"

int main()
{

	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Test for the non-member function operator= ******************************* */" E << std::endl;
	std::cout << BLUE "/* Replaces the contents of the container. ********************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with ints. ********************************************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	ft::vector<int> a_vector;
	ft::vector<int> b_vector;
	ft::vector<int> c_vector;
	ft::vector<int> d_vector;

	for (int i = 0; i <= 5; i++)
		a_vector.push_back(i);
	for (int i = 11; i <= 22; i += 11)
		b_vector.push_back(i);

	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "b_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = b_vector.begin(); it != b_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << b_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "c_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = c_vector.begin(); it != c_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << c_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "d_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = d_vector.begin(); it != d_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << d_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: c_vector = a_vector" E << std::endl;
	c_vector = a_vector;
	std::cout << "c_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = c_vector.begin(); it != c_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << c_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: c_vector = b_vector" E << std::endl;
	c_vector = b_vector;
	std::cout << "c_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = c_vector.begin(); it != c_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << c_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: c_vector = d_vector" E << std::endl;
	c_vector = d_vector;
	std::cout << "c_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = c_vector.begin(); it != c_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << c_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 30 so capacity > size" E << std::endl;
	a_vector.reserve(30);
	std::cout << BOLD "do: clear vector" E << std::endl;
	a_vector.clear();
	b_vector.clear();
	c_vector.clear();
	d_vector.clear();

	for (int i = 0; i <= 5; i++)
		a_vector.push_back(i);
	for (int i = 11; i <= 22; i += 11)
		b_vector.push_back(i);

	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "b_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = b_vector.begin(); it != b_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << b_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "c_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = c_vector.begin(); it != c_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << c_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "d_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = d_vector.begin(); it != d_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << d_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: c_vector = a_vector" E << std::endl;
	c_vector = a_vector;
	std::cout << "c_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = c_vector.begin(); it != c_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << c_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: c_vector = b_vector" E << std::endl;
	c_vector = b_vector;
	std::cout << "c_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = c_vector.begin(); it != c_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << c_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: c_vector = d_vector" E << std::endl;
	c_vector = d_vector;
	std::cout << "c_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = c_vector.begin(); it != c_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << c_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with str. ********************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	ft::vector<std::string> w_vector;
	ft::vector<std::string> x_vector;
	ft::vector<std::string> y_vector;
	ft::vector<std::string> z_vector;
	w_vector.push_back("Paris");
	w_vector.push_back("Londres");
	w_vector.push_back("Singapour");
	w_vector.push_back("New York");
	w_vector.push_back("Sydney");
	x_vector.push_back("Rue");
	x_vector.push_back("Place");

	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "w_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = w_vector.begin(); it != w_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << w_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "x_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = x_vector.begin(); it != x_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << x_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "y_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = y_vector.begin(); it != y_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << y_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = y_vector.begin(); it != y_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << y_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: y_vector = w_vector" E << std::endl;
	y_vector = w_vector;
	std::cout << "y_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = y_vector.begin(); it != y_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << y_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: y_vector = x_vector" E << std::endl;
	y_vector = x_vector;
	std::cout << "y_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = y_vector.begin(); it != y_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << y_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: y_vector = z_vector" E << std::endl;
	y_vector = z_vector;
	std::cout << "y_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = y_vector.begin(); it != y_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << y_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 30 so capacity > size" E << std::endl;
	z_vector.reserve(30);
	std::cout << BOLD "do: clear vector" E << std::endl;
	w_vector.clear();
	x_vector.clear();
	y_vector.clear();
	z_vector.clear();

	w_vector.push_back("Paris");
	w_vector.push_back("Londres");
	w_vector.push_back("Singapour");
	w_vector.push_back("New York");
	w_vector.push_back("Sydney");
	x_vector.push_back("Rue");
	x_vector.push_back("Place");

	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "w_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = w_vector.begin(); it != w_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << w_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "x_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = x_vector.begin(); it != x_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << x_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "y_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = y_vector.begin(); it != y_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << y_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = y_vector.begin(); it != y_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << y_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: y_vector = w_vector" E << std::endl;
	y_vector = w_vector;
	std::cout << "y_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = y_vector.begin(); it != y_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << y_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: y_vector = x_vector" E << std::endl;
	y_vector = x_vector;
	std::cout << "y_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = y_vector.begin(); it != y_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << y_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: y_vector = z_vector" E << std::endl;
	y_vector = z_vector;
	std::cout << "y_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = y_vector.begin(); it != y_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << y_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << std::endl;
	return (0);
}