/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:12:40 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/26 16:44:56 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& st);
		ScavTrap& operator=(const ScavTrap& st);
		~ScavTrap(void);

		void	attack(const std::string& target);
		void	guardGate(void);
	protected:
		static const unsigned int	_base_hp;
		static const unsigned int	_base_energy;
		static const unsigned int	_base_damage;
};

#endif