#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *z[N];
    int i = 0;
    while (i < N)
    {
        z[i] = newZombie(name);
        i++;
    }
    return (z[0]);
}
