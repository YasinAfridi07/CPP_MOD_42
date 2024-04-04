/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 06:28:37 by yusman            #+#    #+#             */
/*   Updated: 2024/04/04 05:48:54 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): _type("WrongAnimel")
{
	std::cout << "[Wrong Animal] Deafult Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):	_type(type)
{
	std::cout << "WrongAnimal " << this->_type << " Constructor Called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[Wrong Animal] Destructor Caled" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& src )
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs )
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	if ( this != &rhs )
	{
		this->_type = rhs._type;
	}
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal makeSound Called" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return(this->_type);
}
