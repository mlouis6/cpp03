/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:11:46 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/28 12:54:36 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

const unsigned int	FragTrap::_base_hp = 100;
const unsigned int	FragTrap::_base_energy = 100;
const unsigned int	FragTrap::_base_damage = 30;


FragTrap::FragTrap(void) : ClapTrap()
{
	_hp = _base_hp;
	_energy = _base_energy;
	_damage = _base_damage;
	std::cout << "An unnamed FragTrap was created." << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	_hp = _base_hp;
	_energy = _base_energy;
	_damage = _base_damage;
	std::cout << "FragTrap " << name << " was created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& cpy) : ClapTrap(cpy)
{
	std::cout << "(ft) Copy constructor of " << this->_name << "." << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& cpy)
{
	if (this != &cpy)
	{
		ClapTrap::operator=(cpy);
	}
	std::cout << "(ft) Copy assignement operator of " << this->_name << "." << std::endl;
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
		std::cout << "FragTrap " << _name << " has no energy to high five." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " wants to high five!" << std::endl;
}
