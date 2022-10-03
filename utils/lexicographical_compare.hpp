/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lexicographical_compare.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 20:35:38 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/30 20:35:42 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEXICOGRAPHICAL_COMPARE_HPP
#define LEXICOGRAPHICAL_COMPARE_HPP

namespace ft
{
	/* ************************************************************************** */
	/* Defined according to ***************************************************** */
	/* https://en.cppreference.com/w/cpp/algorithm/lexicographical_compare ****** */
	/* ************************************************************************** */
	
	// Checks if the first range [first1, last1) is lexicographically less than the second range [first2, last2).
	// A lexicographical comparison is the kind of comparison generally used to sort words alphabetically in dictionaries; 
	//It involves comparing sequentially the elements that have the same position in both ranges against each other until one element is not equivalent to the other. 
	//The result of comparing these first non-matching elements is the result of the lexicographical comparison.
	// If both sequences compare equal until one of them ends, the shorter sequence is lexicographically less than the longer one.
	template <class InputIt1, class InputIt2>
	bool lexicographical_compare(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2)
	{
		for (; (first1 != last1) && (first2 != last2); ++first1, (void)++first2)
		{
			if (*first1 < *first2)
				return true;
			if (*first2 < *first1)
				return false;
		}
		return (first1 == last1) && (first2 != last2);
	}

	template <class InputIt1, class InputIt2, class Compare>
	bool lexicographical_compare(InputIt1 first1, InputIt1 last1, InputIt2 first2, InputIt2 last2, Compare comp)
	{
		for (; (first1 != last1) && (first2 != last2); ++first1, (void)++first2)
		{
			if (comp(*first1, *first2))
				return true;
			if (comp(*first2, *first1))
				return false;
		}
		return (first1 == last1) && (first2 != last2);
	}
}

#endif
