/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_lower_bound.cpp                               :+:      :+:    :+:   */
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
	std::cout << BLUE "/* Test for the member function lower_bound ********************************* */ " E << std::endl;
	std::cout << BLUE "/* Returns an iterator pointing to the first element that is greater ******** */ " E << std::endl;
	std::cout << BLUE "/* or equal to the key ****************************************************** */ " E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */ " E << std::endl;
	std::cout << std::endl;

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
	std::cout << "a_map is:" << std::endl;
	for (std::map<std::string, int>::iterator it = a_map.begin(); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function lower_bound NOT CONST" E << std::endl;
	std::cout << BOLD "do: printing from lower_bound on \"Moscow\" to the end:" E << std::endl;
	for (std::map<std::string, int>::iterator it = a_map.lower_bound(std::string("Moscow")); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function lower_bound NOT CONST" E << std::endl;
	std::cout << BOLD "do: printing from lower_bound on \"Ben_guerir\" to the end:" E << std::endl;
	for (std::map<std::string, int>::iterator it = a_map.lower_bound(std::string("Ben_guerir")); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function lower_bound NOT CONST" E << std::endl;
	std::cout << BOLD "do: printing from lower_bound on \"Quebec\" to the end:" E << std::endl;
	for (std::map<std::string, int>::iterator it = a_map.lower_bound(std::string("Quebec")); it != a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function lower_bound NOT CONST" E << std::endl;
	std::cout << BOLD "do: printing from lower_bound on \"Brussels\" to lower_bound on \"Quebec\":" E << std::endl;
	for (std::map<std::string, int>::iterator it = a_map.lower_bound(std::string("Brussels")); it != a_map.lower_bound(std::string("Quebec")); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << a_map.size() << E;
	std::cout << std::endl;

	const std::map<std::string, int> const_a_map = a_map;
	std::cout << std::endl;
	std::cout << "const_a_map is:" << std::endl;
	for (std::map<std::string, int>::const_iterator it = const_a_map.begin(); it != const_a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << const_a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function lower_bound CONST" E << std::endl;
	std::cout << BOLD "do: printing from lower_bound on \"Moscow\" to the end:" E << std::endl;
	for (std::map<std::string, int>::const_iterator it = const_a_map.lower_bound(std::string("Moscow")); it != const_a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << const_a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function lower_bound CONST" E << std::endl;
	std::cout << BOLD "do: printing from lower_bound on \"Ben_guerir\" to the end:" E << std::endl;
	for (std::map<std::string, int>::const_iterator it = const_a_map.lower_bound(std::string("Ben_guerir")); it != const_a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << const_a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function lower_bound CONST" E << std::endl;
	std::cout << BOLD "do: printing from lower_bound on \"Quebec\" to the end:" E << std::endl;
	for (std::map<std::string, int>::const_iterator it = const_a_map.lower_bound(std::string("Quebec")); it != const_a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << const_a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function lower_bound CONST" E << std::endl;
	std::cout << BOLD "do: printing from lower_bound on \"Brussels\" to lower_bound on \"Quebec\":" E << std::endl;
	for (std::map<std::string, int>::const_iterator it = const_a_map.lower_bound(std::string("Brussels")); it != const_a_map.lower_bound(std::string("Quebec")); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << const_a_map.size() << E;
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
	std::cout << "z_map is:" << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.begin(); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function lower_bound NOT CONST" E << std::endl;
	std::cout << BOLD "do: printing from lower_bound on 4329 to the end:" E << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.lower_bound(4329); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: function lower_bound NOT CONST" E << std::endl;
	std::cout << BOLD "do: printing from lower_bound on 88 to the end:" E << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.lower_bound(88); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: function lower_bound NOT CONST" E << std::endl;
	std::cout << BOLD "do: printing from lower_bound on 60148 to the end:" E << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.lower_bound(60148); it != z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function lower_bound NOT CONST" E << std::endl;
	std::cout << BOLD "do: printing from lower_bound on 365 to lower_bound on 10751:" E << std::endl;
	for (std::map<int, std::string>::iterator it = z_map.lower_bound(365); it != z_map.lower_bound(10751); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << z_map.size() << E;
	std::cout << std::endl;







	const std::map<int, std::string> const_z_map = z_map;
	std::cout << std::endl;
	std::cout << "const_z_map is:" << std::endl;
	for (std::map<int, std::string>::const_iterator it = const_z_map.begin(); it != const_z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << const_z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function lower_bound CONST" E << std::endl;
	std::cout << BOLD "do: printing from lower_bound on 4329 to the end:" E << std::endl;
	for (std::map<int, std::string>::const_iterator it = const_z_map.lower_bound(4329); it != const_z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << const_z_map.size() << E;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: function lower_bound CONST" E << std::endl;
	std::cout << BOLD "do: printing from lower_bound on 88 to the end:" E << std::endl;
	for (std::map<int, std::string>::const_iterator it = const_z_map.lower_bound(88); it != const_z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << const_z_map.size() << E;
	std::cout << std::endl;

	std::cout << BOLD "Proto 1: function lower_bound CONST" E << std::endl;
	std::cout << BOLD "do: printing from lower_bound on 60148 to the end:" E << std::endl;
	for (std::map<int, std::string>::const_iterator it = const_z_map.lower_bound(60148); it != const_z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << const_z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function lower_bound CONST" E << std::endl;
	std::cout << BOLD "do: printing from lower_bound on 365 to lower_bound on 10751:" E << std::endl;
	for (std::map<int, std::string>::const_iterator it = const_z_map.lower_bound(365); it != const_z_map.lower_bound(10751); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << const_z_map.size() << E;
	std::cout << std::endl;
	return (0);
}
