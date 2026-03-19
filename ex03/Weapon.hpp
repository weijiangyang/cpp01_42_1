/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 10:59:44 by weiyang           #+#    #+#             */
/*   Updated: 2026/03/19 10:59:45 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon
{
	private:
		std::string _type;
	
	public:
		Weapon(std::string weaponType);
		~Weapon();
		std::string getType() const;
		void setType(std::string typeName);
};

#endif

