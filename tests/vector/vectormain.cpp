#include <iostream>
#include <vector>
#include "../../containers/vector.hpp"

// enlever tous les \n dans main et pas main

int main()
{
	/*
	 ** MEMBER FCT **
	 */

	/*
	** ITERATORS **
	*/
	// begin	Return iterator to beginning (public member function)
	// end	Return iterator to end (public member function)
	// rbegin	Return reverse iterator to reverse beginning (public member function)
	// rend	Return reverse iterator to reverse end (public member function)
	// cbegin	Return const_iterator to beginning (public member function)
	// cend	Return const_iterator to end (public member function)
	// crbegin	Return const_reverse_iterator to reverse beginning (public member function)
	// crend	Return const_reverse_iterator to reverse end (public member function)

	/*
	 ** CAPACITY **
	 */
	// size	Return size (public member function)
	// max_size	Return maximum size (public member function)
	// resize	Change size (public member function)
	// capacity	Return size of allocated storage capacity (public member function)
	// empty	Test whether vector is empty (public member function)
	// reserve	Request a change in capacity (public member function)
	// shrink_to_fit	Shrink to fit (public member function)

	/*
	 ** ELEMENT ACCESS **
	 */
	// operator[]	Access element (public member function)
	// at	Access element (public member function)
	// front	Access first element (public member function)
	// back	Access last element (public member function)
	// data	Access data (public member function)

	/*
	 ** MODIFIERS **
	 */
	// assign	Assign vector content (public member function)
	// push_back	Add element at the end (public member function)
	// pop_back	Delete last element (public member function)
	// insert	Insert elements (public member function)
	// erase	Erase elements (public member function)
	// swap	Swap content (public member function)
	// clear	Clear content (public member function)
	// emplace	Construct and insert element (public member function)
	// emplace_back	Construct and insert element at the end (public member function)

	/*
	 ** ALLOCATORS **
	 */
	// get_allocator	Get allocator (public member function)

	// ---------------------------------- //
	/*
	 ** NON MEMBERS (TEMPLATE) **
	 */

	// relational operators	Relational operators for vector (function template)
	// swap	Exchange contents of vectors (function template)

	//*******************************************************************************************************//
	//*************  MAIN  **********************************************************************************//
	//*******************************************************************************************************//

	// //** Test vraie push back **//
	// //** Test vraie begin **//
	// //** Test vraie end **//
	// std::vector<int> myvector;

	// for (int i = 1; i <= 5; i++)
	// 	myvector.push_back(i);

	// std::cout << "myvector contains:";
	// for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
	// 	std::cout << ' ' << *it << std::endl;
	// //** FIN Test vraie push back **//
	// //** FIN Test vraie begin **//
	// //** FIN Test vraie end **//

	// //** Test moi push back **//
	// //** Test moi begin **//
	// //** Test moi end **//
	// ft::vector<int> myownvector;

	// for (int i = 1; i <= 5; i++)
	// 	myownvector.push_back(i);

	// std::cout << "myownvector contains:";
	// for (ft::vector<int>::iterator myit = myownvector.begin(); myit != myownvector.end(); ++myit)
	// 	std::cout << ' ' << *myit << std::endl;
	// //** FIN Test moi push back **//
	// //** FIN Test moi begin **//
	// //** FIN Test moi end **//

	//** Test vraie assign **//
	std::vector<int> myvector;
	myvector.assign(5, 0);
	std::cout << "myvector avec 5 fois 0 contains:";
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	myvector.assign(4, 1);
	std::cout << "myvector avec 4 fois 1 contains:";
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	myvector.assign(7, 2);
	std::cout << "myvector avec 4 fois 2 contains:";
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	myvector.assign(5, 3);
	std::cout << "myvector avec 5 fois 3 contains:";
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	myvector.assign(myvector.begin(), myvector.end() - 1);
	std::cout << "myvector partant de myvector 0 jusqu'a l'avant dernier:";
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	myvector.assign(myvector.begin(), myvector.end() + 1);
	std::cout << "myvector partant de myvector 0  jusqu'au dernier + 1:";
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	//** FIN Test vraie assign **//

	//** Test moi assign **//
	ft::vector<int> myownvector;
	myownvector.myassign(5, 0);
	std::cout << "myownvector avec 5 fois 0 contains:";
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	myownvector.myassign(4, 1);
	std::cout << "myownvector avec 4 fois 1 contains:";
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	myownvector.myassign(7, 2);
	std::cout << "myownvector avec 4 fois 2 contains:";
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	myownvector.myassign(5, 3);
	std::cout << "myownvector avec 5 fois 3 contains:";
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	myownvector.myassign(myownvector.begin(), myownvector.end() - 1);
	std::cout << "myownvector partant de myownvector 0 jusqu'a l'avant dernier:";
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	myownvector.myassign(myownvector.begin(), myownvector.end() + 1);
	std::cout << "myownvector partant de myownvector 0 jusqu'au dernier + 1:";
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	// ** FIN Test moi assign **//

	//** Test vraie at **//
	std::cout << "size of my vector is " << myvector.size() << std::endl;
	for (int i = 0; i <= 4; i++)
		myvector[i] = i;
	try
	{
		std::cout << "En 2eme pos de mon vector il y a : " << myvector.at(2) << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "En 7eme pos de mon vector il y a (out of range): " << myvector.at(7) << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "En 0eme pos de mon vector il y a : " << myvector.at(0) << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "En -1eme pos de mon vector il y a (out of range): " << myvector.at(-1) << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}
	// ** FIN Test vrai at **//

	//** Test moi at **//
	std::cout << "size of my vector is " << myownvector.size() << std::endl;
	for (int i = 0; i <= 4; i++)
		myownvector[i] = i;
	try
	{
		std::cout << "En 2eme pos de mon vector il y a : " << myownvector.myat(2) << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "En 7eme pos de mon vector il y a (out of range): " << myownvector.myat(7) << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "En 0eme pos de mon vector il y a : " << myownvector.myat(0) << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}

	try
	{
		std::cout << "En -1eme pos de mon vector il y a (out of range): " << myownvector.myat(-1) << std::endl;
	}
	catch (std::out_of_range const &exc)
	{
		std::cout << exc.what() << std::endl;
	}
	// ** FIN Test moi at **//

	//** Test vraie begin et end **//
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	//** FIN Test vraie begin et end **//

	//** Test moi begin et end **//
	for (ft::vector<int>::iterator it = myownvector.mybegin(); it != myownvector.myend(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	//** FIN Test moi begin et end **//

	//** Test vraie rbegin et rend**//
	for (std::vector<int>::reverse_iterator it = myvector.rbegin(); it != myvector.rend(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	//** FIN Test vraie rbegin et rend **//

	//** Test moi rbegin et rend **//
	for (ft::vector<int>::reverse_iterator it = myownvector.myrbegin(); it != myownvector.myrend(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	//** FIN Test moi rbegin et rend **//

	//** Test vraie empty **//
	// myvector.clear(); //activate pour qu'il soit empty
	std::cout << myvector.empty();
	if (myvector.empty() == 0)
		std::cout << " -> = 0 donc pas empty" << std::endl;
	else
		std::cout << " -> = 1 donc empty" << std::endl;
	//** FIN Test vraie empty **//

	//** Test moi empty **//
	// myownvector.clear(); //activate pour qu'il soit empty
	std::cout << myownvector.myempty();
	if (myownvector.myempty() == 0)
		std::cout << " -> = 0 donc pas empty" << std::endl;
	else
		std::cout << " -> = 1 donc empty" << std::endl;
	// ** FIN Test moi empty **//

	// //** Test vraie reserve **//
	// myvector.reserve(12);
	// std::cout << "New capacity is " << myvector.capacity() << std::endl;
	// myvector.push_back(42);
	// myvector.push_back(43);
	// for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
	// 	std::cout << ' ' << *it;
	// std::cout << std::endl;
	// std::cout << "Max size is " << myvector.max_size() << std::endl;
	// try
	// {
	// 	myvector.reserve(4611686018427387904);
	// }
	// catch (std::length_error const &excmax)
	// {
	// 	std::cout << excmax.what() << std::endl;
	// }

	// //** FIN Test vraie reserve **//

	// //** Test moi reserve **//
	// myownvector.myreserve(12);
	// std::cout << "New capacity is " << myownvector.capacity() << std::endl;
	// myownvector.push_back(42);
	// myownvector.push_back(43);
	// for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
	// 	std::cout << ' ' << *it;
	// std::cout << std::endl;
	// std::cout << "Max size is " << myownvector.max_size() << std::endl;
	// try
	// {
	// 	myownvector.myreserve(4611686018427387904);
	// }
	// catch (std::length_error const &excmax2)
	// {
	// 	std::cout << excmax2.what() << std::endl;
	// }
	// //** FIN Test moi reserve **//

	//** Test vraie insert **//
	std::cout << "avant insert is " << std::endl;
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	myvector.insert(myvector.end(), 800);
	std::cout << "apres insert 1 is " << std::endl;
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	myvector.insert(myvector.end() - 2, 4, 70);
	std::cout << "apres insert 2 is " << std::endl;
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << std::endl;

	myvector.insert(myvector.end() - 1, 10, 256);
	std::cout << "apres insert 3 is " << std::endl;
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << std::endl;
	//** FIN Test vraie insert **//

	//** Test moi insert **//
	std::cout << "avant insert is " << std::endl;
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	myownvector.insert(myownvector.end(), 800);
	std::cout << "apres insert 1 is " << std::endl;
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	myownvector.insert(myownvector.end() - 2, 4, 70);
	std::cout << "apres insert 2 is " << std::endl;
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	myownvector.insert(myownvector.end() - 1, 10, 256);
	std::cout << "apres insert 3 is " << std::endl;
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	//** FIN Test moi insert **//

	//** Test vraie erase **//
	std::cout << "avant erase is " << std::endl;
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	myvector.erase(myvector.begin() + 1);
	std::cout << "apres erase 1 is " << std::endl;
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	myvector.erase(myvector.begin() + 1, myvector.end() - 1);
	std::cout << "apres erase 2 is " << std::endl;
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	//** Test vraie erase **//

	//** Test moi erase **//
	std::cout << "avant erase is " << std::endl;
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	myownvector.myerase(myownvector.begin() + 1);
	std::cout << "apres erase is " << std::endl;
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;

	myownvector.myerase(myownvector.begin() + 1, myownvector.end() - 1);
	std::cout << "apres erase 2 is " << std::endl;
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	//** Test moi erase **//

	//** Test vraie push back **//
	std::cout << "avant push back is " << std::endl;
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	myvector.push_back(1);
	std::cout << "apres push back is " << std::endl;
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	//** Test vraie push back **//

	//** Test moi push back **//
	std::cout << "avant push back is " << std::endl;
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	myownvector.mypush_back(1);
	std::cout << "apres erase is " << std::endl;
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	//** Test moi push back **//

	//** Test vraie pop back **//
	std::cout << "avant pop back is " << std::endl;
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	myvector.pop_back();
	std::cout << "apres pop back is " << std::endl;
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	//** Test vraie pop back **//

	//** Test moi pop back **//
	std::cout << "avant pop back is " << std::endl;
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	myownvector.mypop_back();
	std::cout << "apres pop back is " << std::endl;
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	//** Test moi pop back **//

	//** Test vraie resize **//
	myvector.push_back(5);
	myvector.push_back(4);
	myvector.push_back(3);
	myvector.push_back(2);
	myvector.push_back(1);
	std::cout << "avant resize is " << std::endl;
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	myvector.resize(8, 0);
	std::cout << "apres resize is " << std::endl;
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	myvector.resize(2, 0);
	std::cout << "apres resize is " << std::endl;
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	//** Test vraie resize **//

	//** Test moi resize **//
	myownvector.mypush_back(5);
	myownvector.mypush_back(4);
	myownvector.mypush_back(3);
	myownvector.mypush_back(2);
	myownvector.mypush_back(1);
	std::cout << "avant resize is " << std::endl;
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	myownvector.myresize(8, 0);
	std::cout << "apres resize is " << std::endl;
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	myownvector.myresize(2, 0);
	std::cout << "apres resize is " << std::endl;
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	//** Test moi resize **//

	//** Test vraie swap **//
	std::vector<int> other;
	other.assign(5, 0);
	myvector.swap(other);
	std::cout << "myvector apres swap is " << std::endl;
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "other apres swap is " << std::endl;
	for (std::vector<int>::iterator it = other.begin(); it != other.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	//** FIN Test vraie swap **//

	//** Test moi swap **//
	ft::vector<int> myother;
	myother.assign(5, 0);
	myownvector.myswap(myother);
	std::cout << "myownvector apres swap is " << std::endl;
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	std::cout << "myother apres swap is " << std::endl;
	for (ft::vector<int>::iterator it = myother.begin(); it != myother.end(); ++it)
		std::cout << ' ' << *it;
	std::cout << std::endl;
	//** FIN Test moi swap **//

	//** Test vraie clear **//
	std::cout << std::endl;
	myvector.clear();
	std::cout << "capacity is " << myvector.capacity() << std::endl;
	std::cout << "size is " << myvector.size() << std::endl;
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		std::cout << ' ' << *it;
	//** FIN Test vraie clear **//

	//** Test moi clear **//
	myownvector.clear();
	std::cout << "capacity is " << myownvector.capacity() << std::endl;
	std::cout << "size is " << myownvector.size() << std::endl;
	for (ft::vector<int>::iterator it = myownvector.begin(); it != myownvector.end(); ++it)
		std::cout << ' ' << *it;
	//** FIN Test moi clear **//

	return 0;

	// pointer _arr = data
	// alloc type _alloc = A
}