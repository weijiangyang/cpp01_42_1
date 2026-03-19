/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 10:59:33 by weiyang           #+#    #+#             */
/*   Updated: 2026/03/19 10:59:34 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

#include <iostream>

HumanB::HumanB(std::string name) :_weapon(NULL), _name(name)
{
}

HumanB::~HumanB()
{
    std::cout << this->_name << " is destroyed. " << std::endl;
}

void HumanB::setWeapon(Weapon* weapon)
{
	this->_weapon = weapon;
}


void HumanB::attack()const
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}