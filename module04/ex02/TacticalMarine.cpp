/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:34:30 by nforay            #+#    #+#             */
/*   Updated: 2021/01/27 18:12:46 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine( const TacticalMarine & src )
{
	if (this == &src)
		std::cout << "Tactical Marine ready for battle!" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

TacticalMarine &				TacticalMarine::operator=( TacticalMarine const & rhs )
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

ISpaceMarine*	TacticalMarine::clone() const
{
	ISpaceMarine* marine = new TacticalMarine(*this);

	return (marine);
}

void			TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!" << std::endl;
}

void			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

/* ************************************************************************** */