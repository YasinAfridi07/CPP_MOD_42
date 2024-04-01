/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:19:32 by yusman            #+#    #+#             */
/*   Updated: 2024/04/01 08:09:18 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name) , _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &object)
{
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
	*this = object;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &rhs)
{
	std::cout << "Copy assigment operator Called" << std::endl;
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
		std::cout << "Ran out of Energy Points" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name <<" attacks " << target << " causing " << this->_attackDamage  << " points of damage!"<< std::endl;
		this->_energyPoints = this->_energyPoints - 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name <<" Has Taken Damage by: " << amount << std::endl;

	this->_hitPoints = this->_hitPoints - amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->_energyPoints <= 0)
	{
		std::cout << "Ran out of Energy Points" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " Repaired by: " << amount << std::endl;
		this->_energyPoints = this->_energyPoints - 1;
		this->_hitPoints  = this->_hitPoints  + amount;
	}
}


