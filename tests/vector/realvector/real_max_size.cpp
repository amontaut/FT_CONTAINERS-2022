/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_max_size.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:35:46 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/26 11:35:50 by amontaut         ###   ########.fr       */
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
	std::cout << BLUE "/* Test for the member function max_size ************************************ */" E << std::endl;
	std::cout << BLUE "/* Returns the maximum number of elements the container is able to hold due * */" E << std::endl;
	std::cout << BLUE "/* To system or library implementation limitations. ************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with ints. ********************************************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::vector<int> a_vector;
	std::cout << "max_size of a_vector is (empty vector): " << a_vector.max_size();
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;

	std::cout << BOLD "do: add values to the vector" E << std::endl;
	a_vector.push_back(999);
	std::cout << "a_vector is:" << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "max_size of a_vector is: " << a_vector.max_size();
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 30 so capacity > size" E << std::endl;
	a_vector.reserve(30);
	std::cout << BOLD "do: clear vector" E << std::endl;
	a_vector.clear();
	std::cout << "max_size of a_vector is (empty vector): " << a_vector.max_size();
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;

	std::cout << BOLD "do: add values to the vector" E << std::endl;
	a_vector.push_back(999);
	std::cout << "a_vector is:" << std::endl;
	for (std::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "max_size of a_vector is: " << a_vector.max_size();
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */ << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with str. ********************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::vector<std::string> z_vector;
	std::cout << "max_size of z_vector is (empty vector): " << z_vector.max_size();
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << BOLD "do: add values to the vector" E << std::endl;
	z_vector.push_back("Paris");
	z_vector.push_back("Londres");
	z_vector.push_back("Singapour");
	z_vector.push_back("New York");
	z_vector.push_back("Sydney");
	std::cout << "z_vector is:" << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "max_size of a_vector is: " << z_vector.max_size();
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 30 so capacity > size" E << std::endl;
	z_vector.reserve(30);
	std::cout << BOLD "do: clear vector" E << std::endl;
	z_vector.clear();
	std::cout << "max_size of z_vector is (empty vector): " << z_vector.max_size();
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << BOLD "do: add values to the vector" E << std::endl;
	z_vector.push_back("Paris");
	z_vector.push_back("Londres");
	z_vector.push_back("Singapour");
	z_vector.push_back("New York");
	z_vector.push_back("Sydney");
	std::cout << "z_vector is:" << std::endl;
	for (std::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "max_size of a_vector is: " << z_vector.max_size();
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	return (0);
}