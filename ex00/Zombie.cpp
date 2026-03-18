#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(void)
{}

Zombie :: Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << " is destroyed!" << std:: endl;
}

void Zombie :: announce() const
{
    std::cout << this->name <<  " : BraiiiiiiinnnzzzZ..." << std::endl;
}
