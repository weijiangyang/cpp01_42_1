/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 10:59:38 by weiyang           #+#    #+#             */
/*   Updated: 2026/03/19 10:59:39 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string weaponType)
{
	this->_type = weaponType;
}

Weapon::~Weapon()
{
	std::cout << this->getType() << " is destroyed." << std::endl;
}

std::string Weapon::getType() const
{
	return this->_type;
}

void Weapon::setType(std::string typeName)
{
	this->_type = typeName;
}