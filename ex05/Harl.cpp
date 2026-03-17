#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "harl is created." << std::endl;
}

Harl::~Harl()
{
	std::cout << "harl is destroyed." << std::endl;
}

void Harl::debug(void) const
{
	std::cout << "DEBUG: I love having extra bacon for my burger!" << std::endl;
}

void Harl::info(void) const
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money!" << std::endl;
}

void Harl::warning(void) const
{
	std::cout << "WARNING: I think I deserve extra bacon for free!" << std::endl;
}

void Harl::error(void) const
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) const
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcs[4])(void) const = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	int i = 0;
	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*funcs[i])();
			return ;
		}
		i++;		
	}
	std::cout << "Unknown level!" << std::endl;
}

