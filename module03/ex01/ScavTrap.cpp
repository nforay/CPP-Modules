/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:26:53 by nforay            #+#    #+#             */
/*   Updated: 2021/01/22 18:53:35 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <cstdlib>

#define YEL "\e[33m"
#define DEF "\e[39m"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap(std::string const name) : m_hitpoints(100), m_maxhitpoints(100),
	m_energypoints(50), m_maxenergypoints(50), m_level(1), m_name(name),
	m_meleeattackdamage(20), m_rangedattackdamage(15), m_armordamagereduction(3)
{
	std::cout << YEL << "SC4V-TP " << this->m_name << " appelle son constructeur." << DEF << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & src) : m_hitpoints(src.m_hitpoints), m_maxhitpoints(src.m_maxhitpoints),
	m_energypoints(src.m_energypoints), m_maxenergypoints(src.m_maxenergypoints), m_level(src.m_level),
	m_name(src.m_name), m_meleeattackdamage(src.m_meleeattackdamage), m_rangedattackdamage(src.m_rangedattackdamage),
	m_armordamagereduction(src.m_armordamagereduction)
{
	std::cout << YEL << "SC4V-TP " << this->m_name << " appelle son constructeur." << DEF << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << YEL << "SC4V-TP " << this->m_name << " appelle son destructeur." << DEF << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
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

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
{
	o << "SC4V-TP " << i.GetName() << " HP:" << i.GetHitPoints() << " ENG:" << i.GetEnergyPoints() << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << YEL << "SC4V-TP " << this->m_name << " attaque " << target << " à distance, infligeant " << this->m_rangedattackdamage << " points de dégâts!" << DEF << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << YEL << "SC4V-TP " << this->m_name << " attaque " << target << " en mêlée, infligeant " << this->m_meleeattackdamage << " points de dégâts!" << DEF << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->m_armordamagereduction)
	{
		std::cout << YEL << "SC4V-TP " << this->m_name << " reçoit " << (amount - this->m_armordamagereduction) << " points de dégâts (" << this->m_armordamagereduction << " absorbés)." << DEF << std::endl;
		if ((amount - this->m_armordamagereduction) >= this->m_hitpoints)
			this->m_hitpoints = 0;
		else
			this->m_hitpoints -= (amount - this->m_armordamagereduction);
	}
	else
	{
		std::cout << YEL << "SC4V-TP absorbe complètement l'attaque!" << DEF << std::endl;
	}
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << YEL << "SC4V-TP " << this->m_name << " se répare pour " << amount << " points de vie." << DEF << std::endl;
	if (amount >= (this->m_maxhitpoints - this->m_hitpoints))
		this->m_hitpoints = this->m_maxhitpoints;
	else
		this->m_hitpoints += amount;
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	if (std::rand() % 3)
	{
		std::cout << YEL << "SC4V-TP " << this->m_name << " challenge " << target << " au dés, il lance et fait un " << 1 + std::rand() % 6 << "." << DEF << std::endl;
	}
	else if (std::rand() % 2)
	{
		std::string	chifoumi[3];
		chifoumi[0] = "la Pierre.";
		chifoumi[1] = "la Feuille.";
		chifoumi[2] = "les Ciseaux.";
		std::cout << YEL << "SC4V-TP " << this->m_name << " challenge " << target << " au Chifoumi, il choisit " << chifoumi[std::rand() % 3] << DEF << std::endl;
	}
	else
	{
		std::string	pailles[2];
		pailles[0] = "courte.";
		pailles[1] = "longue.";
		std::cout << YEL << "SC4V-TP " << this->m_name << " challenge " << target << " à la courte-paille, il tire la plus " << pailles[std::rand() % 2] << DEF << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string			ScavTrap::GetName(void) const
{
	return (this->m_name);
}

unsigned int		ScavTrap::GetHitPoints(void) const
{
	return (this->m_hitpoints);
}

unsigned int		ScavTrap::GetEnergyPoints(void) const
{
	return (this->m_energypoints);
}

/* ************************************************************************** */