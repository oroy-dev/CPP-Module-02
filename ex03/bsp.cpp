/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:19:37 by oroy              #+#    #+#             */
/*   Updated: 2024/02/01 16:43:29 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	sign(Point const &p1, Point const &p2, Point const &p3)
{
	Fixed	result;

	result = (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
	return (result.toFloat());
}

bool	bsp(Point const &a, Point const &b, Point const &c, Point const &point)
{
	float	d1, d2, d3;
	bool	has_neg, has_pos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	std::cout << "d1 = " << d1 << " d2 = " << d2 << " d3 = " << d3 << std::endl;

	has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(has_neg && has_pos) && d1 && d2 && d3;
}
