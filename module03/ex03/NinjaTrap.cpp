/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:26:53 by nforay            #+#    #+#             */
/*   Updated: 2021/01/24 16:35:44 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <cstdlib>

#define PUR "\e[35m"
#define DEF "\e[39m"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

NinjaTrap::NinjaTrap(std::string const name) : ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0)
{
	std::cout << PUR << "N!J4-TP " << this->m_name << " constructor called." << DEF << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap & src) : ClapTrap(src)
{
	std::cout << PUR << "N!J4-TP " << this->m_name << " constructor called." << DEF << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

NinjaTrap::~NinjaTrap()
{
	std::cout << PUR << "N!J4-TP " << this->m_name << " destructor called." << DEF << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

NinjaTrap &				NinjaTrap::operator=( NinjaTrap const & rhs )
{
	if (this != &rhs)
	{
		this->m_hitpoints = rhs.m_hitpoints;
		this->m_maxhitpoints = rhs.m_maxhitpoints;
		this->m_energypoints = rhs.m_energypoints;
		this->m_maxenergypoints = rhs.m_maxenergypoints;
		this->m_level = rhs.m_level;
		this->m_name = rhs.m_name;
		this->m_meleeattackdamage = rhs.m_meleeattackdamage;
		this->m_rangedattackdamage = rhs.m_rangedattackdamage;
		this->m_armordamagereduction =  rhs.m_armordamagereduction;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, NinjaTrap const & i )
{
	o << "N!J4-TP " << i.GetName() << " HP:" << i.GetHitPoints() << " ENG:" << i.GetEnergyPoints() << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	NinjaTrap::ninjaShoebox(FragTrap const & rhs) const
{
	std::cout << PUR << "N!J4-TP " << this->m_name << " action Frag: " << rhs.GetName() << DEF << std::endl;
}

void	NinjaTrap::ninjaShoebox(ScavTrap const & rhs) const
{
	std::cout << PUR << "N!J4-TP " << this->m_name << " action Scav: " << rhs.GetName() << DEF << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap const & rhs) const
{
	std::cout << PUR << "N!J4-TP " << this->m_name << " action Ninja: " << rhs.GetName() << DEF << std::endl;
}

/* ************************************************************************** */