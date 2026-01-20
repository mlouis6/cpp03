/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:25:48 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/20 15:45:53 by mlouis           ###   ########.fr       */
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
		dt.attack("Bad Guy");
	}
	return (0);
}
