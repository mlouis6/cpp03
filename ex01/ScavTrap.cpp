/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:12:49 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/20 15:46:57 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_hp = 100;
	_energy = 50;
	_damage = 20;
	std::cout << "An unnamed ScavTrap was created." << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	_hp = 100;
	_energy = 50;
	_damage = 20;
	std::cout << "ScavTrap " << _name << " was created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& cpy) : ClapTrap(cpy)
{
	std::cout << "(st) Copy constructor of " << _name << "." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& cpy)
{
	if (this != &cpy)
	{
		ClapTrap::operator=(cpy);
	}
	std::cout << "(st) Copy assignement operator of " << _name << "." << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << _name << " was destroyed." << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_hp == 0)
	{
		std::cout << "ScavTrap " << _name << " is dead so it can't attack " << target << "." << std::endl;
		return ;
	}
	if (_energy > 0)
	{
		_energy--;
		if (_damage == 1)
			std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _damage << " point of damage!" << std::endl;
		else
			std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " has no energy left so it can't attack." << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (_hp == 0)
	{
		std::cout << "ScavTrap " << _name << " is dead so it can't guard the gate." << std::endl;
		return ;
	}
	if (_energy == 0)
	{
		std::cout << "ScavTrap " << _name << " had no energy to guard the gate." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " is now the Gate keeper." << std::endl;
}
