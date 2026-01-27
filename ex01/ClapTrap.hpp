/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 10:52:17 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/19 17:29:48 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iosfwd>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& ct);
		~ClapTrap(void);
		ClapTrap& operator=(const ClapTrap& ct);

		//* GETTERS / SETTERS
		std::string		getName(void) const;
		unsigned int	getHP(void) const;
		unsigned int	getEnergy(void) const;
		unsigned int	getDamage(void) const;
		void			setName(const std::string& name);
		void			setHP(const unsigned int hp);
		void			setEnergy(const unsigned int energy);
		void			setDamage(const unsigned int damage);

		//* ACTIONS
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

	protected:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_energy;
		unsigned int	_damage;

};

std::ostream&	operator<<(std::ostream& os, const ClapTrap& ct);

#endif
