/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_swap.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:35:46 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/26 12:39:12 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <iterator>
#include "../../../containers/vector.hpp"

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
	std::cout << BLUE "/* Test for the member function swap **************************************** */*/" E << std::endl;
	std::cout << BLUE "/* Exchanges the contents of the container with those of other. ************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with ints. ********************************************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	ft::vector<int> a_vector;
	std::cout << "a_vector is (empty vector):" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */<< E;
	std::cout << std::endl;
	ft::vector<int> a_other;
	std::cout << "a_other is (empty vector):" << std::endl;
	for (ft::vector<int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_other.size() /* << " || capacity is: " << a_other.capacity() */<< E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap 2 empty vectors: " E << std::endl;
	a_vector.swap(a_other);
	std::cout << "a_vector is (empty vector):" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */<< E;
	std::cout << std::endl;
	std::cout << "a_other is (empty vector):" << std::endl;
	for (ft::vector<int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_other.size() /* << " || capacity is: " << a_other.capacity() */<< E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: insert a value in both vectors: " E << std::endl;
	a_vector.push_back(1);
	a_other.push_back(-1);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */<< E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (ft::vector<int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_other.size() /* << " || capacity is: " << a_other.capacity() */<< E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap 2 vectors with 1 value: " E << std::endl;
	a_vector.swap(a_other);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */<< E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (ft::vector<int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_other.size() /* << " || capacity is: " << a_other.capacity() */<< E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: insert several values in both vectors: " E << std::endl;
	for (int i = -2; i >= -5; i--)
		a_vector.push_back(i);
	for (int i = 2; i <= 20; i++)
		a_other.push_back(i);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */<< E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (ft::vector<int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_other.size() /* << " || capacity is: " << a_other.capacity() */<< E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap 2 vectors with severals value: " E << std::endl;
	a_vector.swap(a_other);
	std::cout << "a_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = a_vector.begin(); it != a_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_vector.size() /* << " || capacity is: " << a_vector.capacity() */<< E;
	std::cout << std::endl;
	std::cout << "a_other is:" << std::endl;
	for (ft::vector<int>::iterator it = a_other.begin(); it != a_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << a_other.size() /* << " || capacity is: " << a_other.capacity() */<< E;
	std::cout << std::endl;

	std::cout << std::endl;
	ft::vector<int> c_vector;
	std::cout << "c_vector is (empty vector):" << std::endl;
	for (ft::vector<int>::iterator it = c_vector.begin(); it != c_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << c_vector.size()/* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	ft::vector<int> c_other;
	c_other.push_back(42);
	std::cout << "c_other is :" << std::endl;
	for (ft::vector<int>::iterator it = c_other.begin(); it != c_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << c_other.size() << " || capacity is: " << c_other.capacity() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap an empty vector with a vector with 1 value: " E << std::endl;
	c_vector.swap(c_other);
	std::cout << "c_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = c_vector.begin(); it != c_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << c_vector.size()/* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "c_other is:" << std::endl;
	for (ft::vector<int>::iterator it = c_other.begin(); it != c_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << c_other.size() << " || capacity is: " << c_other.capacity() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	ft::vector<int> d_vector;
	d_vector.push_back(-1234);
	d_vector.push_back(-2345);
	d_vector.push_back(-3456);
	d_vector.push_back(-4567);
	std::cout << "d_vector is " << std::endl;
	for (ft::vector<int>::iterator it = d_vector.begin(); it != d_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << d_vector.size()/* << " || capacity is: " << d_vector.capacity() */ << E;
	std::cout << std::endl;
	ft::vector<int> d_other;
	std::cout << "d_other is (empty vector):" << std::endl;
	for (ft::vector<int>::iterator it = d_other.begin(); it != d_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << d_other.size() << " || capacity is: " << d_other.capacity() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap a vector with several values with an empty vector: " E << std::endl;
	d_vector.swap(d_other);
	std::cout << "d_vector is:" << std::endl;
	for (ft::vector<int>::iterator it = d_vector.begin(); it != d_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << d_vector.size()/* << " || capacity is: " << d_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "d_other is:" << std::endl;
	for (ft::vector<int>::iterator it = d_other.begin(); it != d_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << d_other.size() << " || capacity is: " << d_other.capacity() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 30 so capacity > size" E << std::endl;
	a_vector.reserve(30);
	std::cout << BOLD "do: clear vector" E << std::endl;
	a_vector.clear();
	a_other.clear();
	c_vector.clear();
	c_other.clear();
	d_vector.clear();
	d_other.clear();
	
	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with str. ********************************************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	ft::vector<std::string> z_vector;
	std::cout << "z_vector is (empty vector):" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	ft::vector<std::string> z_other;
	std::cout << "z_other is (empty vector):" << std::endl;
	for (ft::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */<< E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap 2 empty vectors: " E << std::endl;
	z_vector.swap(z_other);
	std::cout << "z_vector is (empty vector):" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is (empty vector):" << std::endl;
	for (ft::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */<< E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: insert a value in both vectors: " E << std::endl;
	z_vector.push_back("Paris");
	z_other.push_back("Batignolles");
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */<< E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap 2 vectors with 1 value: " E << std::endl;
	z_vector.swap(z_other);
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */<< E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: insert several values in both vectors: " E << std::endl;

	z_vector.push_back("Marais");
	z_vector.push_back("Saint Germain");
	z_vector.push_back("Belleville");
	z_vector.push_back("Montmarte");
	z_vector.push_back("Butte aux Cailles");
	z_vector.push_back("Epinettes");
	z_vector.push_back("La Vilette");
	z_vector.push_back("Pere Lachaise");
	z_other.push_back("Londres");
	z_other.push_back("Singapour");
	z_other.push_back("New York");
	z_other.push_back("Sydney");

	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */<< E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap 2 vectors with severals value: " E << std::endl;
	z_vector.swap(z_other);
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */<< E;
	std::cout << std::endl;

	std::cout << std::endl;
	ft::vector<std::string> y_vector;
	std::cout << "y_vector is (empty vector):" << std::endl;
	for (ft::vector<std::string>::iterator it = y_vector.begin(); it != y_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << y_vector.size()/* << " || capacity is: " << y_vector.capacity() */ << E;
	std::cout << std::endl;
	ft::vector<std::string> y_other;
	y_other.push_back("Moon");
	std::cout << "y_other is :" << std::endl;
	for (ft::vector<std::string>::iterator it = y_other.begin(); it != y_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << y_other.size() << " || capacity is: " << y_other.capacity() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap an empty vector with a vector with 1 value: " E << std::endl;
	y_vector.swap(y_other);
	std::cout << "y_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = y_vector.begin(); it != y_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << y_vector.size()/* << " || capacity is: " << y_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "y_other is:" << std::endl;
	for (ft::vector<std::string>::iterator it = y_other.begin(); it != y_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << y_other.size() << " || capacity is: " << y_other.capacity() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	ft::vector<std::string> x_vector;
	x_vector.push_back("A");
	x_vector.push_back("B");
	x_vector.push_back("C");
	x_vector.push_back("D");
	std::cout << "x_vector is " << std::endl;
	for (ft::vector<std::string>::iterator it = x_vector.begin(); it != x_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << x_vector.size()/* << " || capacity is: " << d_vector.capacity() */ << E;
	std::cout << std::endl;
	ft::vector<std::string> x_other;
	std::cout << "x_other is (empty vector):" << std::endl;
	for (ft::vector<std::string>::iterator it = x_other.begin(); it != x_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << x_other.size() << " || capacity is: " << x_other.capacity() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap a vector with several values with an empty vector: " E << std::endl;
	x_vector.swap(x_other);
	std::cout << "x_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = x_vector.begin(); it != x_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << x_vector.size()/* << " || capacity is: " << d_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "x_other is:" << std::endl;
	for (ft::vector<std::string>::iterator it = x_other.begin(); it != x_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << x_other.size() << " || capacity is: " << x_other.capacity() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: reserve 30 so capacity > size" E << std::endl;
	z_vector.reserve(30);
	std::cout << BOLD "do: clear vector" E << std::endl;
	z_vector.clear();
	z_other.clear();
	c_vector.clear();
	c_other.clear();
	d_vector.clear();
	d_other.clear();
	
	std::cout << "z_vector is (empty vector):" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is (empty vector):" << std::endl;
	for (ft::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */<< E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap 2 empty vectors: " E << std::endl;
	z_vector.swap(z_other);
	std::cout << "z_vector is (empty vector):" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is (empty vector):" << std::endl;
	for (ft::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */<< E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: insert a value in both vectors: " E << std::endl;
	z_vector.push_back("Paris");
	z_other.push_back("Batignolles");
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */<< E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap 2 vectors with 1 value: " E << std::endl;
	z_vector.swap(z_other);
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */<< E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: insert several values in both vectors: " E << std::endl;

	z_vector.push_back("Marais");
	z_vector.push_back("Saint Germain");
	z_vector.push_back("Belleville");
	z_vector.push_back("Montmarte");
	z_vector.push_back("Butte aux Cailles");
	z_vector.push_back("Epinettes");
	z_vector.push_back("La Vilette");
	z_vector.push_back("Pere Lachaise");
	z_other.push_back("Londres");
	z_other.push_back("Singapour");
	z_other.push_back("New York");
	z_other.push_back("Sydney");

	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */<< E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap 2 vectors with severals value: " E << std::endl;
	z_vector.swap(z_other);
	std::cout << "z_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_vector.begin(); it != z_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_vector.size() /* << " || capacity is: " << z_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "z_other is:" << std::endl;
	for (ft::vector<std::string>::iterator it = z_other.begin(); it != z_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << z_other.size() /* << " || capacity is: " << a_other.capacity() */<< E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "y_vector is (empty vector):" << std::endl;
	for (ft::vector<std::string>::iterator it = y_vector.begin(); it != y_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << y_vector.size()/* << " || capacity is: " << y_vector.capacity() */ << E;
	std::cout << std::endl;
	y_other.push_back("Moon");
	std::cout << "y_other is :" << std::endl;
	for (ft::vector<std::string>::iterator it = y_other.begin(); it != y_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << y_other.size() << " || capacity is: " << y_other.capacity() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap an empty vector with a vector with 1 value: " E << std::endl;
	y_vector.swap(y_other);
	std::cout << "y_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = y_vector.begin(); it != y_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << y_vector.size()/* << " || capacity is: " << y_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "y_other is:" << std::endl;
	for (ft::vector<std::string>::iterator it = y_other.begin(); it != y_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << y_other.size() << " || capacity is: " << y_other.capacity() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	x_vector.push_back("A");
	x_vector.push_back("B");
	x_vector.push_back("C");
	x_vector.push_back("D");
	std::cout << "x_vector is " << std::endl;
	for (ft::vector<std::string>::iterator it = x_vector.begin(); it != x_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << x_vector.size()/* << " || capacity is: " << d_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "x_other is (empty vector):" << std::endl;
	for (ft::vector<std::string>::iterator it = x_other.begin(); it != x_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << x_other.size() << " || capacity is: " << x_other.capacity() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BOLD "do: swap a vector with several values with an empty vector: " E << std::endl;
	x_vector.swap(x_other);
	std::cout << "x_vector is:" << std::endl;
	for (ft::vector<std::string>::iterator it = x_vector.begin(); it != x_vector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << x_vector.size()/* << " || capacity is: " << d_vector.capacity() */ << E;
	std::cout << std::endl;
	std::cout << "x_other is:" << std::endl;
	for (ft::vector<std::string>::iterator it = x_other.begin(); it != x_other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << ITGREY " || size is: " << x_other.size() << " || capacity is: " << x_other.capacity() << E;
	std::cout << std::endl;
	
	return (0);
}