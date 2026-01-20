/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:25:48 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/20 12:48:57 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	FragTrap ft("Bobby");
	
	std::cout << ft;
	ft.highFivesGuys();
	ft.attack("Bad Guy");
	std::cout << ft;
	ft.setEnergy(2);
	std::cout << ft;
	for (int i = 0 ; i <= 2 ; ++i)
		ft.attack("Bad Guy");
	std::cout << ft;
	ft.takeDamage(100);
	std::cout << ft;
	ft.highFivesGuys();
	ft.attack("Bad Guy");
	return (0);
}
