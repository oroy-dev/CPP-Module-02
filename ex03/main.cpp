/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:03:09 by oroy              #+#    #+#             */
/*   Updated: 2024/02/01 14:58:59 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	// char		arr[25][25];
	Point const	a(1, 1);
	Point const	b(5, 15);
	Point const	c(10, 1);
	Point const	point(4, 7);
	Point const	point2(20, 15);

	// for (int row = 0; row < 25; row++)
	// {
	// 	for (int col = 0; col < 25; col++)
	// 		arr[row][col] = '.';
	// }
	// for (int row = 0; row < 25; row++)
	// {
	// 	if (roundf(a.getFY()) == 25 - row || roundf(b.getFY()) == 25 - row || roundf(c.getFY()) == 25 - row || roundf(point.getFY()) == 25 - row || roundf(point2.getFY()) == 25 - row)
	// 	{
	// 		for (int col = 0; col < 25; col++)
	// 		{
	// 			if (roundf(a.getFX()) == col && roundf(a.getFY()) == 25 - row )
	// 				arr[row][col] = 'A';
	// 			else if (roundf(b.getFX()) == col && roundf(b.getFY()) == 25 - row)
	// 				arr[row][col] = 'B';
	// 			else if (roundf(c.getFX()) == col && roundf(c.getFY()) == 25 - row)
	// 				arr[row][col] = 'C';
	// 			else if (roundf(point.getFX()) == col && roundf(point.getFY()) == 25 - row)
	// 				arr[row][col] = 'P';
	// 			else if (roundf(point2.getFX()) == col && roundf(point2.getFY()) == 25 - row)
	// 				arr[row][col] = 'Q';
	// 		}
	// 	}
	// }
	// for (int row = 0; row < 25; row++)
	// {
	// 	for (int col = 0; col < 25; col++)
	// 		std::cout << arr[row][col];
	// 	std::cout << std::endl;
	// }
	std::cout << std::endl;
	std::cout << "Point1 (" << point.getFX() << ", " << point.getFY() << ") - " << "In triangle: " << bsp(a, b, c, point) << std::endl;
	std::cout << "Point2 (" << point2.getFX() << ", " << point2.getFY() << ") - " << "In triangle: " << bsp(a, b, c, point2) << std::endl;
	return (0);
}
