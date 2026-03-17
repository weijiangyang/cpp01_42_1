#include "HumanB.hpp"
#include "Weapon.hpp"

#include <iostream>

HumanB::HumanB(std::string name) :_weapon(NULL), _name(name)
{
}

HumanB::~HumanB()
{
    std::cout << this->_weapon->getType() << " is destroyed. " << std::endl;
}

void HumanB::setWeapon(Weapon* weapon)
{
	this->_weapon = weapon;
}


void HumanB::attack()const
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}