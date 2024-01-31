/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:03:09 by oroy              #+#    #+#             */
/*   Updated: 2024/01/30 23:10:10 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main( void )
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }

// My own test
int	main(void)
{
	Fixed a;
	Fixed b(12);
	Fixed c(0.5f);
	Fixed d(b);

	a = c;
	std::cout << a << std::endl;
	a = a + b;
	std::cout << a << std::endl;
	std::cout << (a == b) << std::endl;
	std::cout << Fixed::max(a, ++b) << std::endl;
	std::cout << Fixed::max(a++, b) << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << (a == c) << std::endl;
	std::cout << Fixed::min(--d, a) << std::endl;
	std::cout << (d / b) << std::endl;
	std::cout << b-- << std::endl;
	std::cout << b << std::endl;
	return (0);
}
