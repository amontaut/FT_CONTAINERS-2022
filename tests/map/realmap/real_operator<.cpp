/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_operator<.cpp                                 :+:      :+:    :+:   */
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

/* ************************************************************************** */
/* Test for the non-member function operator< ******************************* */
/* Compares the contents of lhs and rhs lexicographically. ****************** */
/* ************************************************************************** */

int main()
{
	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with ints. ********************************************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::map<std::string, int> a_map;
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "a_map is (empty map):" << std::endl;
	for (std::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;
	std::map<std::string, int> a_other;
	std::cout << "a_other is (empty map):" << std::endl;
	for (std::map<std::string, int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_other.size() << E;
	std::cout << std::endl;

	if (a_map < a_other)
		std::cout << RED "Contents of a_map are lexicographically less than the contents of a_other" E << std::endl;
	else
		std::cout << GREEN "Contents of a_map are lexicographically greater than or equal to the contents of a_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: insert values in the maps: " E << std::endl;
	a_map["Paris"] = 42;
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
	for (std::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (std::map<std::string, int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_other.size() << E;
	std::cout << std::endl;

	if (a_map < a_other)
		std::cout << RED "Contents of a_map are lexicographically less than the contents of a_other" E << std::endl;
	else
		std::cout << GREEN "Contents of a_map are lexicographically greater than or equal to the contents of a_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	a_other["Russia"] = 1;
	a_other["Canada"] = 7;
	std::cout << "a_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (std::map<std::string, int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_other.size() << E;
	std::cout << std::endl;

	if (a_map < a_other)
		std::cout << RED "Contents of a_map are lexicographically less than the contents of a_other" E << std::endl;
	else
		std::cout << GREEN "Contents of a_map are lexicographically greater than or equal to the contents of a_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	a_other.erase(a_other.begin());
	std::cout << "a_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (std::map<std::string, int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_other.size() << E;
	std::cout << std::endl;

	if (a_map < a_other)
		std::cout << RED "Contents of a_map are lexicographically less than the contents of a_other" E << std::endl;
	else
		std::cout << GREEN "Contents of a_map are lexicographically greater than or equal to the contents of a_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	a_map.erase(a_map.begin());
	a_map.erase(a_map.begin());
	std::cout << "a_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (std::map<std::string, int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_other.size() << E;
	std::cout << std::endl;

	if (a_map < a_other)
		std::cout << RED "Contents of a_map are lexicographically less than the contents of a_other" E << std::endl;
	else
		std::cout << GREEN "Contents of a_map are lexicographically greater than or equal to the contents of a_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with str. ********************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::map<int, std::string> z_map;
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "z_map is (empty map):" << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;
	std::map<int, std::string> z_other;
	std::cout << "z_other is (empty map):" << std::endl;
	for (std::map<int, std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_other.size() << E;
	std::cout << std::endl;

	if (z_map < z_other)
		std::cout << RED "Contents of z_map are lexicographically less than the contents of z_other" E << std::endl;
	else
		std::cout << GREEN "Contents of z_map are lexicographically greater than or equal to the contents of z_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: insert values in the maps: " E << std::endl;
	z_map[88] = "Mercure";
	z_map[225] = "Venus";
	z_map[365] = "Earth";
	z_map[687] = "Mars";
	z_map[4329] = "Jupiter";
	z_map[10751] = "Saturn";
	z_map[30664] = "Uranus";
	z_map[60148] = "Neptune";

	z_other[365] = "Year";
	z_other[7] = "Week";
	z_other[24] = "Day";
	std::cout << "z_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (std::map<int, std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_other.size() << E;
	std::cout << std::endl;

	if (z_map < z_other)
		std::cout << RED "Contents of z_map are lexicographically less than the contents of z_other" E << std::endl;
	else
		std::cout << GREEN "Contents of z_map are lexicographically greater than or equal to the contents of z_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	z_other[1] = "Paris";
	z_other[0] = "Londres";
	std::cout << "z_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (std::map<int, std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_other.size() << E;
	std::cout << std::endl;

	if (z_map < z_other)
		std::cout << RED "Contents of z_map are lexicographically less than the contents of z_other" E << std::endl;
	else
		std::cout << GREEN "Contents of z_map are lexicographically greater than or equal to the contents of z_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	z_other.erase(z_other.begin());
	std::cout << "z_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (std::map<int, std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_other.size() << E;
	std::cout << std::endl;

	if (z_map < z_other)
		std::cout << RED "Contents of z_map are lexicographically less than the contents of z_other" E << std::endl;
	else
		std::cout << GREEN "Contents of z_map are lexicographically greater than or equal to the contents of z_other" E << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: change values " E << std::endl;
	z_map.erase(z_map.begin());
	z_map.erase(z_map.begin());
	std::cout << "z_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (std::map<int, std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_other.size() << E;
	std::cout << std::endl;

	if (z_map < z_other)
		std::cout << RED "Contents of z_map are lexicographically less than the contents of z_other" E << std::endl;
	else
		std::cout << GREEN "Contents of z_map are lexicographically greater than or equal to the contents of z_other" E << std::endl;

	return (0);
}