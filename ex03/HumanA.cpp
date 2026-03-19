/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 10:59:28 by weiyang           #+#    #+#             */
/*   Updated: 2026/03/19 10:59:29 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon)
    :  _weapon(weapon),_name(name)
{
}

HumanA::~HumanA()
{
    std::cout << this->_name << " is destroyed. " << std::endl;
}

void HumanA::attack()const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() <<std::endl;
}