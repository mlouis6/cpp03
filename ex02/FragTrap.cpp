/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:11:46 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/20 15:46:52 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void) : ClapTrap()
{
	_hp = 100;
	_energy = 100;
	_damage = 30;
	std::cout << "An unnamed FragTrap was created." << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	_hp = 100;
	_energy = 100;
	_damage = 30;
	std::cout << "FragTrap " << _name << " was created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& cpy) : ClapTrap(cpy)
{
	std::cout << "(ft) Copy constructor of " << _name << "." << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& cpy)
{
	if (this != &cpy)
	{
		ClapTrap::operator=(cpy);
	}
	std::cout << "(ft) Copy assignement operator of " << _name << "." << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << _name << " was destroyed." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (_hp == 0)
	{
		std::cout << "FragTrap " << _name << " is dead so it can't high five." << std::endl;
		return ;
	}
	if (_energy == 0)
	{
		std::cout << "FragTrap " << _name << " had no energy to guard high five." << std::endl;
		return ;
	}
	std::cout << "FragTrap wants to high five!" << std::endl;
}
