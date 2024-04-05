#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain	*_brain;
public:
	Cat();
	~Cat();
	Cat(const Cat &object);
	Cat& operator=(const Cat &rhs);


	void	makeSound() const;
};

#endif
