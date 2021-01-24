/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:26:53 by nforay            #+#    #+#             */
/*   Updated: 2021/01/24 16:33:46 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <cstdlib>

#define YEL "\e[33m"
#define DEF "\e[39m"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap(std::string const name) : ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3)
{
	std::cout << YEL << "SC4V-TP " << this->m_name << " appelle son constructeur." << DEF << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & src) : ClapTrap(src)
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

void	ScavTrap::challengeNewcomer(std::string const & target) const
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

/* ************************************************************************** */