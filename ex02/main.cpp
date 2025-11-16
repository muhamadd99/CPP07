/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 23:49:09 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/16 10:09:42 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
	std::cout << "\n=== DEFAULT & EMPTY ARRAY TEST ===" << std::endl;
	Array<std::string>	defaultArray;
	std::cout << "Array Size: " << defaultArray.size() << std::endl; //size of empty array
	try 
	{
		std::cout << "Accessing out of bound Test.\n Array[0]: " << defaultArray[0] << std::endl; //accessing error test
		std::cout << "exception not triggered" << std::endl;
	} catch (const std::exception& e)
	{
		std::cout << "catch activated" << std::endl;
	}
	
	std::cout << "\n=== PARAMETERIZED ARRAY TEST ===" << std::endl;
	const size_t arraySize = 10;
	Array<std::string>	paramArray(arraySize);
	std::cout << "Array Size: " << paramArray.size() << std::endl;
	for (size_t i = 0; i < arraySize; i++)
		paramArray[i] = "WAAAASAI!";
	std::cout << "Array[0]: " << paramArray[0] << std::endl;
	
	std::cout << "\n=== COPY CONSTRUCTOR & CONST TEST ===" << std::endl;
	const Array<std::string>	paramArray2(paramArray) ;
	std::cout << "Array Size: " << paramArray2.size() << std::endl;
	std::cout << "Array[0]: " << paramArray2[0] << std::endl;

	std::cout << "\n=== COPY ASSIGNMENT OPERATOR ===" << std::endl;
	Array<std::string>	paramArray3;
	paramArray3 = paramArray;
	std::cout << "Array Size: " << paramArray3.size() << std::endl;
	std::cout << "Array[0]: " << paramArray3[0] << std::endl;

	return (0);
}