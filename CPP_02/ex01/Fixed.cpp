/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 04:12:48 by yusman            #+#    #+#             */
/*   Updated: 2024/03/30 05:32:41 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(): _fixed_point(0)
{
	std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(num << this->_fractional_bits);
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(num *(1 << this->_fractional_bits)));
}

Fixed::Fixed(const Fixed &object)
{
	std::cout << "Copy Constructor Called" << std::endl;
	*this = object;
}


float Fixed::toFloat( void ) const
{
	return(roundf(this->_fixed_point) / (1 << this->_fractional_bits));
}

int Fixed::toInt(void) const
{
	return((this->_fixed_point >> this->_fractional_bits));
}

std::ostream & operator<< (std::ostream &out, Fixed const &rhs)
{
	out << rhs.toFloat();
	return (out);
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy Assignment Operator called" << std::endl;
	if (this != &rhs)
		this->_fixed_point = rhs.getRawBits();
	return (*this);
}


Fixed::~Fixed()
{
	std::cout << "Destructor Called" << std::endl;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_point = raw;
}

int		Fixed::getRawBits() const
{
	return (this->_fixed_point);
}
