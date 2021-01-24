/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:26:53 by nforay            #+#    #+#             */
/*   Updated: 2021/01/22 20:37:42 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <cstdlib>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap(std::string const name) : ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5)
{
	std::cout << "FR4G-TP " << this->m_name << " constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap & src) : ClapTrap(src)
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

/* ************************************************************************** */