#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP 

#include <string>

class Zombie
{
    private:
        std::string name;
    
    public:
	Zombie(void);
        Zombie(std::string name);
        ~Zombie();
	void setName(std::string name);
	std::string getName(void) const;
        void announce() const;
        void randomChump();
};

Zombie *zombieHorde(int N, std::string name);
Zombie *newZombie(std::string name);

#endif
