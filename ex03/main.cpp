/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:03:09 by oroy              #+#    #+#             */
/*   Updated: 2024/01/31 19:52:25 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point const	a(0, 0);
	Point const	b(10, 30);
	Point const	c(20, 0);
	Point const	point(10, 15);
	Point const	point2(30, 15);

	bsp(a, b, c, point);
	bsp(a, b, c, point2);
	return (0);
}
