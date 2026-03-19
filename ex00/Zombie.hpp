/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 10:24:11 by weiyang           #+#    #+#             */
/*   Updated: 2026/03/19 10:24:12 by weiyang          ###   ########.fr       */
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
        void announce() const;
		void setName(std::string name);
};

Zombie *newZombie(std::string name);
void    randomChump(std::string name);

#endif