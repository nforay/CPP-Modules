/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:26:53 by nforay            #+#    #+#             */
/*   Updated: 2021/01/24 16:16:05 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <cstdlib>

#define RED "\e[31m"
#define DEF "\e[39m"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperTrap::SuperTrap(std::string const name) : ClapTrap(100, 100, 120, 120, 1, name, 60, 20, 5),
	FragTrap(name), NinjaTrap(name)
{
	std::cout << RED << "5UPR-TP " << name << " constructor called." << DEF << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap & src) : ClapTrap(src), FragTrap(src), NinjaTrap(src)
{
	std::cout << RED << "5UPR-TP " << this->m_name << " constructor called." << DEF << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperTrap::~SuperTrap()
{
	std::cout << RED << "5UPR-TP " << this->m_name << " destructor called." << DEF << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

SuperTrap &				SuperTrap::operator=( SuperTrap const & rhs )
{
	if (this != &rhs)
		ClapTrap::operator=(rhs);
	return *this;
}

std::ostream &			operator<<( std::ostream & o, SuperTrap const & i )
{
	o << "5UPR-TP " << i.GetName() << " HP:" << i.GetHitPoints() << " ENG:" << i.GetEnergyPoints() << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void SuperTrap::rangedAttack(std::string const & target) const
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target) const
{
	NinjaTrap::meleeAttack(target);
}

/* ************************************************************************** */