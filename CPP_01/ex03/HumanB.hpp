/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:58:13 by yusman            #+#    #+#             */
/*   Updated: 2024/03/07 16:14:43 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>

class HumanB
{
	private:
		std::string _name;
		std::string _Weapon;
	public:
		HumanB();
		~HumanB();
		void attack();
};

#endif
