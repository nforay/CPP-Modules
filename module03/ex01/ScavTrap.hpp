/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:26:54 by nforay            #+#    #+#             */
/*   Updated: 2021/01/22 18:43:58 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
# define ScavTrap_HPP

# include <iostream>
# include <string>

class ScavTrap
{

	public:

		ScavTrap(std::string const name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			challengeNewcomer(std::string const & target);

		std::string		GetName(void) const;
		unsigned int	GetHitPoints(void) const;
		unsigned int	GetEnergyPoints(void) const;

		ScavTrap &		operator=( ScavTrap const & rhs );

	private:

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

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i );

#endif /* ******************************************************** ScavTrap_H */