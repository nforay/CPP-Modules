/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 02:36:01 by nforay            #+#    #+#             */
/*   Updated: 2021/01/19 16:23:58 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <math.h>

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

Fixed::Fixed( const float src )
{
	std::cout << "Float constructor called" << std::endl;
	this->n = (int)(roundf(src * (1 << this->nbits)));
}

Fixed::Fixed( const int src )
{
	std::cout << "Int constructor called" << std::endl;
	this->n = (src << this->nbits);
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
	o << i.toFloat();
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
	return (this->n);
}

float			Fixed::toFloat(void) const
{
	return (this->n / (float)(1 << this->nbits));
}

int				Fixed::toInt(void) const
{
	return (this->n >> this->nbits);
}

/* ************************************************************************** */