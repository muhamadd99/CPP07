/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 22:53:04 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/13 23:27:23 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void	swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
T min(const T& a, const T& b)
{
	return (a < b) ? a : b; 
// 	if (a < b)
// 		return a;
// 	return b;
}

template<typename T>
T max(const T& a, const T& b)
{
	return (a > b) ? a : b;
	// if (a > b)
	// 	return a;
	// return b;	
}