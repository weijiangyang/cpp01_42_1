#include "Zombie.hpp"
#include <sstream>

int main()
{
	int i = 0;
    Zombie **zombieOnHeap = new Zombie*[10];
	while (i < 10)
	{
		std::string name;
		std::stringstream ss;
		ss << i;
		name = "Zombie" + ss.str();
		randomChump(name);

		i++;
	}
    i = 0;
    while (i < 10)
    {
        std::string name;
		std::stringstream ss;
		ss << i;
		name = "Zombie" + ss.str();
        zombieOnHeap[i] = newZombie(name);
        zombieOnHeap[i]->announce();
        i++;
    }
    i = 0;
    while (i < 10)
    {
        delete zombieOnHeap[i];
        i++;
    }
    delete [] zombieOnHeap;
	return (0);
}