/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 12:03:10 by weiyang           #+#    #+#             */
/*   Updated: 2026/03/19 12:03:11 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Harl
{
	private:
		void _debug(void) const;
		void _info(void) const;
		void _warning(void) const;
		void _error(void) const;
	
	public:
		Harl(void);
		~Harl(void);
		void complain(std::string level) const;
};