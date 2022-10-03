#include <iostream>
#include <stack>
#include <vector>
#include "../../../containers/stack.hpp"

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
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Test for the non-member function operator= ******************************* */" E << std::endl;
	std::cout << BLUE "/* Replaces the contents of the container. ********************************** */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with ints. ********************************************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	ft::stack<int> a_stack;
	ft::stack<int> b_stack;
	ft::stack<int> c_stack;
	ft::stack<int> d_stack;

	for (int i = 0; i <= 5; i++)
		a_stack.push(i);
	for (int i = 11; i <= 22; i += 11)
		b_stack.push(i);
	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "a_stack is:" << std::endl;
	for (ft::stack<int> tmp = a_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << a_stack.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "b_stack is:" << std::endl;
	for (ft::stack<int> tmp = b_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << b_stack.size() << E;
	std::cout << std::endl;
	std::cout << "c_stack is:" << std::endl;
	for (ft::stack<int> tmp = c_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << c_stack.size() << E;
	std::cout << std::endl;
	std::cout << "d_stack is:" << std::endl;
	for (ft::stack<int> tmp = d_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << d_stack.size() << E;
	std::cout << std::endl;

	std::cout << BOLD "do: c_stack = a_stack" E << std::endl;
	c_stack = a_stack;
	std::cout << "c_stack is:" << std::endl;
	for (ft::stack<int> tmp = c_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << c_stack.size() << E;
	std::cout << std::endl;

	std::cout << BOLD "do: c_stack = b_stack" E << std::endl;
	c_stack = b_stack;
	std::cout << "c_stack is:" << std::endl;
	for (ft::stack<int> tmp = c_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << c_stack.size() << E;
	std::cout << std::endl;

	std::cout << BOLD "do: c_stack = d_stack" E << std::endl;
	c_stack = d_stack;
	std::cout << "c_stack is:" << std::endl;
	for (ft::stack<int> tmp = c_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << c_stack.size() << E;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << BLUE "/* Tests with str. ********************************************************* */" E << std::endl;
	std::cout << BLUE "/* ************************************************************************** */" E << std::endl;
	std::cout << std::endl;

	ft::stack<std::string> w_stack;
	ft::stack<std::string> x_stack;
	ft::stack<std::string> y_stack;
	ft::stack<std::string> z_stack;
	w_stack.push("Paris");
	w_stack.push("Londres");
	w_stack.push("Singapour");
	w_stack.push("New York");
	w_stack.push("Sydney");
	x_stack.push("Rue");
	x_stack.push("Place");

	std::cout << BOLD "Initial values:" E << std::endl;
	std::cout << "w_stack is:" << std::endl;
	for (ft::stack<std::string> tmp = w_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << w_stack.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "x_stack is:" << std::endl;
	for (ft::stack<std::string> tmp = x_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << x_stack.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "y_stack is:" << std::endl;
	for (ft::stack<std::string> tmp = y_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << y_stack.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "z_stack is:" << std::endl;
	for (ft::stack<std::string> tmp = y_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << y_stack.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: y_stack = w_stack" E << std::endl;
	y_stack = w_stack;
	std::cout << "y_stack is:" << std::endl;
	for (ft::stack<std::string> tmp = y_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << y_stack.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: y_stack = x_stack" E << std::endl;
	y_stack = x_stack;
	std::cout << "y_stack is:" << std::endl;
	for (ft::stack<std::string> tmp = y_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << y_stack.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << BOLD "do: y_stack = z_stack" E << std::endl;
	y_stack = z_stack;
	std::cout << "y_stack is:" << std::endl;
	for (ft::stack<std::string> tmp = y_stack; !tmp.empty(); tmp.pop())
		std::cout << tmp.top() << ' ';
	std::cout << std::endl;
	std::cout << ITGREY " Size is: " << y_stack.size() << E;
	std::cout << std::endl;
	std::cout << std::endl;

	return 0;
}