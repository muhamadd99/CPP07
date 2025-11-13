/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbani-ya <mbani-ya@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 23:27:46 by mbani-ya          #+#    #+#             */
/*   Updated: 2025/11/13 23:29:37 by mbani-ya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

 int	main( void ) {
 	int a = 2;
 	int b = 3;

 	::swap( a, b );
 	std::cout << "a = " << a << ", b = " << b << std::endl;
 	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
 	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
 	std::string c = "chaine1";
 	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}