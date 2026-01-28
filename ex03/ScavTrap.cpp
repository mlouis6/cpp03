/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:12:49 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/28 12:52:31 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

const unsigned int	ScavTrap::_base_hp = 100;
const unsigned int	ScavTrap::_base_energy = 50;
const unsigned int	ScavTrap::_base_damage = 20;

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_hp = _base_hp;
	_energy = _base_energy;
	_damage = _base_damage;
	std::cout << "An unnamed ScavTrap was created." << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	_hp = _base_hp;
	_energy = _base_energy;
	_damage = _base_damage;
	std::cout << "ScavTrap " << name << " was created." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& st) : ClapTrap(st)
{
	std::cout << "(st) Copy constructor of " << this->_name << "." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& st)
{
	if (this != &st)
	{
		ClapTrap::operator=(st);
	}
	std::cout << "(st) Copy assignement operator of " << this->_name << "." << std::endl;
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
		std::cout << "ScavTrap " << _name << " has no energy to guard the gate." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " is now the Gate keeper." << std::endl;
}
