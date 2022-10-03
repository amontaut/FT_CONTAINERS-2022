/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enable_if.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 20:27:39 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/30 20:32:22 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENABLE_IF_HPP
#define ENABLE_IF_HPP

namespace ft
{
	/* ************************************************************************** */
	/* Defined according to ***************************************************** */
	/* https://en.cppreference.com/w/cpp/types/enable_if ************************ */
	/* ************************************************************************** */
	
	template <bool B, class T = void> 
	struct enable_if
	{
	};

	template <class T>		  
	struct enable_if<true, T> 
	{
		typedef T type;
	};
}

#endif