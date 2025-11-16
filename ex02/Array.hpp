/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 23:37:12 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/16 01:20:16 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array {
private:
	T*				_elements;
	unsigned int	_size;
	
public:
	Array();
	Array(unsigned int n);
	Array(const Array& other);
	Array& operator=(const Array& other);
	~Array();
	unsigned int	size() const;
	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;
};

#include "Array.tpp" //a method to separate template class def but visible to compiler

#endif