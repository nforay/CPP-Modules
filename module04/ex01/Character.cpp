/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 00:12:26 by nforay            #+#    #+#             */
/*   Updated: 2021/01/26 16:53:01 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(std::string const &name) : m_name(name), m_ap(40), m_weapon(NULL)
{
}

Character::Character(const Character &src) : m_name(src.m_name), m_ap(src.m_ap), m_weapon(src.m_weapon)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=(Character const &rhs)
{
	if ( this != &rhs )
	{
		this->m_name = rhs.m_name;
		this->m_ap = rhs.m_ap;
		this->m_weapon = rhs.m_weapon;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Character const & i )
{
	if (i.getWeapon() != NULL)
		o << i.getName() << " has " << i.getAP() << " AP and wields a " << i.getWeapon()->getName() << std::endl;
	else
		o << i.getName() << " has " << i.getAP() << " AP and is unarmed" << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void					Character::recoverAP()
{
	if ((m_ap += 10) > 40)
		m_ap = 40;
}

void					Character::equip(AWeapon *weapon)
{
	if (weapon != NULL)
	{
		m_weapon = weapon;
	}
}

void					Character::attack(Enemy *target)
{
	if (this->m_weapon != NULL && this->m_ap >= this->m_weapon->getAPCost())
	{
		std::cout << this->m_name << " attacks " << target->getType() << " with a " << this->m_weapon->getName() << std::endl;
		this->m_ap -= this->m_weapon->getAPCost();
		this->m_weapon->attack();
		target->takeDamage(this->m_weapon->getDamage());
		if (target->getHP() <= 0)
			delete target;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const		Character::getName() const
{
	return (this->m_name);
}

int						Character::getAP() const
{
	return (this->m_ap);
}

AWeapon					*Character::getWeapon() const
{
	return (this->m_weapon);
}

/* ************************************************************************** */