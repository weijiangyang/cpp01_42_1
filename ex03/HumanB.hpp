/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 11:05:08 by weiyang           #+#    #+#             */
/*   Updated: 2026/03/19 11:05:09 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon* _weapon;
		std::string _name;
	
	public:
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon* weapon);
		void attack() const;
};