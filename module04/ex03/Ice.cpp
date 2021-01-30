/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:07:12 by nforay            #+#    #+#             */
/*   Updated: 2021/01/29 20:32:38 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Ice::Ice() : AMateria("ice")
{
	//std::cout << "Ice constructor called" << std::endl;
}

Ice::Ice(const Ice &src) : AMateria("ice")
{
	//std::cout << "Ice copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Ice::~Ice()
{
	//std::cout << "Ice destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Ice &				Ice::operator=( Ice const & rhs )
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

AMateria*	Ice::clone() const
{
	AMateria* clone = new Ice();

	*clone = *this;
	return (clone);
}

void		Ice::use(ICharacter& target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

/* ************************************************************************** */