/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:03:09 by oroy              #+#    #+#             */
/*   Updated: 2024/02/01 16:43:31 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	Point const	a(1, 1);
	Point const	b(5, 15);
	Point const	c(10, 1);

	Point const	point(3, 14);
	Point const	point2(3.6, 9.4);

	char		arr[25][25];

	for (int row = 0; row < 25; row++)
	{
		for (int col = 0; col < 25; col++)
			arr[row][col] = '.';
	}
	for (int row = 0; row < 25; row++)
	{
		if (roundf(a.getY().toFloat()) == 25 - row || roundf(b.getY().toFloat()) == 25 - row || roundf(c.getY().toFloat()) == 25 - row || roundf(point.getY().toFloat()) == 25 - row || roundf(point2.getY().toFloat()) == 25 - row)
		{
			for (int col = 0; col < 25; col++)
			{
				if (roundf(a.getX().toFloat()) == col && roundf(a.getY().toFloat()) == 25 - row )
					arr[row][col] = 'A';
				else if (roundf(b.getX().toFloat()) == col && roundf(b.getY().toFloat()) == 25 - row)
					arr[row][col] = 'B';
				else if (roundf(c.getX().toFloat()) == col && roundf(c.getY().toFloat()) == 25 - row)
					arr[row][col] = 'C';
				else if (roundf(point.getX().toFloat()) == col && roundf(point.getY().toFloat()) == 25 - row)
					arr[row][col] = 'P';
				else if (roundf(point2.getX().toFloat()) == col && roundf(point2.getY().toFloat()) == 25 - row)
					arr[row][col] = 'Q';
			}
		}
	}
	for (int row = 0; row < 25; row++)
	{
		for (int col = 0; col < 25; col++)
			std::cout << arr[row][col];
		std::cout << std::endl;
	}
	std::cout << std::endl;
	
	std::cout << "Point1 (" << point.getX() << ", " << point.getY() << ") - " << "In triangle: " << bsp(a, b, c, point) << std::endl;
	std::cout << "Point2 (" << point2.getX() << ", " << point2.getY() << ") - " << "In triangle: " << bsp(a, b, c, point2) << std::endl;
	return (0);
}
