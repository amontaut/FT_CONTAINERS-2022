/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_size.cpp                                      :+:      :+:    :+:   */
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
/* Test for the member function size **************************************** */
/* Returns the number of elements in the container. ************************* */
/* ************************************************************************** */

int main()
{
	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with ints. ********************************************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::map<std::string, int> a_map;
	std::cout << "Size of a_map is (empty map): " << a_map.size() << ITGREY << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: add a value to the map" E << std::endl;
	a_map["Paris"] = 42;
	std::cout << "a_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	std::cout << "Size of a_map is: " << a_map.size() << ITGREY << E;
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << BOLD "do: add values to the map" E << std::endl;
	a_map["Quebec"] = 42;
	a_map["Kazan"] = 21;
	a_map["Moscow"] = 21;
	a_map["Brussels"] = 19;
	a_map["Med"] = 1337;
	a_map["Ben_guerir"] = 1337;
	a_map["Khouribga"] = 1337;
	std::cout << "a_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	std::cout << "Size of a_map is: " << a_map.size() << ITGREY << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with str. ********************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::map<int, std::string> z_map;
	std::cout << "Size of z_map is (empty map): " << z_map.size() << E << std::endl;
	
		std::cout << std::endl;
	std::cout << BOLD "do: add a value to the map" E << std::endl;
	z_map[88] = "Mercure";
	std::cout << "z_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	std::cout << "Size of a_map is: " << z_map.size() << E;
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << BOLD "do: add values to the map" E << std::endl;
	z_map[225] = "Venus";
	z_map[365] = "Earth";
	z_map[687] = "Mars";
	z_map[4329] = "Jupiter";
	z_map[10751] = "Saturn";
	z_map[30664] = "Uranus";
	z_map[60148] = "Neptune";
	std::cout << "z_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	std::cout << "Size of a_map is: " << z_map.size() << E;
	std::cout << std::endl;

	return (0);
}