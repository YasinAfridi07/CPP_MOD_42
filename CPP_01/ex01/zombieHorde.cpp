/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 19:31:19 by yusman            #+#    #+#             */
/*   Updated: 2024/03/06 19:20:38 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N < 0)
		return (NULL);
	Zombie *zombiee = new Zombie[N];

	int i = 0;
	while (i < N)
	{
		zombiee[i].setName(name);
		zombiee[i].announce();
		i++;
	}

	return(zombiee);
}
