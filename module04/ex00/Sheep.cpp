/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sheep.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 18:43:15 by nforay            #+#    #+#             */
/*   Updated: 2021/01/25 19:23:48 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sheep.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Sheep::Sheep(std::string const &name) : Peon(name)
{
	std::cout << "Beeeeeh!" << std::endl;
}

Sheep::Sheep(Sheep const &src) : Peon(src.GetName())
{
	std::cout << "Beeeeeh!" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Sheep::~Sheep()
{
	std::cout << "Bé." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Sheep &				Sheep::operator=(Sheep const &rhs)
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return *this;
}

std::ostream &			operator<<(std::ostream &o, Sheep const &i)
{
	o << i.GetName() << ": Beeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeh!" << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void			Sheep::getPolymorphed() const
{
	std::cout << "Polymorph failed on " << this->GetName() << " it's already a sheep!" << std::endl;
}

/* ************************************************************************** */