#include "Zombie.hpp"

int main()
{
    Zombie *z[10];
    
    z[0] = zombieHorde(10, "zombie");
    int i = 0;
    while (i < 10)
    {
        z[i]->announce();
        i++;
    }
    return (0);
}