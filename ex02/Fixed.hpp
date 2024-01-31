/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:03:12 by oroy              #+#    #+#             */
/*   Updated: 2024/01/30 22:36:04 by olivierroy       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <sstream>
# include <string>
# include <cmath>

class Fixed
{
private:

	int					_n;
	static int const	_fracbits = 8;

public:

	Fixed(void);
	Fixed(int const n);
	Fixed(float const f);
	Fixed(Fixed const &src);
	~Fixed();

	Fixed const	&operator=(Fixed const &rhs);
	
	Fixed const	&operator>(Fixed const &rhs) const;
	Fixed const	&operator<(Fixed const &rhs) const;
	Fixed const	&operator>=(Fixed const &rhs) const;
	Fixed const	&operator<=(Fixed const &rhs) const;
	Fixed const	&operator==(Fixed const &rhs) const;
	Fixed const	&operator!=(Fixed const &rhs) const;

	Fixed const	&operator+(Fixed const &rhs);
	Fixed const	&operator-(Fixed const &rhs);
	Fixed const	&operator*(Fixed const &rhs);
	Fixed const	&operator/(Fixed const &rhs);

	Fixed const	&operator++();
	Fixed const	operator++(int);
	Fixed const	&operator--();
	Fixed const	operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;
	
	static Fixed const	&min(Fixed &a, Fixed &b);
	static Fixed const	&min(Fixed const &a, Fixed const &b);
	static Fixed const	&max(Fixed &a, Fixed &b);
	static Fixed const	&max(Fixed const &a, Fixed const &b);

};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif
