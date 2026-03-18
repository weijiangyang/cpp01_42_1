#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void)
{
	//this->name = "default name";
}

Zombie::Zombie(std::string name):name(name)
{
    //this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << " is destroyed!" << std:: endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

std::string Zombie::getName(void) const
{
	return this->name;
}


void Zombie :: announce() const
{
    std::cout << this->name <<  " : BraiiiiiiinnnzzzZ..." << std::endl;
}

