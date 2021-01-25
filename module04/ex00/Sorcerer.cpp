/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 18:35:40 by nforay            #+#    #+#             */
/*   Updated: 2021/01/25 19:21:01 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Sorcerer::Sorcerer(std::string const &name, std::string const &title) : m_name(name), m_title(title)
{
	std::cout << m_name << ", " << m_title <<", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src) : m_name(src.m_name), m_title(src.m_title)
{
	std::cout << m_name << ", " << m_title <<", is born!" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Sorcerer::~Sorcerer()
{
	std::cout << m_name << ", " << m_title <<" is dead. Consequences will never be the same!" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Sorcerer &				Sorcerer::operator=(Sorcerer const &rhs)
{
	if ( this != &rhs )
	{
		this->m_name = rhs.m_name;
		this->m_title = rhs.m_title;
	}
	return *this;
}

std::ostream &			operator<<(std::ostream &o, Sorcerer const &rhs)
{
	o << "I am " << rhs.GetName() << ", " << rhs.GetTitle() << ", and I like ponies!" << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void				Sorcerer::polymorph(Victim const &target) const
{
	target.getPolymorphed();
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string 		Sorcerer::GetName() const
{
	return (m_name);
}

std::string 		Sorcerer::GetTitle() const
{
	return (m_title);
}

/* ************************************************************************** */