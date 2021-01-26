/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 21:08:14 by nforay            #+#    #+#             */
/*   Updated: 2021/01/26 16:25:44 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src) : AWeapon(src.getName(), src.getAPCost(), src.getDamage())
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PlasmaRifle::~PlasmaRifle()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

void					PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

/* ************************************************************************** */