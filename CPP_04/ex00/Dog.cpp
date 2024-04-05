/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 02:46:20 by yusman            #+#    #+#             */
/*   Updated: 2024/04/05 22:44:38 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal( "Dog" )
{
	std::cout  << "[DOG] Default Constructor Called" << std::endl;
}

Dog::~Dog()
{
	std::cout  << "[DOG] Destructor Called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "bark bark!" << std::endl;
}

Dog::Dog(Dog const &object): Animal::Animal(object)
{
	std::cout << "Dog Copy Constructor called" << std::endl;
	*this = object;
}

Dog & Dog::operator=(Dog const &rhs)
{
	std::cout << "Dog Copy Assignment Operator called" << std::endl;
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

