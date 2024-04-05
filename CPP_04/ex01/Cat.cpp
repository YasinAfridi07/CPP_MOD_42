/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 03:02:54 by yusman            #+#    #+#             */
/*   Updated: 2024/04/05 07:04:34 by yusman           ###   ########.fr       */
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