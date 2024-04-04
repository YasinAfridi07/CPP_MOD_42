/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 02:46:16 by yusman            #+#    #+#             */
/*   Updated: 2024/04/05 00:17:19 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(): _type("Animel")
{
	std::cout << this->_type << " Default Constructor Called" << std::endl;
}


Animal::Animal(std::string type): _type(type)
{
	std::cout << "\033[1;31m[Animal] "  << this->_type << " Constructor Called \033[0m" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}



Animal::Animal( const Animal &object )
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = object;
}

Animal& Animal::operator=( const Animal& rhs )
{
	std::cout << "Animal Assignment Operator Called" << std::endl;
	if ( this != &rhs ) {
		this->_type = rhs._type;
	}
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "Animal Make Sound Called" << std::endl;
}

std::string		Animal::getType(void) const
{
	return this->_type;
}
