/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 12:51:54 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/26 16:44:25 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

DiamondTrap::DiamondTrap(void)
{
	_name = "unnamed";
	ClapTrap::_name = _name + "_clap_name";
	_hp = FT_HP;
	_energy = ST_ENERGY;
	_damage = FT_DAMAGE;
	std::cout << "An unnamed DiamondTrap was created." << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name)
{
	_name = name;
	ClapTrap::_name = _name + "_clap_name";
	_hp = FragTrap::getHP(); // FT_HP;
	_energy = ScavTrap::_energy; // ST_ENERGY;
	_damage = FragTrap::getDamage(); // FT_DAMAGE;
	std::cout << "DiamondTrap " << _name << " (" << ClapTrap::_name << ") was created." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& cpy)
{
	this->_name = cpy.getName();
	this->_hp = cpy.getHP();
	this->_energy = cpy.getEnergy();
	this->_damage = cpy.getDamage();
	std::cout << "(dt) Copy constructor of " << _name << "." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& cpy)
{
	if (this != &cpy)
	{
		this->_name = cpy.getName();
		this->_hp = cpy.getHP();
		this->_energy = cpy.getEnergy();
		this->_damage = cpy.getDamage();
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
	std::cout << "I am " << _name << ", also known as " << ClapTrap::_name << "." << std::endl;
}
