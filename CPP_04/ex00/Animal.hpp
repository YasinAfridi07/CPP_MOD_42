/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 02:34:36 by yusman            #+#    #+#             */
/*   Updated: 2024/04/04 05:43:32 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

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


		virtual void makeSound() const;

		std::string getType() const;
};


#endif

