/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:39:25 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/16 15:19:46 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdarg>
#include <cstddef>
#include <iostream>
#include <string>
#include "iter.hpp"

void	putStr(std::string& element)
{
	element = "WAASAI! 哇塞!";
}

void	printStr(std::string& element)
{
	std::cout << element << std::endl;
}

void	putInt(int& element)
{
	element = 1;
}

void	printInt(int& element)
{
	std::cout << element << std::endl;
}

template<typename T>
void	doubleValue(T& element)
{
	element = element + element;
}

int	main()
{
	const size_t	arraySize = 5;
	std::string	strArray[arraySize];

	std::cout << "=== STR ===" << std::endl;
	::iter(strArray, arraySize, putStr);
	::iter(strArray, arraySize, printStr);

	int	intArray[arraySize];
	std::cout << "\n=== INT ===" << std::endl;
	::iter(intArray, arraySize, putInt);
	::iter(intArray, arraySize, printInt);
	
	std::cout << "\n=== DOUBLE VALUE OF STR AND INT ===" << std::endl;
	::iter(strArray, arraySize, doubleValue<std::string>);
	::iter(strArray, arraySize, printStr);
	::iter(intArray, arraySize, doubleValue<int>);
	::iter(intArray, arraySize, printInt);
}