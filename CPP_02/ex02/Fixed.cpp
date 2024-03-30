/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 05:37:13 by yusman            #+#    #+#             */
/*   Updated: 2024/03/31 01:02:48 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixed_point(0)
{
}
Fixed::Fixed(const int num)
{
	this->setRawBits(num << this->_fractional_bits);
}

Fixed::Fixed(const float num)
{
	this->setRawBits(roundf(num *(1 << this->_fractional_bits)));
}

Fixed::Fixed(const Fixed &object)
{
	*this = object;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->_fixed_point = rhs.getRawBits();
	return (*this);
}

std::ostream & operator<< (std::ostream &out, Fixed const &rhs)
{
	out << rhs.toFloat();
	return (out);
}

float Fixed::toFloat( void ) const
{
	return(roundf(this->_fixed_point) / (1 << this->_fractional_bits));
}

int Fixed::toInt(void) const
{
	return((this->_fixed_point >> this->_fractional_bits));
}


Fixed::~Fixed()
{
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
}

int		Fixed::getRawBits() const
{
	return (this->_fixed_point);
}

//-------------------------------------------//

bool	Fixed::operator>(const Fixed &rhs) const
{
	return (this->_fixed_point > rhs.getRawBits());
}
bool	Fixed::operator<(const Fixed &rhs) const
{
	return (this->_fixed_point < rhs.getRawBits());
}
bool	Fixed::operator>=(const Fixed &rhs) const
{
	return (this->_fixed_point >= rhs.getRawBits());
}
bool	Fixed::operator<=(const Fixed &rhs) const
{
	return (this->_fixed_point <= rhs.getRawBits());
}
bool	Fixed::operator==(const Fixed &rhs) const
{
	return (this->_fixed_point == rhs.getRawBits());
}
bool	Fixed::operator!=(const Fixed &rhs) const
{
	return (this->_fixed_point != rhs.getRawBits());
}
//---------------------------------------------//

Fixed	Fixed::operator+(const Fixed &rhs) const
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed	Fixed::operator-(const Fixed &rhs) const
{
	return (this->toFloat() - rhs.toFloat());
}

Fixed	Fixed::operator*(const Fixed &rhs) const
{
	return (this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/(const Fixed &rhs) const
{
	return (this->toFloat() / rhs.toFloat());
}

//---------------------------------------------//

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	this->operator++();
	return(tmp);
}

Fixed & Fixed::operator++()
{
	this->_fixed_point = this->_fixed_point + 1;
	return(*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->operator--();
	return (tmp);
}

Fixed & Fixed::operator--()
{
	this->_fixed_point = this->_fixed_point - 1;
	return (*this);
}

//-------------------------------------------------//

Fixed & Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed & Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed & Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}
