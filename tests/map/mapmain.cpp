#include <iostream>
#include <map>
#include <map>
#include "../../containers/map.hpp"
#include "../../containers/map.hpp"

// enlever tous les \n dans main et pas main
// source pour campuses : https://42.fr/en/admissions/find-42-campus/
int main()
{
	// mapcontainer_name[ key name ] = mapped value

	std::map<std::string, int> campus;
	campus["Paris"] = 42;
	campus["Quebec"] = 42;
	campus["Kazan"] = 21;
	campus["Moscow"] = 21;
	campus["Brussels"] = 19;
	campus["Med"] = 1337;
	campus["Ben_guerir"] = 1337;
	campus["Khouribga"] = 1337;

	ft::map<std::string, int> mycampus;
	mycampus["Paris"] = 42;
	mycampus["Quebec"] = 42;
	mycampus["Kazan"] = 21;
	mycampus["Moscow"] = 21;
	mycampus["Brussels"] = 19;
	mycampus["Med"] = 1337;
	mycampus["Ben_guerir"] = 1337;
	mycampus["Khouribga"] = 1337;

	//** Test vraie begin et end **//
	std::cout << "test vraie begin/end :" << std::endl;
	for (std::map<std::string, int>::iterator it = campus.begin(); it != campus.end(); it++)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	//** FIN Test vraie begin et end **//
	//** Test moi begin et end **//
	std::cout << "test moi begin/end :" << std::endl;
	for (ft::map<std::string, int>::iterator it = mycampus.begin(); it != mycampus.end(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	//** FIN Test moi begin et end **//

	//** Test vraie rbegin et end **//
	std::cout << "test vraie rbegin/rend :" << std::endl;
	for (std::map<std::string, int>::reverse_iterator it = campus.rbegin(); it != campus.rend(); it++)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	//** FIN Test vraie rbegin et end **//
	//** Test moi rbegin et rend **//
	std::cout << "test moi rbegin/rend :" << std::endl;
	for (ft::map<std::string, int>::reverse_iterator it = mycampus.rbegin(); it != mycampus.rend(); ++it)
		std::cout << it->first << "   " << it->second << std::endl;
	//** FIN Test moi rbegin et rend **//

	//** Test vraie empty **//
	std::cout << campus.empty();
	if (campus.empty() == 0)
		std::cout << " -> = 0 donc pas empty" << std::endl;
	else
		std::cout << " -> = 1 donc empty" << std::endl;
	//** FIN Test vraie empty **//
	//** Test moi empty **//
	std::cout << mycampus.empty();
	if (mycampus.empty() == 0)
		std::cout << " -> = 0 donc pas empty" << std::endl;
	else
		std::cout << " -> = 1 donc empty" << std::endl;
	//** FIN Test moi empty **//

	//** Test vraie size **//
	std::cout << "size is " << campus.size() << std::endl;
	//** FIN Test vraie size **//
	//** Test moi size **//
	std::cout << "size is " << mycampus.size() << std::endl;
	//** FIN Test moi size **//

	//** Test vraie max size **//
	std::cout << "max size is " << campus.max_size() << std::endl;
	//** FIN Test vraie max size **//
	//** Test moi max size **//
	std::cout << "max size is " << mycampus.max_size() << std::endl;
	//** FIN Test moi max size **//

	//** Test vraie insert **//
	campus.insert(std::pair<std::string, int>("Lyon", 42));
	std::cout << "apres insert 1 is :" << std::endl;
	for (std::map<std::string, int>::iterator it = campus.begin(); it != campus.end(); it++)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	// campus.insert(campus.begin(), std::pair<std::string, int>("Tokyo", 42));
	// std::cout << "apres insert 2 is :" << std::endl;
	// for (std::map<std::string, int>::iterator it = campus.begin(); it != campus.end(); it++)
	// 	std::cout << it->first << "   " << it->second << std::endl;
	// std::cout << std::endl;
	// campus.insert(campus.begin(), campus.end());
	// std::cout << "apres insert 3 is :" << std::endl;
	// for (std::map<std::string, int>::iterator it = campus.begin(); it != campus.end(); it++)
	// 	std::cout << it->first << "   " << it->second << std::endl;
	// std::cout << std::endl;
	//** FIN Test vraie insert **//
	//** Test moi insert **//
	mycampus.insert(ft::pair<std::string, int>("Lyon", 42));
	std::cout << "apres insert 1 is :" << std::endl;
	for (ft::map<std::string, int>::iterator it = mycampus.begin(); it != mycampus.end(); it++)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	// mycampus.insert(mycampus.begin(), ft::pair<std::string, int>("Tokyo", 42));
	// std::cout << "apres insert 2 is :" << std::endl;
	// for (ft::map<std::string, int>::iterator it = mycampus.begin(); it != mycampus.end(); it++)
	// 	std::cout << it->first << "   " << it->second << std::endl;
	// std::cout << std::endl;
	// mycampus.insert(mycampus.begin(), mycampus.end());
	// std::cout << "apres insert 3 is :" << std::endl;
	// for (ft::map<std::string, int>::iterator it = mycampus.begin(); it != mycampus.end(); it++)
	// 	std::cout << it->first << "   " << it->second << std::endl;
	// std::cout << std::endl;
	//** FIN Test moi insert **//

	//** Test vraie erase **//
	campus.erase(campus.begin());
	std::cout << "apres erase 1 is :" << std::endl;
	for (std::map<std::string, int>::iterator it = campus.begin(); it != campus.end(); it++)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	campus.erase(campus.begin(), campus.begin());
	std::cout << "apres erase 2 is :" << std::endl;
	for (std::map<std::string, int>::iterator it = campus.begin(); it != campus.end(); it++)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	campus.erase(std::string("Lyon"));
	std::cout << "apres erase 3 is :" << std::endl;
	for (std::map<std::string, int>::iterator it = campus.begin(); it != campus.end(); it++)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	//** FIN Test vraie erase **//
	//** Test moi erase **//
	mycampus.erase(mycampus.begin());
	std::cout << "apres erase 1 is :" << std::endl;
	for (ft::map<std::string, int>::iterator it = mycampus.begin(); it != mycampus.end(); it++)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	mycampus.erase(mycampus.begin(), mycampus.begin());
	std::cout << "apres erase 2 is :" << std::endl;
	for (ft::map<std::string, int>::iterator it = mycampus.begin(); it != mycampus.end(); it++)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	mycampus.erase(std::string("Lyon"));
	std::cout << "apres erase 3 is :" << std::endl;
	for (ft::map<std::string, int>::iterator it = mycampus.begin(); it != mycampus.end(); it++)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	//** FIN Test moi erase **//

	// //** Test vraie count **//
	// std::cout << "count de Lyon " << campus.count(std::string("Lyon")) << std::endl;
	// std::cout << "count de Quebec " << campus.count(std::string("Quebec")) << std::endl;
	// //** FIN Test vraie count **//
	// //** Test moi count **//
	// std::cout << "count de Lyon " << mycampus.count(std::string("Lyon")) << std::endl;
	// std::cout << "count de Quebec " << mycampus.count(std::string("Quebec")) << std::endl;
	// std::cout << std::endl;
	// //** FIN Test moi count **//

	//** Test vraie find **//
	std::cout << "affiche a partir de quebec :" << std::endl;
	for (std::map<std::string, int>::iterator it = campus.find(std::string("Quebec")); it != campus.end(); it++)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	//** FIN Test vraie find **//
	//** Test moi find **//
	std::cout << "affiche a partir de quebec :" << std::endl;
	for (ft::map<std::string, int>::iterator it = mycampus.find(std::string("Quebec")); it != mycampus.end(); it++)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	//** FIN Test moi find **//

	//** Test vraie equal_range **//
	std::pair<std::map<std::string, int>::iterator, std::map<std::string, int>::iterator> it;
	it = campus.equal_range(std::string("Moscow"));
	std::cout << "The lower bound from Moscow is " << it.first->first << ":" << it.first->second;
	std::cout << "\nThe upper bound is " << it.second->first << ":" << it.second->second;
	std::cout << std::endl;
	//** FIN Test vraie equal_range **//
	//** Test moi equal_range **//
	ft::pair<ft::map<std::string, int>::iterator, ft::map<std::string, int>::iterator> myit;
	myit = mycampus.equal_range(std::string("Moscow"));
	std::cout << "The lower bound from Moscow is " << myit.first->first << ":" << myit.first->second;
	std::cout << "\nThe upper bound is " << myit.second->first << ":" << myit.second->second;
	std::cout << std::endl;
	//** FIN Test moi equal_range **//

	//** Test vraie lower_bound et upper_bound **//
	std::map<std::string, int>::iterator lb_it;
	std::map<std::string, int>::iterator ub_it;
	lb_it = campus.lower_bound(std::string("Med"));
	ub_it = campus.upper_bound(std::string("Quebec"));
	std::cout << "\nEntre lower bound et upper bound aka entre med et quebec " << std::endl;
	for (; lb_it != ub_it; lb_it++)
		std::cout << lb_it->first << "   " << lb_it->second << std::endl;
	//** FIN Test vraie lower_bound et upper_bound **//
	//** Test moi lower_bound et upper_bound **//
	ft::map<std::string, int>::iterator mylb_it;
	ft::map<std::string, int>::iterator myub_it;
	mylb_it = mycampus.lower_bound(std::string("Med"));
	myub_it = mycampus.upper_bound(std::string("Quebec"));
	std::cout << "\nEntre lower bound et upper bound aka entre med et quebec " << std::endl;
	for (; mylb_it != myub_it; mylb_it++)
		std::cout << mylb_it->first << "   " << mylb_it->second << std::endl;
	//** FIN Test moi lower_bound et upper_bound **//

	//** Test vraie key_comp **//
	std::map<std::string, int>::key_compare key_comp;
	key_comp = campus.key_comp();
	std::cout << "\nbellow Kazan:\n ";
	for (std::map<std::string, int>::iterator it = campus.begin(); key_comp((*it).first, std::string("Kazan")); it++)
		std::cout << it->first << "  " << it->second << "\n ";
	//** FIN Test vraie key_comp **//
	//** Test moi key_comp **//
	ft::map<std::string, int>::key_compare mykey_comp;
	mykey_comp = mycampus.key_comp();
	std::cout << "\nbellow Kazan:\n ";
	for (ft::map<std::string, int>::iterator it = mycampus.begin(); mykey_comp((*it).first, std::string("Kazan")); it++)
		std::cout << it->first << "  " << it->second << "\n ";
	//** FIN Test moi key_comp **//

	//** Test vraie value_comp **//
	std::map<std::string, int>::value_compare value_comp = campus.value_comp();
	std::cout << "\nValue compare:\n ";
	for (std::map<std::string, int>::iterator it = campus.begin(); value_comp(*it, *campus.rbegin()); *it++)
		std::cout << it->first << "  " << it->second << std::endl;
	//** FIN Test vraie value_comp **//
	//** Test moi value_comp **//
	ft::map<std::string, int>::value_compare myvalue_comp = mycampus.value_comp();
	std::cout << "\nValue compare:\n ";
	for (ft::map<std::string, int>::iterator it = mycampus.begin(); myvalue_comp(*it, *mycampus.rbegin()); *it++)
		std::cout << it->first << "  " << it->second << std::endl;
	//** FIN Test moi value_comp **//

	/////////

	//** Test vraie swap **//
	std::map<std::string, int> other;
	other["Other 1"] = 1;
	other["Other 2"] = 2;
	other["Other 3"] = 3;
	other["Other 4"] = 4;
	campus.swap(other);
	std::cout << "campus apres swap is " << std::endl;
	for (std::map<std::string, int>::iterator it = campus.begin(); it != campus.end(); it++)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	std::cout << "other apres swap is " << std::endl;
	for (std::map<std::string, int>::iterator it = other.begin(); it != other.end(); it++)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	//** FIN Test vraie swap **//
	//** Test moi swap **//
	ft::map<std::string, int> myother;
	myother["myOther 1"] = 1;
	myother["myOther 2"] = 2;
	myother["myOther 3"] = 3;
	myother["myOther 4"] = 4;
	mycampus.swap(myother);
	std::cout << "mycampus apres swap is " << std::endl;
	for (ft::map<std::string, int>::iterator it = mycampus.begin(); it != mycampus.end(); it++)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	std::cout << "myother apres swap is " << std::endl;
	for (ft::map<std::string, int>::iterator it = myother.begin(); it != myother.end(); it++)
		std::cout << it->first << "   " << it->second << std::endl;
	std::cout << std::endl;
	//** FIN Test moi swap **//

	// //** Test vraie clear **//
	// std::cout << "avant clear is :" << std::endl;
	// for (std::map<std::string, int>::iterator it = campus.begin(); it != campus.end(); it++)
	// 	std::cout << it->first << "   " << it->second << std::endl;
	// std::cout << std::endl;
	// campus.clear();
	// std::cout << "apres clear is :" << std::endl;
	// for (std::map<std::string, int>::iterator it = campus.begin(); it != campus.end(); it++)
	// 	std::cout << it->first << "   " << it->second << std::endl;
	// std::cout << std::endl;
	// //** FIN Test vraie clear **//
	// //** Test moi clear **//
	// std::cout << "avant clear is :" << std::endl;
	// for (ft::map<std::string, int>::iterator it = mycampus.begin(); it != mycampus.end(); it++)
	// 	std::cout << it->first << "   " << it->second << std::endl;
	// std::cout << std::endl;
	// mycampus.clear();
	// std::cout << "apres clear is :" << std::endl;
	// for (ft::map<std::string, int>::iterator it = mycampus.begin(); it != mycampus.end(); it++)
	// 	std::cout << it->first << "   " << it->second << std::endl;
	// std::cout << std::endl;
	// //** FIN Test moi clear **//

	return 0;
}