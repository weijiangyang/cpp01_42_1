/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 10:29:06 by weiyang           #+#    #+#             */
/*   Updated: 2026/03/19 10:29:07 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *z = new Zombie[N];

    int i = 0;
    while (i < N)
    {
	    z[i].setName(name);
        i++;
    }
    return (z);
}
