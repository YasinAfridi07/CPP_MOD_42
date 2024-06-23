/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 07:38:18 by yusman            #+#    #+#             */
/*   Updated: 2024/05/08 02:46:43 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap a("Yasin");

	a.attack("Wolf");
	a.takeDamage(70);
	a.beRepaired(50);
	a.highFivesGuys();

	return(0);

}
