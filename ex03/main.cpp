/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:25:48 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/28 12:40:57 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	{
		ClapTrap ct("Bobby");
		ct.attack("Bad Guy");
		std::cout << ct;
	}
	std::cout << std::endl;
	{
		ScavTrap st("Bot");
		st.attack("Bad Guy");
		std::cout << st;
	}
	std::cout << std::endl;
	{
		FragTrap ft("Boom");
		ft.attack("Bad Guy");
		std::cout << ft;
	}
	std::cout << std::endl;
	{
		DiamondTrap dt("Rihanna");
		std::cout << dt;
		dt.attack("Bad Guy");
		std::cout << dt;
		dt.highFivesGuys();
		dt.guardGate();
		dt.whoAmI();
		dt.setEnergy(0);
		dt.attack("Bad Guy");
		std::cout << dt;
		dt.highFivesGuys();
		dt.guardGate();
		dt.whoAmI();
	}
	return (0);
}
