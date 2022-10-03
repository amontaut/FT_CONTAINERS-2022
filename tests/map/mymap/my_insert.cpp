/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_insert.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:35:46 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/27 17:17:38 by amontaut         ###   ########.fr       */
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
	std::cout << BLUE "/* Test for the member function insert ************************************** */" E << std::endl;
	std::cout << BLUE "/* Inserts element(s) into the container, if the container ****************** */" E << std::endl;
	std::cout << BLUE "/* doesn't already contain an element with an equivalent key.**************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;

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
	ft::map<std::string, int> other_map;
	other_map["Canada"] = 1;
	other_map["Russia"] = 7;
	other_map["Belgium"] = 32;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: inserts value {\"Lyon\", 42} in an empty vector (value doesn't exist) :" E << std::endl;
	a_map.insert(ft::pair<std::string, int>("Lyon", 42));
	std::cout << "a_map is :" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 2: Inserts value {\"Paris\", 42} in the position as close as possible to the beggining (value doesn't exist) :" E << std::endl;
	a_map.insert(a_map.begin(), ft::pair<std::string, int>("Paris", 42));
	std::cout << "a_map is :" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: inserts value {\"Lyon\", 42} in an empty vector (value exists) :" E << std::endl;
	a_map.insert(ft::pair<std::string, int>("Lyon", 42));
	std::cout << "a_map is :" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 3:  inserts elements from map other (values don't exist):" E << std::endl;
	a_map.insert(other_map.begin(), other_map.end());
	std::cout << "a_map is :" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 2: Inserts value {\"Paris\", 42} in the position as close as possible to the beggining (value exists) :" E << std::endl;
	a_map.insert(a_map.begin(), ft::pair<std::string, int>("Paris", 42));
	std::cout << "a_map is :" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 3:  inserts elements from map other (values exist):" E << std::endl;
	a_map.insert(other_map.begin(), other_map.end());
	std::cout << "a_map is :" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 2: Inserts value {\"Kazan\", 21} in the position as close as possible to the end (value doesn't exist) :" E << std::endl;
	a_map.insert(a_map.end(), ft::pair<std::string, int>("Kazan", 21));
	std::cout << "a_map is :" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
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
	ft::map<int, std::string> z_other_map;
	z_other_map[365] = "Year";
	z_other_map[7] = "Week";
	z_other_map[24] = "Day";

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: inserts value {88, \"Mercure\"} in an empty vector (value doesn't exist) :" E << std::endl;
	z_map.insert(ft::pair<int, std::string>(88, "Mercure"));
	std::cout << "z_map is :" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 2: Inserts value {4329, \"Jupiter\"} in the position as close as possible to the beggining (value doesn't exist) :" E << std::endl;
	z_map.insert(z_map.begin(), ft::pair<int, std::string>(4329, "Jupiter"));
	std::cout << "z_map is :" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: inserts value {88, \"Mercure\"} in an empty vector (value exists) :" E << std::endl;
	z_map.insert(ft::pair<int, std::string>(88, "Mercure"));
	std::cout << "z_map is :" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 3:  inserts elements from map other (values don't exist):" E << std::endl;
	z_map.insert(z_other_map.begin(), z_other_map.end());
	std::cout << "z_map is :" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 2: Inserts value {4329, \"Jupiter\"} in the position as close as possible to the beggining (value exists) :" E << std::endl;
	z_map.insert(z_map.begin(), ft::pair<int, std::string>(4329, "Jupiter"));
	std::cout << "z_map is :" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 3:  inserts elements from map other (values exist):" E << std::endl;
	z_map.insert(z_other_map.begin(), z_other_map.end());
	std::cout << "z_map is :" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 2: Inserts value {30664, \"Uranus\"} in the position as close as possible to the end (value doesn't exist) :" E << std::endl;
	z_map.insert(z_map.end(), ft::pair<int, std::string>(30664, "Uranus"));
	std::cout << "z_map is :" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	return (0);
}