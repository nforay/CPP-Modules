/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:08:56 by nforay            #+#    #+#             */
/*   Updated: 2021/01/29 20:32:43 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure() : AMateria("cure")
{
	//std::cout << "Ice constructor called" << std::endl;
}

Cure::Cure(const Cure &src) : AMateria("cure")
{
	//std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	//std::cout << "Ice destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &				Cure::operator=( Cure const & rhs )
{
	if (this != &rhs)
	{
		AMateria::operator=(rhs);
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AMateria*	Cure::clone() const
{
	AMateria* clone = new Cure();

	*clone = *this;
	return (clone);
}

void		Cure::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

/* ************************************************************************** */