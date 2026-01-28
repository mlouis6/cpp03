/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:25:48 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/28 09:31:24 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap ct("Clappy");

	std::cout << ct;
	ct.attack("Bad Guy");
	std::cout << ct;
	ct.takeDamage(6);
	std::cout << ct;
	ct.beRepaired(10);
	std::cout << ct;
	for (int i = 0 ; i < 9 ; ++i)
	{
		std::cout << "(" << i + 1 << ") ";
		ct.attack("Bad Guy");
	}
	ct.beRepaired(10);
	std::cout << std::endl;
	std::cout << ct;
	ct.takeDamage(100);
	std::cout << ct;
	ct.attack("Bad Guy");
	std::cout << ct;
	ct.takeDamage(5);
	std::cout << ct;
	ct.beRepaired(10);
	return (0);
}
