/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 18:12:29 by nforay            #+#    #+#             */
/*   Updated: 2021/01/08 20:34:34 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Pony::Pony(std::string p1, int p2) : name(p1), age(p2)
{
	std::cout << "Constructor Called for " << name  << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Pony::~Pony()
{
	std::cout << "Destructor Called for " << name  << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void Pony::print_infos(void) const
{
	std::cout << "Pony details: name=" << name << " age=" << age << std::endl;
}

/* ************************************************************************** */