/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 02:46:20 by yusman            #+#    #+#             */
/*   Updated: 2024/04/03 06:43:33 by yusman           ###   ########.fr       */
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

