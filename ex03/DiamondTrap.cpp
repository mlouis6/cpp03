/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:51:54 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/28 12:52:22 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>
#include <iostream>

DiamondTrap::DiamondTrap(void) : ClapTrap("unnamed_clap_name"), ScavTrap(), FragTrap(), _name("unnamed")
{
	_hp = FragTrap::_base_hp;
	_energy = ScavTrap::_base_energy;
	_damage = FragTrap::_base_damage;
	std::cout << "An unnamed DiamondTrap was created." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	_hp = FragTrap::_base_hp;
	_energy = ScavTrap::_base_energy;
	_damage = FragTrap::_base_damage;
	std::cout << "DiamondTrap " << _name << " (" << ClapTrap::_name << ") was created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& cpy) : ClapTrap(cpy), ScavTrap(cpy), FragTrap(cpy), _name(cpy._name)
{
	std::cout << "(dt) Copy constructor of " << _name << "." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& cpy)
{
	if (this != &cpy)
	{
		ClapTrap::operator=(cpy);
		_name = cpy._name;
	}
	std::cout << "(dt) Copy assignement operator of " << _name << "." << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << _name << " was destroyed." << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	if (_hp == 0)
	{
		std::cout << "DiamongTrap " << _name << " can't talk due to being dead." << std::endl;
		return ;
	}
	if (_energy == 0)
	{
		std::cout << "DiamongTrap " << _name << " has no energy left to talk." << std::endl;
		return ;
	}
	std::cout << "I am " << _name << ", also known as " << ClapTrap::_name << "." << std::endl;
}
