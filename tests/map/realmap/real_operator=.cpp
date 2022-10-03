/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_operator=.cpp                                 :+:      :+:    :+:   */
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
#define UNDERL "\e[4;30m"
#define E "\e[0m"

int main()
{
	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Test for the non-member function operator= ******************************* */" E << std::endl;
	std::cout << BLUE "/* Replaces the contents of the container. ********************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with <str, int>. *************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::map<std::string, int> a_map;
	std::map<std::string, int> b_map;
	std::map<std::string, int> c_map;
	std::map<std::string, int> d_map;

	a_map["Paris"] = 42;
	a_map["Quebec"] = 42;
	a_map["Kazan"] = 21;
	a_map["Moscow"] = 21;
	a_map["Brussels"] = 19;
	a_map["Med"] = 1337;
	a_map["Ben_guerir"] = 1337;
	a_map["Khouribga"] = 1337;

	// indicatifs pays
	b_map["Canada"] = 1;
	b_map["Russia"] = 7;
	b_map["Belgium"] = 32;

	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "a_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "b_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = b_map.begin(); it != b_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << b_map.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "c_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = c_map.begin(); it != c_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << c_map.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "d_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = d_map.begin(); it != d_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << d_map.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: c_map = a_map" E << std::endl;
	c_map = a_map;
	std::cout << "c_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = c_map.begin(); it != c_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << c_map.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: c_map = b_map" E << std::endl;
	c_map = b_map;
	std::cout << "c_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = c_map.begin(); it != c_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << c_map.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: c_map = d_map" E << std::endl;
	c_map = d_map;
	std::cout << "c_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = c_map.begin(); it != c_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << c_map.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with <int, str>. *************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::map<int, std::string> w_map;
	std::map<int, std::string> x_map;
	std::map<int, std::string> y_map;
	std::map<int, std::string> z_map;

	// source https://www.simplyscience.ch/fr/enfants/decouvre/une-annee-sur-terre-sur-mars-ou-sur-les-autres-planetes
	w_map[88] = "Mercure";
	w_map[225] = "Venus";
	w_map[365] = "Earth";
	w_map[687] = "Mars";
	w_map[4329] = "Jupiter";
	w_map[10751] = "Saturn";
	w_map[30664] = "Uranus";
	w_map[60148] = "Neptune";

	x_map[365] = "Year";
	x_map[7] = "Week";
	x_map[24] = "Day";

	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "w_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = w_map.begin(); it != w_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << w_map.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "x_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = x_map.begin(); it != x_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << x_map.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "y_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = y_map.begin(); it != y_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << y_map.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "z_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: y_map = w_map" E << std::endl;
	y_map = w_map;
	std::cout << "y_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = y_map.begin(); it != y_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << y_map.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: y_map = x_map" E << std::endl;
	y_map = x_map;
	std::cout << "y_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = y_map.begin(); it != y_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << y_map.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: y_map = z_map" E << std::endl;
	y_map = z_map;
	std::cout << "y_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = y_map.begin(); it != y_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << c_map.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;

	return (0);
}