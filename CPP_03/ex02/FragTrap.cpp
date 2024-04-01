/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 07:38:14 by yusman            #+#    #+#             */
/*   Updated: 2024/04/01 08:08:17 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "\033[1;33m [FragTrap] Default Constructor Called \033[0m" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "\033[1;33m [FrapTrap] Deconstructor Called \033[0m" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "\033[1;33m [FragTrap] MY MANN GIVE ME A HIGH FIVEEEE!!! \033[0m" << std::endl;
}
