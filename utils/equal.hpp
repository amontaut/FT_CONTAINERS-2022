/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   equal.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 20:30:26 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/30 20:32:29 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EQUAL_HPP
#define EQUAL_HPP

namespace ft 
{
	/* ************************************************************************** */
	/* Defined according to ***************************************************** */
	/* https://en.cppreference.com/w/cpp/algorithm/equal ************************ */
	/* ************************************************************************** */
	
	template <class InputIt1, class InputIt2>
	bool equal(InputIt1 first1, InputIt1 last1,
			   InputIt2 first2)
	{
		for (; first1 != last1; ++first1, ++first2)
		{
			if (!(*first1 == *first2))
			{
				return false;
			}
		}
		return true;
	};

}

#endif