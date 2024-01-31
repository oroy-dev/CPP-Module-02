/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olivierroy <olivierroy@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:03:12 by oroy              #+#    #+#             */
/*   Updated: 2024/01/30 19:27:04 by olivierroy       ###   ########.fr       */
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

	Fixed	&operator=(Fixed const &rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;
	
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);

#endif
