/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_swap.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:35:46 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/26 16:44:21 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <iterator>
#include "../../../containers/map.hpp"

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
	std::cout << BLUE "/* Test for the member function swap **************************************** */" E << std::endl;
	std::cout << BLUE "/* Exchanges the contents of the container with those of other. ************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with ints. ********************************************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	ft::map<std::string, int> a_map;
	std::cout << "a_map is (empty map):" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	ft::map<std::string, int> a_other;
	std::cout << "a_other is (empty map):" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_other.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap 2 empty maps: " E << std::endl;
	a_map.swap(a_other);
	std::cout << "a_map is (empty map):" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;
	std::cout << "a_other is (empty map):" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_other.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: insert a value in both maps: " E << std::endl;
	a_map["Paris"] = 42;
	a_other["Canada"] = 1;
	std::cout << "a_map is:" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_other.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap 2 maps with 1 value: " E << std::endl;
	a_map.swap(a_other);
	std::cout << "a_map is:" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_other.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: insert several values in both maps: " E << std::endl;
	a_map["Quebec"] = 42;
	a_map["Kazan"] = 21;
	a_map["Moscow"] = 21;
	a_map["Brussels"] = 19;
	a_map["Med"] = 1337;
	a_map["Ben_guerir"] = 1337;
	a_map["Khouribga"] = 1337;
	a_other["Canada"] = 1;
	a_other["Russia"] = 7;
	a_other["Belgium"] = 32;

	std::cout << "a_map is:" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_other.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap 2 maps with severals value: " E << std::endl;
	a_map.swap(a_other);
	std::cout << "a_map is:" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_other.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	ft::map<std::string, int> c_map;
	std::cout << "c_map is(empty map):" << std::endl;
	for (ft::map<std::string, int>::iterator it = c_map.begin(); it != c_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << c_map.size() << E;
	std::cout << std::endl;
	ft::map<std::string, int> c_other;
	c_other["Alice"] = 25;
	std::cout << "c_other is :" << std::endl;
	for (ft::map<std::string, int>::iterator it = c_other.begin(); it != c_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << c_other.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap an empty map with a map with 1 value: " E << std::endl;
	c_map.swap(c_other);
	std::cout << "c_map is:" << std::endl;
	for (ft::map<std::string, int>::iterator it = c_map.begin(); it != c_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << c_map.size() << E;
	std::cout << std::endl;
	std::cout << "c_other is:" << std::endl;
	for (ft::map<std::string, int>::iterator it = c_other.begin(); it != c_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << c_other.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	ft::map<std::string, int> d_map;
	d_map["Bonjour"] = 7;
	d_map["Hola"] = 4;
	d_map["Hello"] = 5;
	std::cout << "d_map is:" << std::endl;
	for (ft::map<std::string, int>::iterator it = d_map.begin(); it != d_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << d_map.size() << E;
	std::cout << std::endl;
	ft::map<std::string, int> d_other;
	std::cout << "d_other is (empty map):" << std::endl;
	for (ft::map<std::string, int>::iterator it = d_other.begin(); it != d_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << d_other.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap a map with several values with an empty map: " E << std::endl;
	d_map.swap(d_other);
	std::cout << "d_map is:" << std::endl;
	for (ft::map<std::string, int>::iterator it = d_map.begin(); it != d_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << d_map.size() << E;
	std::cout << std::endl;
	std::cout << "d_other is:" << std::endl;
	for (ft::map<std::string, int>::iterator it = d_other.begin(); it != d_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << d_other.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with str. ********************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	ft::map<int, std::string> z_map;
	std::cout << "z_map is (empty map):" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	ft::map<int, std::string> z_other;
	std::cout << "z_other is (empty map):" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_other.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap 2 empty maps: " E << std::endl;
	z_map.swap(z_other);
	std::cout << "z_map is (empty map):" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;
	std::cout << "z_other is (empty map):" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_other.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: insert a value in both maps: " E << std::endl;
	z_map[88] = "Mercure";
	z_other[365] = "Year";
	std::cout << "z_map is:" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_other.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap 2 maps with 1 value: " E << std::endl;
	z_map.swap(z_other);
	std::cout << "z_map is:" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_other.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: insert several values in both maps: " E << std::endl;
	z_map[225] = "Venus";
	z_map[365] = "Earth";
	z_map[687] = "Mars";
	z_map[4329] = "Jupiter";
	z_map[10751] = "Saturn";
	z_map[30664] = "Uranus";
	z_map[60148] = "Neptune";
	z_other[7] = "Week";
	z_other[24] = "Day";

	std::cout << "z_map is:" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_other.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap 2 maps with severals value: " E << std::endl;
	z_map.swap(z_other);
	std::cout << "z_map is:" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_other.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	ft::map<int, std::string> y_map;
	std::cout << "y_map is(empty map):" << std::endl;
	for (ft::map<int, std::string>::iterator it = y_map.begin(); it != y_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << y_map.size() << E;
	std::cout << std::endl;
	ft::map<int, std::string> y_other;
	y_other[25] = "Alice";
	std::cout << "y_other is :" << std::endl;
	for (ft::map<int, std::string>::iterator it = y_other.begin(); it != y_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << y_other.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap an empty map with a map with 1 value: " E << std::endl;
	y_map.swap(y_other);
	std::cout << "y_map is:" << std::endl;
	for (ft::map<int, std::string>::iterator it = y_map.begin(); it != y_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << y_map.size() << E;
	std::cout << std::endl;
	std::cout << "y_other is:" << std::endl;
	for (ft::map<int, std::string>::iterator it = y_other.begin(); it != y_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << y_other.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	ft::map<int, std::string> x_map;
	x_map[7] = "Bonjour";
	x_map[4] = "Hola";
	x_map[5] = "Hello";
	std::cout << "x_map is:" << std::endl;
	for (ft::map<int, std::string>::iterator it = x_map.begin(); it != x_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << x_map.size() << E;
	std::cout << std::endl;
	ft::map<int, std::string> x_other;
	std::cout << "x_other is (empty map):" << std::endl;
	for (ft::map<int, std::string>::iterator it = x_other.begin(); it != x_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << x_other.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap a map with several values with an empty map: " E << std::endl;
	x_map.swap(x_other);
	std::cout << "x_map is:" << std::endl;
	for (ft::map<int, std::string>::iterator it = x_map.begin(); it != x_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << x_map.size() << E;
	std::cout << std::endl;
	std::cout << "x_other is:" << std::endl;
	for (ft::map<int, std::string>::iterator it = x_other.begin(); it != x_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << x_other.size() << E;
	std::cout << std::endl;

	return (0);
}