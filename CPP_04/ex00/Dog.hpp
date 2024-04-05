/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 02:46:22 by yusman            #+#    #+#             */
/*   Updated: 2024/04/05 22:44:27 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	private:
	public:
		Dog();
		~Dog();
		Dog(Dog const &object);
		Dog &operator=(Dog const &rhs);

		void	makeSound() const;

};

#endif
