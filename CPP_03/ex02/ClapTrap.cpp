/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 07:38:09 by yusman            #+#    #+#             */
/*   Updated: 2024/04/01 08:09:52 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name) , _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "\033[1;32m [ClapTrap] Default Constructor Called \033[0m" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[1;32m [ClapTrap] Destructor Called \033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &object)
{
	std::cout << "\033[1;32m [ClapTrap] Copy Constructor Called \033[0m" << std::endl;
	*this = object;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "\033[1;32m [ClapTrap] Copy assigment operator Called \033[0m" << std::endl;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}


void ClapTrap::attack(const std::string& target)
{
	if(this->_energyPoints <= 0)
	{
		std::cout << "\033 [Claptrap] Ran out of Energy Points \033[0m" << std::endl;
	}
	else
	{
		std::cout << "\033[1;32m [ClapTrap] " << this->_name <<" attacks " << target << " causing " << this->_attackDamage  << " points of damage! \033[0m"<< std::endl;
		this->_energyPoints = this->_energyPoints - 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "\033[1;32m [ClapTrap] " << this->_name <<" Has Taken Damage by: \033[0m" << amount << std::endl;

	this->_hitPoints = this->_hitPoints - amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_energyPoints <= 0)
	{
		std::cout << "\033[1;32m [ClapTrap] Ran out of Energy Points \033[0m" << std::endl;
	}
	else
	{
		std::cout << "\033[1;32m [ClapTrap] " << this->_name << " Repaired by: \033[0m" << amount << std::endl;
		this->_energyPoints = this->_energyPoints - 1;
		this->_hitPoints  = this->_hitPoints  + amount;
	}
}
