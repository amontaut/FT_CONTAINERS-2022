/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_find.cpp                                        :+:      :+:    :+:   */
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
	std::cout << BLUE "/* ************************************************************************** */ " E << std::endl;
	std::cout << BLUE "/* Test for the member function find **************************************** */ " E << std::endl;
	std::cout << BLUE "/* Finds an element with key equivalent to key. ***************************** */ " E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */ " E << std::endl;
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

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function find NOT CONST" E << std::endl;
	std::cout << BOLD "do: find word \"here\" in an empty map: " E << std::endl;
	for (ft::map<std::string, int>::iterator it = a_map.find("Here"); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: add values to the map: " E << std::endl;
	a_map["Paris"] = 42;
	a_map["Quebec"] = 42;
	a_map["Kazan"] = 21;
	a_map["Moscow"] = 21;
	a_map["Brussels"] = 19;
	a_map["Med"] = 1337;
	a_map["Ben_guerir"] = 1337;
	a_map["Khouribga"] = 1337;
	std::cout << "a_map is:" << std::endl;
	for (ft::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function find NOT CONST" E << std::endl;
	std::cout << BOLD "do: find word \"here\" (not in the map): " E << std::endl;
	for (ft::map<std::string, int>::iterator it = a_map.find("Here"); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function find NOT CONST" E << std::endl;
	std::cout << BOLD "do: find word \"Moscow\" in the map: " E << std::endl;
	std::cout << a_map.find("Moscow")->first << "   " << a_map.find("Moscow")->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function find NOT CONST" E << std::endl;
	std::cout << BOLD "do: find word \"Paris\" in the map: " E << std::endl;
	std::cout << a_map.find("Paris")->first << "   " << a_map.find("Paris")->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function find NOT CONST" E << std::endl;
	std::cout << BOLD "do: find word \"Paris\" and \"Kazan\" in the map: " E << std::endl;
	std::cout << a_map.find("Paris")->first << "   " << a_map.find("Kazan")->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	ft::map<std::string, int> const_a_map;
	const_a_map = a_map;
	std::cout << "const_a_map is:" << std::endl;
	for (ft::map<std::string, int>::iterator it = const_a_map.begin(); it != const_a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << const_a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function find CONST" E << std::endl;
	std::cout << BOLD "do: find word \"here\" (not in the map): " E << std::endl;
	for (ft::map<std::string, int>::iterator it = const_a_map.find("Here"); it != const_a_map.find("Here"); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << const_a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function find CONST" E << std::endl;
	std::cout << BOLD "do: find word \"Moscow\" in the map: " E << std::endl;
	std::cout << const_a_map.find("Moscow")->first << "   " << const_a_map.find("Moscow")->second << std::endl;
	std::cout << ITGREY " Size is: " << const_a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function find CONST" E << std::endl;
	std::cout << BOLD "do: find word \"Paris\" in the map: " E << std::endl;
	std::cout << const_a_map.find("Paris")->first << "   " << const_a_map.find("Paris")->second << std::endl;
	std::cout << ITGREY " Size is: " << const_a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function find CONST" E << std::endl;
	std::cout << BOLD "do: find word \"Paris\" and \"Kazan\" in the map: " E << std::endl;
	std::cout << const_a_map.find("Paris")->first << "   " << const_a_map.find("Kazan")->second << std::endl;
	std::cout << ITGREY " Size is: " << const_a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with str. ********************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	ft::map<int, std::string> z_map;
	std::cout << "z_map is:" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function find NOT CONST" E << std::endl;
	std::cout << BOLD "do: find the value 99 in an empty map: " E << std::endl;
	for (ft::map<int, std::string>::iterator it = z_map.find(99); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: add values to the map: " E << std::endl;
	z_map[88] = "Mercure";
	z_map[225] = "Venus";
	z_map[365] = "Earth";
	z_map[687] = "Mars";
	z_map[4329] = "Jupiter";
	z_map[10751] = "Saturn";
	z_map[30664] = "Uranus";
	z_map[60148] = "Neptune";
	std::cout << "z_map is:" << std::endl;
	for (ft::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function find NOT CONST" E << std::endl;
	std::cout << BOLD "do: find word 99 (not in the map): " E << std::endl;
	for (ft::map<int, std::string>::iterator it = z_map.find(99); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function find NOT CONST" E << std::endl;
	std::cout << BOLD "do: find number 225 in the map): " E << std::endl;
	std::cout << z_map.find(225)->first << "   " << z_map.find(225)->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function find NOT CONST" E << std::endl;
	std::cout << BOLD "do: find word 365 in the map): " E << std::endl;
	std::cout << z_map.find(365)->first << "   " << z_map.find(365)->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function find NOT CONST" E << std::endl;
	std::cout << BOLD "do: find word 365 and 10751 in the map): " E << std::endl;
	std::cout << z_map.find(365)->first << "   " << z_map.find(10751)->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	ft::map<int, std::string> const_z_map;
	const_z_map = z_map;
	std::cout << "const_z_map is:" << std::endl;
	for (ft::map<int, std::string>::iterator it = const_z_map.begin(); it != const_z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << const_z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function find CONST" E << std::endl;
	std::cout << BOLD "do: find word 99 (not in the map): " E << std::endl;
	for (ft::map<int, std::string>::iterator it = const_z_map.find(99); it != const_z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << const_z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function find CONST" E << std::endl;
	std::cout << BOLD "do: find word 225 in the map): " E << std::endl;
	std::cout << const_z_map.find(225)->first << "   " << const_z_map.find(225)->second << std::endl;
	std::cout << ITGREY " Size is: " << const_z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function find CONST" E << std::endl;
	std::cout << BOLD "do: find word 365 in the map): " E << std::endl;
	std::cout << const_z_map.find(365)->first << "   " << const_z_map.find(365)->second << std::endl;
	std::cout << ITGREY " Size is: " << const_z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function find CONST" E << std::endl;
	std::cout << BOLD "do: find word 365 and 10751 in the map): " E << std::endl;
	std::cout << const_z_map.find(365)->first << "   " << const_z_map.find(10751)->second << std::endl;
	std::cout << ITGREY " Size is: " << const_z_map.size() << E;
	std::cout << std::endl;

	return (0);
}