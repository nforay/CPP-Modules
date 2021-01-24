/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 19:36:01 by nforay            #+#    #+#             */
/*   Updated: 2021/01/24 16:34:30 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap(unsigned int hitpoints, unsigned int maxhitpoints, unsigned int energypoints,
			unsigned int maxenergypoints, unsigned int level, std::string const name,
			unsigned int meleeattackdamage, unsigned int rangedattackdamage, unsigned int armordamagereduction);
		ClapTrap(ClapTrap const & src);
		~ClapTrap();

		void			rangedAttack(std::string const & target) const;
		void			meleeAttack(std::string const & target) const;
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		std::string		GetName(void) const;
		unsigned int	GetHitPoints(void) const;
		unsigned int	GetEnergyPoints(void) const;

		ClapTrap &		operator=( ClapTrap const & rhs );

	protected:

		unsigned int	m_hitpoints;
		unsigned int	m_maxhitpoints;
		unsigned int	m_energypoints;
		unsigned int	m_maxenergypoints;
		unsigned int	m_level;
		std::string		m_name;
		unsigned int	m_meleeattackdamage;
		unsigned int	m_rangedattackdamage;
		unsigned int	m_armordamagereduction;

};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */