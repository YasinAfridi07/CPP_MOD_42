/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 03:08:27 by yusman            #+#    #+#             */
/*   Updated: 2024/04/05 22:52:43 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal( "Dog" )
{
	std::cout  << "[DOG] Default Constructor Called" << std::endl;
	try
	{
		this->_brain = new Brain();
	}
	catch(const std::bad_alloc& e)
	{
		std::cout << " Error, Memory Allocation Failed "<< e.what() << std::endl;
	}
}

Dog::~Dog()
{

	std::cout  << "[DOG] Destructor Called" << std::endl;
	delete this->_brain;

}

void	Dog::makeSound() const
{
	std::cout << "bark bark!" << std::endl;
}

Dog::Dog( const Dog &object)
{
	*this = object;
}

Dog& Dog::operator=( const Dog  &rhs )
{
	std::cout << "Dog copy assignment operator called." << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_brain = new Brain( *rhs._brain );
	}
	return *this;
}
