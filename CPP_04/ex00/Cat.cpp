/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 02:46:11 by yusman            #+#    #+#             */
/*   Updated: 2024/04/04 22:37:28 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout  << "\033[1;31m[CAT] Default Constructor Called \033[0m" << std::endl;
}

Cat::~Cat()
{
	std::cout  << "[CAT] Destructor Called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meow" << std::endl;
}
