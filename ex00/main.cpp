#include "Zombie.hpp"

int main()
{
    int i = 0;
    while (i < 10)
    {
        std::string name;
        
        
        name = "Zombie" + std::to_string(i);
        randomChump(name);
        
        i++;
    }
    return (0);
}