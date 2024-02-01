/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:20:36 by oroy              #+#    #+#             */
/*   Updated: 2024/01/31 19:59:36 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
	return ;
}

Point::Point(float const f1, float const f2) : x(f1), y(f2)
{
	return ;
}

Point::Point(Point const &src)
{
	*this = src;
	return ;
}

Point::~Point(void)
{
	return ;
}

Point const	&Point::operator=(Point const &rhs)
{
	// Comprend pas
	return (*this);
}

Fixed const	&Point::getX(void) const
{
	return (x);
}

Fixed const	&Point::getY(void) const
{
	return (y);
}
