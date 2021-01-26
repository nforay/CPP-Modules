/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 00:54:11 by nforay            #+#    #+#             */
/*   Updated: 2021/01/26 16:54:47 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Enemy::Enemy(int hp, std::string const &type) : m_hp(hp), m_type(type)
{
}

Enemy::Enemy(const Enemy &src) : m_hp(src.m_hp), m_type(src.m_type)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Enemy::~Enemy()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Enemy &				Enemy::operator=(Enemy const &rhs)
{
	if (this != &rhs)
	{
		this->m_type = rhs.m_type;
		this->m_hp = rhs.m_hp;
	}
	return *this;
}

std::ostream &		operator<<(std::ostream &o, Enemy const &i)
{
	o << "Type=\"" << i.getType() << "\" HP=" << i.getHP() << std::endl;
	return o;
}

void				Enemy::takeDamage(int amount)
{
	this->m_hp -= amount;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string			Enemy::getType() const
{
	return (this->m_type);
}

int					Enemy::getHP() const
{
	return (this->m_hp);
}

/* ************************************************************************** */