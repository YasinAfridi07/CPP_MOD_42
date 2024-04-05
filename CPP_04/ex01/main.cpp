/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 03:58:04 by yusman            #+#    #+#             */
/*   Updated: 2024/04/05 23:17:43 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;
	std::cout << "---------------------------------" << std::endl;
	std::cout << "---------------------------------" << std::endl;

	int size = 1;
	Animal* animals[size];
	for (int i = 0; i < size + 1; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << "---------------------------------" << std::endl;
	std::cout << "---------------------------------" << std::endl;

	for (int i = size; i > -1; i--)
		delete animals[i];

	std::cout << "---------------------" << std::endl;


    // const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    // int z = 0;
	// while (z < 4)
	// {
    //     delete animals[z];
	// 	z++;
    // }

    return 0;
}
