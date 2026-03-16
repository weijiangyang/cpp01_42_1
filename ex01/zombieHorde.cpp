#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *z = new Zombie[N];

    Zombie *a = new Zombie("lilou");

    int i = 0;
    while (i < N)
    {
	z[i].setName(name);
        i++;
    }

    (void)a;
    delete a;
    return (z);
}
