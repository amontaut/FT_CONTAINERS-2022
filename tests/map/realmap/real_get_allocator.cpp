/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_get_allocator.cpp                             :+:      :+:    :+:   */
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
	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Test for the member function get_allocator ******************************* */" E << std::endl;
	std::cout << BLUE "/* Returns the allocator associated with the container. ********************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with <str, int>. *************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::map<std::string, int> a_map;
	
	std::cout << "Max size of the allocator is (empty map):" << a_map.get_allocator().max_size();
	std::cout << ITGREY " || size is: " << a_map.size() << E;
	std::cout << std::endl;
	
	std::cout << BOLD "do: add values to the map" E << std::endl;
	a_map["Paris"] = 42;
	a_map["Quebec"] = 42;
	a_map["Kazan"] = 21;
	a_map["Moscow"] = 21;
	a_map["Brussels"] = 19;
	a_map["Med"] = 1337;
	a_map["Ben_guerir"] = 1337;
	a_map["Khouribga"] = 1337;
	std::cout << "Max size of the allocator is:" << a_map.get_allocator().max_size();
	std::cout << ITGREY " || size is: " << a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with <int, str>. *************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	std::map<int, std::string> z_map;
	std::cout << "Max size of the allocator is (empty map):" << z_map.get_allocator().max_size();
	std::cout << ITGREY " || size is: " << z_map.size() << E;
	std::cout << std::endl;
	
	std::cout << BOLD "do: add values to the map" E << std::endl;
	z_map[88] = "Mercure";
	z_map[225] = "Venus";
	z_map[365] = "Earth";
	z_map[687] = "Mars";
	z_map[4329] = "Jupiter";
	z_map[10751] = "Saturn";
	z_map[30664] = "Uranus";
	z_map[60148] = "Neptune";
	std::cout << "Max size of the allocator is:" << z_map.get_allocator().max_size();
	std::cout << ITGREY " || size is: " << z_map.size() << E;
	std::cout << std::endl;

	return (0);
}