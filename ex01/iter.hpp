/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 23:37:17 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/15 23:37:19 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template<typename T, typename Function>
void	iter(T* array, size_t length, Function function)
{
	for (size_t i = 0; i < length; i++)
		function(array[i]);
}

#endif