/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 10:26:55 by weiyang           #+#    #+#             */
/*   Updated: 2026/03/19 10:27:02 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP 

#include <string>

class Zombie
{
    private:
        std::string _name;
    
    public:
	    Zombie(void);
        Zombie(std::string name);
        ~Zombie();
	    void setName(std::string name);
	    std::string getName(void) const;
        void announce() const;
};

Zombie *zombieHorde(int N, std::string name);
Zombie *newZombie(std::string name);

#endif
