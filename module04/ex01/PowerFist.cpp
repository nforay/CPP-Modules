/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 21:08:23 by nforay            #+#    #+#             */
/*   Updated: 2021/01/26 16:25:35 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
}

PowerFist::PowerFist(const PowerFist &src) : AWeapon(src.getName(), src.getAPCost(), src.getDamage())
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PowerFist::~PowerFist()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void				PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

/* ************************************************************************** */