/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:25:48 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/19 19:28:45 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	ClapTrap ct("Clappy");

	std::cout << ct;
	ct.attack("Bad Guy");
	std::cout << ct;
	ct.takeDamage(5);
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

	std::cout << "\n\n***NEW PART ***" << std::endl;
	ScavTrap st("Boink");
	std::cout << st;
	st.attack("Bad Guy");
	std::cout << st;
	st.takeDamage(5);
	std::cout << st;
	st.guardGate();
	st.beRepaired(10);
	std::cout << st;
	for (int i = 0 ; i < 49 ; ++i)
	{
		std::cout << "(" << i + 1 << ") ";
		st.attack("Bad Guy");
	}
	st.beRepaired(10);
	std::cout << std::endl;
	std::cout << st;
	st.takeDamage(100);
	std::cout << st;
	st.attack("Bad Guy");
	std::cout << st;
	st.takeDamage(5);
	std::cout << st;
	st.beRepaired(10);
	st.guardGate();
	return (0);

	return (0);
}
