/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 06:40:32 by yusman            #+#    #+#             */
/*   Updated: 2024/04/04 05:48:25 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	std::cout << this->_type << "[Wrong Cat] Default Constructor Called" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << this->_type << "[Wrong Cat] Destructor Called" << std::endl;
}

void	WrongCat::makeSound( void ) const
{
	std::cout << "meow!" << std::endl;
}
