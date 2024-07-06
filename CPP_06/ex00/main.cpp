/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 05:08:48 by yusman            #+#    #+#             */
/*   Updated: 2024/07/06 05:25:25 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
//#include "Serializer.hpp"


int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./convert <value>" << std::endl;
        return EXIT_FAILURE;
    }
    try
    {
        ScalarConverter::convert(av[1]); 
    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return EXIT_SUCCESS;
}

//Implement a class ScalarConverter with a static method convert to convert a string
//representation of a C++ literal to char, int, float, and double.

//Handle conversion for various types and special values, such as nan and inf.
