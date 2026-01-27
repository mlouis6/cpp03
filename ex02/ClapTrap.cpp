/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 10:52:03 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/19 17:28:48 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void) : _name("unnamed"), _hp(10), _energy(10), _damage(0)
{
	std::cout << "An unnamed ClapTrap was created." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hp(10), _energy(0), _damage(0)
{
	std::cout << "ClapTrap " << _name << " was created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ct)
{
	this->_name = ct._name;
	this->_hp = ct._hp;
	this->_energy = ct._energy;
	this->_damage = ct._damage;
	std::cout << "(ct) Copy constructor of " << _name << "." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << _name << " was destroyed." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& ct)
{
	if (this != &ct)
	{
		this->_name = ct._name;
		this->_hp = ct._hp;
		this->_energy = ct._energy;
		this->_damage = ct._damage;
	}
	std::cout << "(ct) Copy assignement operator of " << _name << "." << std::endl;
	return (*this);
}

std::string	ClapTrap::getName(void) const
{
	return (_name);
}

unsigned int	ClapTrap::getHP(void) const
{
	return (_hp);
}

unsigned int	ClapTrap::getEnergy(void) const
{
	return (_energy);
}

unsigned int	ClapTrap::getDamage(void) const
{
	return (_damage);
}

void	ClapTrap::setName(const std::string& name)
{
	_name = name;
}

void	ClapTrap::setHP(const unsigned int hp)
{
	_hp = hp;
}

void	ClapTrap::setEnergy(const unsigned int energy)
{
	_energy = energy;
}

void	ClapTrap::setDamage(const unsigned int damage)
{
	_damage = damage;
}

//* ACTIONS
void	ClapTrap::attack(const std::string& target)
{
	if (_hp == 0)
	{
		std::cout << "ClapTrap " << _name << " is dead so it can't attack " << target << "." << std::endl;
		return ;
	}
	if (_energy > 0)
	{
		_energy--;
		if (_damage == 1)
			std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " point of damage!" << std::endl;
		else
			std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _damage << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " has no energy left so it can't attack." << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead, calm down!" << std::endl;
		return ;
	}
	if (amount < _hp)
	{
		_hp -= amount;
		std::cout << "ClapTrap " << _name << " lost " << amount << " HP (left: " << _hp << ")" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " died losing its last " << _hp << " hp." << std::endl;
		_hp = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hp == 0)
	{
		std::cout << "ClapTrap " << _name << " is dead so it can't repair itself." << std::endl;
		return ;
	}
	if (_energy > 0)
	{
		_energy--;
		_hp += amount;
		std::cout << "ClapTrap " << _name << " gain " << amount << " HP (now has: " << _hp << ")" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " has no energy left to repair itself." << std::endl;
}

std::ostream& operator<<(std::ostream& os, const ClapTrap& ct)
{
	os << "------\nName: " << ct.getName() << "\nHP: " << ct.getHP() << "\nEnergy: " << ct.getEnergy()\
		<< "\nDamage: " << ct.getDamage() << "\n------\n\n";
	return (os);
}
