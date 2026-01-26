/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:25:48 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/26 16:32:27 by mlouis           ###   ########.fr       */
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
	}
	std::cout << std::endl;
	{
		ScavTrap st("Bot");
		st.attack("Bad Guy");
	}
	std::cout << std::endl;
	{
		FragTrap ft("Boom");
		ft.attack("Bad Guy");
	}
	std::cout << std::endl;
	{
		DiamondTrap dt("Rihanna");
		std::cout << dt;
		dt.attack("Bad Guy");
		std::cout << dt;
		dt.whoAmI();
	}
	return (0);
}
