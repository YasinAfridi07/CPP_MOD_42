/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 07:38:05 by yusman            #+#    #+#             */
/*   Updated: 2024/04/01 07:59:36 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "\033[1;31m [ScavTrap] Default Constructor Called \033[0m" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "\033[1;31m [ScavTrap] Destructor Called \033[0m" << std::endl;
}

void ScavTrap::guadGate()
{
	std::cout << "\033[1;31m [ScavTrap] is now in Gate keeper mode. \033[0m" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "\033[1;31m [Scavtrap] Ran out of Energy Points \033[0m" << std::endl;
	}
	else
	{
		std::cout << "\033[1;31m [ScavTrap] " << this->_name <<" attacks " << target << " causing " << this->_attackDamage  << " points of damage! \033[0m"<< std::endl;
		this->_energyPoints = this->_energyPoints - 1;
	}
}
