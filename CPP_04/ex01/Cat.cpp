/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 03:02:54 by yusman            #+#    #+#             */
/*   Updated: 2024/04/05 22:47:46 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout  << "[CAT] Default Constructor Called" << std::endl;
	try
	{
		this->_brain = new Brain();
	}
	catch(const std::bad_alloc& e)
	{
		std::cout << "Error, Memory Allocation Failed "<< e.what() << std::endl;
	}
}

Cat::~Cat()
{
	std::cout  << "[CAT] Destructor Called" << std::endl;
	delete	this->_brain;
}

void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}

Cat::Cat( const Cat &object)
{
	*this = object;
}

Cat& Cat::operator=( const Cat &rhs)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
		this->_brain = new Brain( *rhs._brain );
	}
	return *this;
}
