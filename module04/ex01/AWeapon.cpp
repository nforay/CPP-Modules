/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 19:56:08 by nforay            #+#    #+#             */
/*   Updated: 2021/01/26 16:29:28 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AWeapon::AWeapon(std::string const &name, int apcost, int damage) : m_name(name), m_apcost(apcost), m_damage(damage)
{
}

AWeapon::AWeapon(const AWeapon &src) : m_name(src.m_name), m_apcost(src.m_apcost), m_damage(src.m_damage)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AWeapon::~AWeapon()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AWeapon &				AWeapon::operator=(AWeapon const &rhs)
{
	if (this != &rhs)
	{
		this->m_name = rhs.m_name;
		this->m_damage = rhs.m_damage;
		this->m_apcost = rhs.m_apcost;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AWeapon const & i )
{
	o << "Weapon=\"" << i.getName() << "\" (DGT:" << i.getDamage() << " AP:" << i.getAPCost() << ")" << std::endl;
	return o;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		AWeapon::getName() const
{
	return (this->m_name);
}

int				AWeapon::getAPCost() const
{
	return (this->m_apcost);
}

int				AWeapon::getDamage() const
{
	return (this->m_damage);
}

/* ************************************************************************** */