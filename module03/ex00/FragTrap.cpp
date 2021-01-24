/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:26:53 by nforay            #+#    #+#             */
/*   Updated: 2021/01/22 17:49:20 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <cstdlib>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap(std::string const name) : m_hitpoints(100), m_maxhitpoints(100),
	m_energypoints(100), m_maxenergypoints(100), m_level(1), m_name(name),
	m_meleeattackdamage(30), m_rangedattackdamage(20), m_armordamagereduction(5)
{
	std::cout << "FR4G-TP " << this->m_name << " constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap & src) : m_hitpoints(src.m_hitpoints), m_maxhitpoints(src.m_maxhitpoints),
	m_energypoints(src.m_energypoints), m_maxenergypoints(src.m_maxenergypoints), m_level(src.m_level),
	m_name(src.m_name), m_meleeattackdamage(src.m_meleeattackdamage), m_rangedattackdamage(src.m_rangedattackdamage),
	m_armordamagereduction(src.m_armordamagereduction)
{
	std::cout << "FR4G-TP " << this->m_name << " constructor called." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << this->m_name << " destructor called." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
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

std::ostream &			operator<<( std::ostream & o, FragTrap const & i )
{
	o << "FR4G-TP " << i.GetName() << " HP:" << i.GetHitPoints() << " ENG:" << i.GetEnergyPoints() << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->m_name << " attacks " << target << " at range, causing " << this->m_rangedattackdamage << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->m_name << " melee attack on " << target << ", causing " << this->m_meleeattackdamage << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->m_armordamagereduction)
	{
		std::cout << "FR4G-TP " << this->m_name << " takes " << (amount - this->m_armordamagereduction) << " points of damage (" << this->m_armordamagereduction << " absorbed)." << std::endl;
		if ((amount - this->m_armordamagereduction) >= this->m_hitpoints)
			this->m_hitpoints = 0;
		else
			this->m_hitpoints -= (amount - this->m_armordamagereduction);
	}
	else
	{
		std::cout << "FR4G-TP fully absorbs the attack!" << std::endl;
	}
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " << this->m_name << " repairs itself for " << amount << " hit points." << std::endl;
	if (amount >= (this->m_maxhitpoints - this->m_hitpoints))
		this->m_hitpoints = this->m_maxhitpoints;
	else
		this->m_hitpoints += amount;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->m_energypoints < 25)
	{
		std::cout << "FR4G-TP " << this->m_name << "'s energy is too low." << std::endl;
		return ;
	}
	this->m_energypoints -= 25;
	std::string	vault_say[5];
	vault_say[0] = "Eat bomb!";
	vault_say[1] = "Avada kedavra!";
	vault_say[2] = "Tornado of death and bullets!";
	vault_say[3] = "Grenaaaade!";
	vault_say[4] = "Meatsplosion!";

	std::cout << "FR4G-TP " << this->m_name << " casts " << vault_say[std::rand() % 5] << " on " << target << "." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string			FragTrap::GetName(void) const
{
	return (this->m_name);
}

unsigned int		FragTrap::GetHitPoints(void) const
{
	return (this->m_hitpoints);
}

unsigned int		FragTrap::GetEnergyPoints(void) const
{
	return (this->m_energypoints);
}

/* ************************************************************************** */