/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yusman <yusman@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:58:47 by yusman            #+#    #+#             */
/*   Updated: 2024/03/07 20:47:36 by yusman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>

class HumanA
{
private:
	std::string _name;
	std::string _Weapon;
public:
	HumanA(std::string name, std::string weapon);
	~HumanA();
	void attack();
};


#endif
