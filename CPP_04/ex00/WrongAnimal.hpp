/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 06:28:35 by yusman            #+#    #+#             */
/*   Updated: 2024/04/04 05:30:41 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string _type;
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		~WrongAnimal();

		WrongAnimal(const WrongAnimal &object);
		WrongAnimal &operator= (const WrongAnimal &rhs);

		void			makeSound() const;
		std::string		getType() const;
};

#endif
