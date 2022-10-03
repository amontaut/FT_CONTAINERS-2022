/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integral.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amontaut <amontaut@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 20:33:23 by amontaut          #+#    #+#             */
/*   Updated: 2022/09/30 20:33:24 by amontaut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_INTEGRAL_HPP
#define IS_INTEGRAL_HPP

namespace ft
{
	/* ************************************************************************** */
	/* Defined according to ***************************************************** */
	/* https://en.cppreference.com/w/cpp/types/enable_if ************************ */
	/* ************************************************************************** */
	
	template <class T> 
	struct is_integral
	{
		static const bool value = false;
	};

	template <> 
	struct is_integral<int>
	{
		static const bool value = true;
	};
	template <> 
	struct is_integral<bool>
	{
		static const bool value = true;
	};
	template <> 
	struct is_integral<char>
	{
		static const bool value = true;
	};
	template <> 
	struct is_integral<char16_t>
	{
		static const bool value = true;
	};
	template <> 
	struct is_integral<char32_t>
	{
		static const bool value = true;
	};
	template <> 
	struct is_integral<wchar_t>
	{
		static const bool value = true;
	};
	template <> 
	struct is_integral<short>
	{
		static const bool value = true;
	};
	template <>
	struct is_integral<long>
	{
		static const bool value = true;
	};
	template <> 
	struct is_integral<long long>
	{
		static const bool value = true;
	};
}

#endif
