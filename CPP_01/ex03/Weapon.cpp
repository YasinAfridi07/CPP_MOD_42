/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:57:50 by yusman            #+#    #+#             */
/*   Updated: 2024/03/07 17:38:02 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string Type): _Type(Type)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string type)
{
	this->_Type = type;
}

const std::string &Weapon::getType() const
{
	return this->_Type;
}
