/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 10:23:19 by weiyang           #+#    #+#             */
/*   Updated: 2026/03/19 12:13:08 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
  	Zombie *zombieOnHeap = newZombie("zombieOnHeap");
	zombieOnHeap->announce();
	delete zombieOnHeap;
 	return (0);
}