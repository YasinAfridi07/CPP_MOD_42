/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 02:46:11 by yusman            #+#    #+#             */
/*   Updated: 2024/04/03 06:23:52 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() : Animal("cat")
{
	std::cout  << "[CAT] Default Constructor Called" << std::endl;
}

Cat::~Cat()
{
	std::cout  << "[CAT] Destructor Called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
