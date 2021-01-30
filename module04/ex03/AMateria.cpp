/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 19:26:59 by nforay            #+#    #+#             */
/*   Updated: 2021/01/29 20:32:07 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria(std::string const & type) : _xp(0), _type(type)
{
	//std::cout << "AMateria constructor called with type " << _type << std::endl;
}

AMateria::AMateria(const AMateria &src) : _xp(src.getXP()), _type(src.getType())
{
	//std::cout << "AMateria copy constructor called, type: " << _type << " xp: " << _xp << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	//std::cout << "AMateria destructor called for type: " << _type << " xp: " << _xp << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &				AMateria::operator=( AMateria const & rhs )
{
	if (this != &rhs)
	{
		this->_xp = rhs.getXP();
		this->_type = rhs.getType();
	}
	return *this;
}

std::ostream &			operator<<(std::ostream &o, AMateria const &i)
{
	o << "Materia type is:" << i.getType() << " XP:" << i.getXP() << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void				AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &	AMateria::getType() const
{
	return (this->_type);
}

unsigned int		AMateria::getXP() const
{
	return (this->_xp);
}

/* ************************************************************************** */