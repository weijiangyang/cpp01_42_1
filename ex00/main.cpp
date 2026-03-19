/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 10:23:19 by weiyang           #+#    #+#             */
/*   Updated: 2026/03/19 10:23:28 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

int main()
{
	int i = 0;
    Zombie *zombieOnHeap = new Zombie[10];
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
        zombieOnHeap[i].setName(name);
        zombieOnHeap[i].announce();
		i++;
    }
    delete [] zombieOnHeap;
	return (0);
}