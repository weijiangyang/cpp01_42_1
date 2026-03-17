#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string weaponType)
{
	this->type = weaponType;
}

Weapon::~Weapon()
{
	std::cout << this->getType() << "is destroyed." << std::endl;
}

std::string Weapon::getType() const
{
	return this->type;
}

void Weapon::setType(std::string typeName)
{
	this->type = typeName;
}