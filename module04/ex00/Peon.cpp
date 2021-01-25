/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 18:35:57 by nforay            #+#    #+#             */
/*   Updated: 2021/01/25 19:22:47 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Peon::Peon(std::string const &name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &src) : Victim(src.GetName())
{
	std::cout << "Zog zog." << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Peon &				Peon::operator=(Peon const &rhs)
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

void			Peon::getPolymorphed() const
{
	std::cout << this->GetName() << " has been turned into a pink pony!" << std::endl;
}

/* ************************************************************************** */