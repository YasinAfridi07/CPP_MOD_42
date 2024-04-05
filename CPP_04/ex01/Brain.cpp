/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 01:28:29 by yusman            #+#    #+#             */
/*   Updated: 2024/04/05 21:25:03 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "\033[1;32m Brain Constructor Called \033[0m" << std::endl;
}
Brain::~Brain()
{
	std::cout << "\033[1;32m Brain Destructor Called  \033[0m" << std::endl;
}

Brain::Brain(const Brain &object)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	*this = object;
}

Brain& Brain::operator=(const Brain &rhs )
{
	std::cout << "Brain Copy assignment operator Called" << std::endl;
	int i = 0;
	if(this != &rhs)
	{
		while (i < 100)
		{
			this->_ideas[i] = rhs._ideas[i];
			i++;
		}
	}
	return *this;
}
