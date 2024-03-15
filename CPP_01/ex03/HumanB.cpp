/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:00:21 by yusman            #+#    #+#             */
/*   Updated: 2024/03/15 16:54:43 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	this->_WeaponB = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &B)
{
	this->_WeaponB = &B;
}

void	HumanB::attack()
{
	if (_WeaponB)
		std::cout << this->_name << " attacks with their "
				<< this->_WeaponB->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapon to attack." << std::endl;
}
