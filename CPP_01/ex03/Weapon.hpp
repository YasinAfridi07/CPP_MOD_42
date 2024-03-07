/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:55:55 by yusman            #+#    #+#             */
/*   Updated: 2024/03/07 20:38:47 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include "HumanA.hpp"
#include "HumanA.hpp"

class Weapon
{
private:
	std::string _Type;
public:
	Weapon();
	Weapon(std::string Type);
	~Weapon();
	const std::string &getType(void) const; //
	void setType(std::string type);
};
#endif
