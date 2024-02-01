/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oroy <oroy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:03:14 by oroy              #+#    #+#             */
/*   Updated: 2024/01/31 19:15:29 by oroy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Constructors

Fixed::Fixed(void) : _n(0)
{
	return ;
}

Fixed::Fixed(int const n)
{
	setRawBits(n * (1 << _fracbits));
	return ;
}

Fixed::Fixed(float const f)
{
	setRawBits(roundf(f * (1 << _fracbits)));
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

// Getter - Setter

int	Fixed::getRawBits(void) const
{
	return (_n);
}

void	Fixed::setRawBits(int const raw)
{
	_n = raw;
}

// Conversions

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(getRawBits()) / static_cast<float>(1 << _fracbits));
}

int	Fixed::toInt(void) const
{
	return (getRawBits() / (1 << _fracbits));
}

// Comparison Operators

Fixed const	&Fixed::operator=(Fixed const &rhs)
{
	setRawBits(rhs.getRawBits());
	return *this;
}

Fixed const	&Fixed::operator>(Fixed const &rhs) const
{
	if (getRawBits() > rhs.getRawBits())
		return (*this);
	return (rhs);
}

Fixed const	&Fixed::operator<(Fixed const &rhs) const
{
	if (getRawBits() < rhs.getRawBits())
		return (*this);
	return (rhs);
}

Fixed const	&Fixed::operator>=(Fixed const &rhs) const
{
	if (getRawBits() >= rhs.getRawBits())
		return (*this);
	return (rhs);
}

Fixed const	&Fixed::operator<=(Fixed const &rhs) const
{
	if (getRawBits() <= rhs.getRawBits())
		return (*this);
	return (rhs);
}

Fixed const	&Fixed::operator==(Fixed const &rhs) const
{
	if (getRawBits() == rhs.getRawBits())
		return (*this);
	return (rhs);
}

Fixed const	&Fixed::operator!=(Fixed const &rhs) const
{
	if (getRawBits() != rhs.getRawBits())
		return (*this);
	return (rhs);
}

// Arithmetic Operators

Fixed const	&Fixed::operator+(Fixed const &rhs)
{
	setRawBits(getRawBits() + rhs.getRawBits());
	return (*this);
}

Fixed const	&Fixed::operator-(Fixed const &rhs)
{
	setRawBits(getRawBits() - rhs.getRawBits());
	return (*this);
}

Fixed const	&Fixed::operator*(Fixed const &rhs)
{
	setRawBits(roundf((toFloat() * rhs.toFloat()) * (1 << _fracbits)));
	return (*this);
}

Fixed const	&Fixed::operator/(Fixed const &rhs)
{
	setRawBits(roundf((toFloat() / rhs.toFloat()) * (1 << _fracbits)));
	return (*this);
}

// ++ and -- operators

Fixed const	&Fixed::operator++()
{
	setRawBits(getRawBits() + 1);
	return (*this);
}

Fixed const	Fixed::operator++(int)
{
	Fixed	temp = *this;
	++(*this);
	return (temp);
}

Fixed const	&Fixed::operator--()
{
	setRawBits(getRawBits() - 1);
	return (*this);
}

Fixed const	Fixed::operator--(int)
{
	Fixed	temp = *this;
	--(*this);
	return (temp);
}

// Min - Max

Fixed const	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a < b);
}

Fixed const	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b);
}

// Outside Class

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}
