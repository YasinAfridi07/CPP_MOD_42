/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 02:46:26 by yusman            #+#    #+#             */
/*   Updated: 2024/04/05 00:14:49 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	std::cout <<"----------1\n";
	const Animal* meta = new Animal();
	std::cout <<"----------2\n";
	const Animal* j = new Dog(); // subclass
	std::cout <<"----------3\n";
	const Animal* i = new Cat();
	std::cout <<"----------4\n";

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;

	std::cout <<"----------5\n";
	i->makeSound(); //will output the cat sound! j->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << "---------6\n";

	delete meta;
	std::cout << "---------7\n";
	delete j;
	std::cout << "---------8\n";
	delete i;




	//--------------------------------------------------//
	// std::cout << "Test2" << std::endl;


	// const WrongAnimal *wrong = new WrongAnimal();
    // const WrongAnimal *wrongCat = new WrongCat();

    // std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
    // std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
    // wrong->makeSound();
    // wrongCat->makeSound();

    // delete  wrong;
    // delete  wrongCat;

	return 0;

}
