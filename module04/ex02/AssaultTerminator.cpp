/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:29:07 by nforay            #+#    #+#             */
/*   Updated: 2021/01/27 18:29:51 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &src)
{
	if (this == &src)
		std::cout << "* teleports from space *" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back..." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AssaultTerminator &				AssaultTerminator::operator=(AssaultTerminator const &rhs)
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

ISpaceMarine*	AssaultTerminator::clone() const
{
	ISpaceMarine* unit = new AssaultTerminator(*this);
	return (unit);
}

void			AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void			AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

void			AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}

/* ************************************************************************** */