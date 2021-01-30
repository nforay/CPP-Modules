/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:08:37 by nforay            #+#    #+#             */
/*   Updated: 2021/01/30 16:18:28 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Character::Character(const std::string &name) : m_name(name), m_inv(new AMateria*[4]), m_nbrmat(0)
{
	for (int i = 0; i < 4; i++)
		this->m_inv[i] = NULL;
	//std::cout << "Character constructor called." << std::endl;
}

Character::Character(const Character &src) : m_name(src.m_name), m_inv(new AMateria*[4]), m_nbrmat(src.m_nbrmat)
{
	//std::cout << "Character copy constructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		this->m_inv[i] = src.m_inv[i];
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Character::~Character()
{
	//std::cout << "Character destructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		if (this->m_inv[i] != NULL)
			delete this->m_inv[i];
	delete [] m_inv;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Character &				Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->m_name = rhs.getName();
		this->m_nbrmat = rhs.m_nbrmat;
		for (int i = 0; i < 4; i++)
			this->m_inv[i] = rhs.m_inv[i];
	}
	return *this;
}

std::ostream &			operator<<(std::ostream &o, ICharacter const &i)
{
	o << "This is the character named " << i.getName() << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Character::equip(AMateria* m)
{
	if (this->m_nbrmat < 4)
	{
		//std::cout << "Equiping: " << m->getType() << std::endl;
		for (int i = 0; i < 4; i++)
		{
			if (this->m_inv[i] == NULL)
			{
				this->m_inv[i] = m;
				this->m_nbrmat++;
				return ;
			}
		}
	}
}

void				Character::unequip(int idx)
{
	if (this->m_inv[idx] != NULL && this->m_nbrmat)
	{
		this->m_inv[idx] = NULL;
		this->m_nbrmat--;
	}
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4)
		if (this->m_inv[idx] != NULL)
			this->m_inv[idx]->use(target);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &	Character::getName() const
{
	return (this->m_name);
}

/* ************************************************************************** */