#include "HumanA.hpp"
#include "Weapon.hpp"

#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon)
    :  _weapon(weapon),_name(name)
{
}

HumanA::~HumanA()
{
    std::cout << this->_weapon.getType() << " is destroyed. " << std::endl;
}

void HumanA::attack()const
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() <<std::endl;
}