/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 18:20:36 by oroy              #+#    #+#             */
/*   Updated: 2024/02/01 15:07:58 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
	return ;
}

Point::Point(float const f1, float const f2) : x(Fixed(f1)), y(Fixed(f2))
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

Point	&Point::operator=(Point const &rhs)
{
	(void) rhs;
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

float Point::getFX(void) const
{
	return (x.toFloat());
}

float Point::getFY(void) const
{
	return (y.toFloat());
}
