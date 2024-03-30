/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 04:12:45 by yusman            #+#    #+#             */
/*   Updated: 2024/03/30 05:33:12 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed
{
	private:
		int					_fixed_point;
		static const int	_fractional_bits = 8;
	public:
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &object);
		Fixed	&operator= (Fixed const &rhs);
		~Fixed();

		float toFloat( void ) const;
		int toInt(void) const;

		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream &operator<<(std::ostream &out, Fixed const &rhs);

#endif
