/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 10:52:17 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/10 11:54:23 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
	public:
		ClapTrap(void);
		// ClapTrap(std::string name);
		~ClapTrap(void);
		ClapTrap& operator=(const ClapTrap& ct);

		//* GETTERS / SETTERS
		std::string	getName(void);
		int			getHP(void);
		int			getEnergy(void);
		int			getdamage(void);
		void		setName(std::string);
		void		setHP(int hp);
		void		setEnergy(int energy);
		void		setdamage(int damage);

	private:
		std::string	_name;
		int			_hp;
		int			_energy;
		int			_damage;

}

#endif