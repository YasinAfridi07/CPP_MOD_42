/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 05:37:10 by yusman            #+#    #+#             */
/*   Updated: 2024/03/31 00:59:23 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

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


		bool	operator>(const Fixed &rhs) const;
		bool	operator<(const Fixed &rhs) const;
		bool	operator>=(const Fixed &rhs) const;
		bool	operator<=(const Fixed &rhs) const;
		bool	operator==(const Fixed &rhs) const;
		bool	operator!=(const Fixed &rhs) const;

		Fixed	operator+(const Fixed &rhs) const;
		Fixed	operator-(const Fixed &rhs) const;
		Fixed	operator*(const Fixed &rhs) const;
		Fixed	operator/(const Fixed &rhs) const;

		Fixed	&operator++(); // pre
		Fixed	&operator--(); // pre
		Fixed	operator++(int); // post
		Fixed	operator--(int); // post

		static Fixed			&min(Fixed &a, Fixed &b);
		static const Fixed		&min(const Fixed &a, const Fixed &b);
		static Fixed			&max(Fixed &a, Fixed &b);
		static const Fixed		&max(const Fixed &a, const Fixed &b);

};

std::ostream &operator<<(std::ostream &out, Fixed const &rhs);

#endif
