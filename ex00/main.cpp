#include "Zombie.hpp"
#include <sstream>

int main()
{
	int i = 0;
	while (i < 10)
	{
		std::string name;

		std::stringstream ss;
		ss << i;
		name = "Zombie" + ss.str();
		randomChump(name);

		i++;
	}
	return (0);
}