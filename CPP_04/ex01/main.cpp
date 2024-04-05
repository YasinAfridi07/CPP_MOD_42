/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 03:58:04 by yusman            #+#    #+#             */
/*   Updated: 2024/04/05 04:38:42 by yusman           ###   ########.fr       */
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

	Dog basic;
    {
        Dog tmp = basic;
    }

    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    int z = 0;
	while (z < 4)
	{
        delete animals[z];
		i++;
    }

    return 0;
}
