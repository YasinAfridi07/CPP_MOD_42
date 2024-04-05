#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain &object);
		Brain &operator=(const Brain &rhs);
};

#endif
