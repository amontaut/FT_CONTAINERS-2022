/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_erase.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:35:46 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/27 18:23:49 by amontaut         ###   ########.fr       */
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
	std::cout << BLUE "/* Test for the member function erase *************************************** */" E << std::endl;
	std::cout << BLUE "/* Removes specified elements from the container. *************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with ints. ********************************************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::map<std::string, int> a_map;
	a_map["Paris"] = 42;
	a_map["Quebec"] = 42;
	a_map["Kazan"] = 21;
	a_map["Moscow"] = 21;
	a_map["Brussels"] = 19;
	a_map["Med"] = 1337;
	a_map["Ben_guerir"] = 1337;
	a_map["Khouribga"] = 1337;
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "a_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: Removes the first element." E << std::endl;
	a_map.erase(a_map.begin());
	std::cout << "a_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 2: Removes the elements between \"Moscow\" and the end" E << std::endl;
	a_map.erase(a_map.find("Moscow"), a_map.end());
	std::cout << "a_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 2: Removes the elements between \"Moscow\" and the end (already done so don't exist anymore):" E << std::endl;
	a_map.erase(a_map.find("Moscow"), a_map.end());
	std::cout << "a_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: Removes \"Brussels\"." E << std::endl;
	a_map.erase(a_map.find("Brussels"));
	std::cout << "a_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 3: Removes the element with the key equivalent to key \"Med\" (exists)." E << std::endl;
	a_map.erase(std::string("Med"));
	std::cout << "a_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 3: Removes the element with the key equivalent to key \"Paris\" (doesn't exists)." E << std::endl;
	a_map.erase(std::string("Paris"));
	std::cout << "a_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with str. ********************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::map<int, std::string> z_map;
	z_map[88] = "Mercure";
	z_map[225] = "Venus";
	z_map[365] = "Earth";
	z_map[687] = "Mars";
	z_map[4329] = "Jupiter";
	z_map[10751] = "Saturn";
	z_map[30664] = "Uranus";
	z_map[60148] = "Neptune";
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "z_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: Removes the first element." E << std::endl;
	z_map.erase(z_map.begin());
	std::cout << "z_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 2: Removes the elements between 4329 and the end" E << std::endl;
	z_map.erase(z_map.find(4329), z_map.end());
	std::cout << "z_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 2: Removes the elements between 4329 and the end (already done so don't exist anymore):" E << std::endl;
	z_map.erase(z_map.find(4329), z_map.end());
	std::cout << "z_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: Removes 225." E << std::endl;
	z_map.erase(z_map.find(225));
	std::cout << "z_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 3: Removes the element with the key equivalent to key 4329 (exists)." E << std::endl;
	z_map.erase(int(4329));
	std::cout << "z_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 3: Removes the element with the key equivalent to key 99 (doesn't exists)." E << std::endl;
	z_map.erase(int(99));
	std::cout << "z_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;
	return (0);
}