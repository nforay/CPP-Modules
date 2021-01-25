/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 18:35:50 by nforay            #+#    #+#             */
/*   Updated: 2021/01/25 19:24:13 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Victim::Victim(std::string const &name) : m_name(name)
{
	std::cout << "Some random victim called " << this->m_name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const &src) : m_name(src.m_name)
{
	std::cout << "Some random victim called " << this->m_name << " just appeared!" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Victim::~Victim()
{
	std::cout << "Victim " << this->m_name << " just died for no apparent reason!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Victim &				Victim::operator=(Victim const & rhs)
{
	if ( this != &rhs )
	{
		this->m_name = rhs.m_name;
	}
	return *this;
}

std::ostream &			operator<<(std::ostream &o, Victim const &rhs)
{
	o << "I'm " << rhs.GetName() << " and I like otters!" << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void			Victim::getPolymorphed() const
{
	std::cout << this->m_name << " has been turned into a cute little sheep!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string		Victim::GetName() const
{
	return (m_name);
}

/* ************************************************************************** */