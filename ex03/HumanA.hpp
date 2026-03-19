/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 10:59:24 by weiyang           #+#    #+#             */
/*   Updated: 2026/03/19 10:59:25 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon& _weapon;
		std::string _name;
	
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void attack() const;
};