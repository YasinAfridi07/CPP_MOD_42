/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 01:23:28 by yusman            #+#    #+#             */
/*   Updated: 2024/04/05 04:40:49 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(std::string type);

		virtual ~Animal();
		Animal(const Animal &object);
		Animal &operator=(const Animal &rhs);


		virtual void	makeSound() const;

		std::string		getType() const;
};


#endif

