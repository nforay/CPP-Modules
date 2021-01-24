/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:26:54 by nforay            #+#    #+#             */
/*   Updated: 2021/01/22 18:18:15 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

class FragTrap
{

	public:

		FragTrap(std::string const name);
		FragTrap( FragTrap const & src );
		~FragTrap();

		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const & target);

		std::string		GetName(void) const;
		unsigned int	GetHitPoints(void) const;
		unsigned int	GetEnergyPoints(void) const;

		FragTrap &		operator=( FragTrap const & rhs );

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

std::ostream &			operator<<( std::ostream & o, FragTrap const & i );

#endif /* ******************************************************** FRAGTRAP_H */