/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 02:36:01 by nforay            #+#    #+#             */
/*   Updated: 2021/01/16 03:31:41 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed(void) : n(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const Fixed & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &			Fixed::operator=( Fixed const & rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->n = rhs.getRawBits();
	}

	return *this;
}

std::ostream &	operator<<( std::ostream & o, Fixed const & i )
{
	o << i.getRawBits();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void			Fixed::setRawBits(int const raw)
{
	this->n = raw;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int				Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->n);
}

/* ************************************************************************** */