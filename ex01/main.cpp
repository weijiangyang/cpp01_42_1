#include "Zombie.hpp"

int main()
{
    Zombie *z;
    
    z = zombieHorde(10, "zombie");
    int i = 0;
    while (i < 10)
    {
        z[i].announce();
        i++;
    }

    delete [] z;
    return (0);
}
