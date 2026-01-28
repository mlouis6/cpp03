/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlouis <mlouis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:11:38 by mlouis            #+#    #+#             */
/*   Updated: 2026/01/28 10:11:35 by mlouis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& cpy);
		FragTrap&	operator=(const FragTrap& cpy);
		~FragTrap(void);

		void	highFivesGuys(void);

	protected:
		static const unsigned int	_base_hp;
		static const unsigned int	_base_energy;
		static const unsigned int	_base_damage;
};

#endif
