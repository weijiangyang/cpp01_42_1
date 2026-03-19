/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 12:03:05 by weiyang           #+#    #+#             */
/*   Updated: 2026/03/19 12:03:06 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "harl is created." << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "harl is destroyed." << std::endl;
}

void Harl::_debug(void) const
{
	std::cout << "DEBUG: I love having extra bacon for my burger!" << std::endl;
}

void Harl::_info(void) const
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money!" << std::endl;
}

void Harl::_warning(void) const
{
	std::cout << "WARNING: I think I deserve extra bacon for free!" << std::endl;
}

void Harl::_error(void) const
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}


void Harl::complain(std::string level) const
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4)
	{
		if (level == levels[i])
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			this->_debug();
		case 1:
			std::cout << "[ INFO ]" << std::endl;
			this->_info();
		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			this->_warning();
		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			this->_error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}



