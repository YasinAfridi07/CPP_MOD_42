/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:52:02 by yusman            #+#    #+#             */
/*   Updated: 2024/03/06 19:15:00 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << &str << std::endl; // print memory address
	std::cout << stringPTR << std::endl; // memory address of string PTR
	std::cout << &stringREF << std::endl; // memory address of string REF

	std::cout << str << std::endl; // value of str
	std::cout << *stringPTR << std::endl; // value pointed to by stringPTR
	std::cout << stringREF << std::endl; // value pointed to by stringREF
}
