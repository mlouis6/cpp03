/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:11:46 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/20 15:46:40 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void)
{
	_name = "unnamed";
	_hp = FT_HP;
	_energy = FT_ENERGY;
	_damage = FT_DAMAGE;
	std::cout << "An unnamed FragTrap was created." << std::endl;
}

FragTrap::FragTrap(const std::string& name)
{
	_name = name;
	_hp = FT_HP;
	_energy = FT_ENERGY;
	_damage = FT_DAMAGE;
	std::cout << "FragTrap " << _name << " was created." << std::endl;
}

FragTrap::FragTrap(const FragTrap& cpy)
{
	_name = cpy.getName();
	_hp = cpy.getHP();
	_energy = cpy.getEnergy();
	_damage = cpy.getDamage();
	std::cout << "(ft) Copy constructor of " << this->getName() << "." << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& cpy)
{
	if (this != &cpy)
	{
		_name = cpy.getName();
		_hp = cpy.getHP();
		_energy = cpy.getEnergy();
		_damage = cpy.getDamage();
	}
	std::cout << "(ft) Copy assignement operator of " << this->getName() << "." << std::endl;
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
	std::cout << "FragTrap wants to high five!" << std::endl;
}
