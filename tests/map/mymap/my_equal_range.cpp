/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_equal_range.cpp                                 :+:      :+:    :+:   */
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
	std::cout << BLUE "/* Test for the member function equal_range ********************************* */ " E << std::endl;
	std::cout << BLUE "/* Returns a range containing all elements with the given key in the map. *** */ " E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */ " E << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with ints. ********************************************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	ft::map<std::string, int> a_map;
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
	std::cout << BOLD "Proto 1: function equal_range NOT CONST" E << std::endl;
	std::cout << BOLD "do: equal_range on \"Moscow\":" E << std::endl;
	std::cout << a_map.equal_range(std::string("Moscow")).first->first << "   " << a_map.equal_range(std::string("Moscow")).first->second << std::endl;
	std::cout << a_map.equal_range(std::string("Moscow")).second->first << "   " << a_map.equal_range(std::string("Moscow")).second->second << std::endl;
	std::cout << BOLD "do: equal_range on \"Ben_guerir\":" E << std::endl;
	std::cout << a_map.equal_range(std::string("Ben_guerir")).first->first << "   " << a_map.equal_range(std::string("Ben_guerir")).first->second << std::endl;
	std::cout << a_map.equal_range(std::string("Ben_guerir")).second->first << "   " << a_map.equal_range(std::string("Ben_guerir")).second->second << std::endl;
	std::cout << BOLD "do: equal_range on \"Quebec\":" E << std::endl;
	std::cout << a_map.equal_range(std::string("Quebec")).first->first << "   " << a_map.equal_range(std::string("Quebec")).first->second << std::endl;

	const ft::map<std::string, int> const_a_map = a_map;
	std::cout << std::endl;
	std::cout << "const_a_map is:" << std::endl;
	for (ft::map<std::string, int>::const_iterator it = const_a_map.begin(); it != const_a_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << const_a_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function equal_range CONST" E << std::endl;
	std::cout << BOLD "do: equal_range on \"Moscow\":" E << std::endl;
	std::cout << const_a_map.equal_range(std::string("Moscow")).first->first << "   " << const_a_map.equal_range(std::string("Moscow")).first->second << std::endl;
	std::cout << const_a_map.equal_range(std::string("Moscow")).second->first << "   " << const_a_map.equal_range(std::string("Moscow")).second->second << std::endl;
	std::cout << BOLD "do: equal_range on \"Ben_guerir\":" E << std::endl;
	std::cout << const_a_map.equal_range(std::string("Ben_guerir")).first->first << "   " << const_a_map.equal_range(std::string("Ben_guerir")).first->second << std::endl;
	std::cout << const_a_map.equal_range(std::string("Ben_guerir")).second->first << "   " << const_a_map.equal_range(std::string("Ben_guerir")).second->second << std::endl;
	std::cout << BOLD "do: equal_range on \"Quebec\":" E << std::endl;
	std::cout << const_a_map.equal_range(std::string("Quebec")).first->first << "   " << const_a_map.equal_range(std::string("Quebec")).first->second << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with str. ********************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	ft::map<int, std::string> z_map;
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
	std::cout << BOLD "Proto 1: function equal_range NOT CONST" E << std::endl;
	std::cout << BOLD "do: equal_range on 4329:" E << std::endl;
	std::cout << z_map.equal_range(int(4329)).first->first << "   " << z_map.equal_range(int(4329)).first->second << std::endl;
	std::cout << z_map.equal_range(int(4329)).second->first << "   " << z_map.equal_range(int(4329)).second->second << std::endl;
	std::cout << BOLD "do: equal_range on 88:" E << std::endl;
	std::cout << z_map.equal_range(int(88)).first->first << "   " << z_map.equal_range(int(88)).first->second << std::endl;
	std::cout << z_map.equal_range(int(88)).second->first << "   " << z_map.equal_range(int(88)).second->second << std::endl;
	std::cout << BOLD "do: equal_range on 60148:" E << std::endl;
	std::cout << z_map.equal_range(int(60148)).first->first << "   " << z_map.equal_range(int(60148)).first->second << std::endl;

	const ft::map<int, std::string> const_z_map = z_map;
	std::cout << std::endl;
	std::cout << "const_z_map is:" << std::endl;
	for (ft::map<int, std::string>::const_iterator it = const_z_map.begin(); it != const_z_map.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << ITGREY " Size is: " << const_z_map.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "Proto 1: function equal_range CONST" E << std::endl;
	std::cout << BOLD "do: equal_range on 4329:" E << std::endl;
	std::cout << const_z_map.equal_range(int(4329)).first->first << "   " << const_z_map.equal_range(int(4329)).first->second << std::endl;
	std::cout << const_z_map.equal_range(int(4329)).second->first << "   " << const_z_map.equal_range(int(4329)).second->second << std::endl;
	std::cout << BOLD "do: equal_range on 88:" E << std::endl;
	std::cout << const_z_map.equal_range(int(88)).first->first << "   " << const_z_map.equal_range(int(88)).first->second << std::endl;
	std::cout << const_z_map.equal_range(int(88)).second->first << "   " << const_z_map.equal_range(int(88)).second->second << std::endl;
	std::cout << BOLD "do: equal_range on 60148:" E << std::endl;
	std::cout << const_z_map.equal_range(int(60148)).first->first << "   " << const_z_map.equal_range(int(60148)).first->second << std::endl;

	return (0);
}