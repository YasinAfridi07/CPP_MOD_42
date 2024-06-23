/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 19:39:14 by yusman            #+#    #+#             */
/*   Updated: 2024/06/23 20:23:52 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat be("German Khan ", 500);
	std::cout << be << std::endl;
	std::cout << "--------------------" << std::endl;
	Bureaucrat b("Faraz Khan", 5);
	std::cout << b << std::endl;
	std::cout << "--------------------" << std::endl;
	b.gradeIncreament();
	std::cout << b << std::endl;
	std::cout << "--------------------" << std::endl;
	b.gradeDecreament();
	std::cout << b << std::endl;
	std::cout << "--------------------" << std::endl;

	return 0;
}
