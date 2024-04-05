/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 01:24:21 by yusman            #+#    #+#             */
/*   Updated: 2024/04/05 01:28:16 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
