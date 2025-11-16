/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 23:49:06 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/16 09:19:00 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdexcept>

template<typename T>
Array<T>::Array() : _elements(NULL), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : _elements(new T[n]()), _size(n)
{}

template<typename T>
Array<T>::Array(const Array<T>& other) : _size(other._size)
{
	_elements = new T[_size];
	for(unsigned int i = 0; i < _size; i++)
		_elements[i] = other._elements[i];
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (this != &other)
	{
		delete[] _elements;
		_size = other._size;
		_elements = new T[_size];
		
		for(unsigned int i = 0; i < _size; i++)
			_elements[i] = other._elements[i];
	} 	
	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	delete[] _elements;
}

template<typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}

template<typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Index exceed bounds");
	return (_elements[index]);
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("Index exceed bounds");
	return(_elements[index]);
}
