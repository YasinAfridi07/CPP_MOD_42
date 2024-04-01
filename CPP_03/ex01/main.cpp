/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 23:01:23 by yusman            #+#    #+#             */
/*   Updated: 2024/04/01 08:04:22 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("Yasin");

	a.attack("Farcana");
	a.takeDamage(100);
	a.beRepaired(5);
	a.guadGate();
	return(0);
}
