/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 07:38:11 by yusman            #+#    #+#             */
/*   Updated: 2024/05/08 02:47:26 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;


	public:
		ClapTrap(std::string name);
		~ClapTrap();

		ClapTrap(const ClapTrap &object);
		ClapTrap &operator=(const ClapTrap &rhs);

		void attac











			void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};


#endif
