/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 01:28:29 by yusman            #+#    #+#             */
/*   Updated: 2024/04/05 01:35:47 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor Called" << std::endl;
}
Brain::~Brain()
{
	std::cout << "Brain Destructor Called" << std::endl;
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
