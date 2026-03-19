/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 10:23:42 by weiyang           #+#    #+#             */
/*   Updated: 2026/03/19 10:23:43 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void)
{}

Zombie :: Zombie(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " is destroyed!" << std:: endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

void Zombie :: announce() const
{
    std::cout << this->_name <<  " : BraiiiiiiinnnzzzZ..." << std::endl;
}
