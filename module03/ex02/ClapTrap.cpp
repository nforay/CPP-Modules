/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 19:36:01 by nforay            #+#    #+#             */
/*   Updated: 2021/01/24 16:37:32 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define BLU "\e[34m"
#define DEF "\e[39m"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap(unsigned int hitpoints, unsigned int maxhitpoints,
	unsigned int energypoints, unsigned int maxenergypoints, unsigned int level,
	std::string const name, unsigned int meleeattackdamage, unsigned int rangedattackdamage,
	unsigned int armordamagereduction) : m_hitpoints(hitpoints), m_maxhitpoints(maxhitpoints),
	m_energypoints(energypoints), m_maxenergypoints(maxenergypoints), m_level(level), m_name(name),
	m_meleeattackdamage(meleeattackdamage), m_rangedattackdamage(rangedattackdamage),
	m_armordamagereduction(armordamagereduction)
{
	std::cout << BLU << "CL4P-TP " << this->m_name << " constructor called." << DEF << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & src) : m_hitpoints(src.m_hitpoints), m_maxhitpoints(src.m_maxhitpoints),
	m_energypoints(src.m_energypoints), m_maxenergypoints(src.m_maxenergypoints), m_level(src.m_level),
	m_name(src.m_name), m_meleeattackdamage(src.m_meleeattackdamage), m_rangedattackdamage(src.m_rangedattackdamage),
	m_armordamagereduction(src.m_armordamagereduction)
{
	std::cout << BLU << "CL4P-TP " << this->m_name << " constructor called." << DEF << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << BLU << "CL4P-TP " << this->m_name << " destructor called." << DEF << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
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

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	o << "CL4P-TP " << i.GetName() << " HP:" << i.GetHitPoints() << " ENG:" << i.GetEnergyPoints() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	ClapTrap::rangedAttack(std::string const & target) const
{
	std::cout << BLU << "CL4P-TP " << this->m_name << " attacks " << target << " at range, causing " << this->m_rangedattackdamage << " points of damage!" << DEF << std::endl;
}

void	ClapTrap::meleeAttack(std::string const & target) const
{
	std::cout << BLU << "CL4P-TP " << this->m_name << " melee attack on " << target << ", causing " << this->m_meleeattackdamage << " points of damage!" << DEF << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->m_armordamagereduction)
	{
		std::cout << BLU << "CL4P-TP " << this->m_name << " takes " << (amount - this->m_armordamagereduction) << " points of damage (" << this->m_armordamagereduction << " absorbed)." << DEF << std::endl;
		if ((amount - this->m_armordamagereduction) >= this->m_hitpoints)
			this->m_hitpoints = 0;
		else
			this->m_hitpoints -= (amount - this->m_armordamagereduction);
	}
	else
	{
		std::cout << BLU << "CL4P-TP" << this->m_name << "fully absorbs the attack!" << DEF << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << BLU << "CL4P-TP " << this->m_name << " repairs itself for " << amount << " hit points." << DEF << std::endl;
	if (amount >= (this->m_maxhitpoints - this->m_hitpoints))
		this->m_hitpoints = this->m_maxhitpoints;
	else
		this->m_hitpoints += amount;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string			ClapTrap::GetName(void) const
{
	return (this->m_name);
}

unsigned int		ClapTrap::GetHitPoints(void) const
{
	return (this->m_hitpoints);
}

unsigned int		ClapTrap::GetEnergyPoints(void) const
{
	return (this->m_energypoints);
}

/* ************************************************************************** */