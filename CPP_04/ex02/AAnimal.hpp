#ifndef AANIMAL_HPP
#define AANIMAL_HPP

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


		virtual void	makeSound() const = 0;
		std::string		getType() const;
};


#endif

