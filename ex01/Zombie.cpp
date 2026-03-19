/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 10:30:20 by weiyang           #+#    #+#             */
/*   Updated: 2026/03/19 10:30:21 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void)
{
	this->_name = "default name";
}

Zombie::Zombie(std::string name):_name(name)
{
    //this->_name = name;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " is destroyed!" << std:: endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string Zombie::getName(void) const
{
	return this->_name;
}


void Zombie :: announce() const
{
    std::cout << this->_name <<  " : BraiiiiiiinnnzzzZ..." << std::endl;
}

