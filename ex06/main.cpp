/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weiyang <weiyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 12:03:15 by weiyang           #+#    #+#             */
/*   Updated: 2026/03/19 12:03:16 by weiyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	if (argc != 2)
	{
		std::cout << "Usage: ./program level" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
	return (0);
}