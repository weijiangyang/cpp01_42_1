/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:57:11 by weiyang           #+#    #+#             */
/*   Updated: 2026/03/19 11:57:12 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "harl is created." << std::endl;
}

Harl::~Harl()
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
	void (Harl::*funcs[4])(void) const = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
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
