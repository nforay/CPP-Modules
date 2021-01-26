/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 15:10:45 by nforay            #+#    #+#             */
/*   Updated: 2021/01/26 16:53:14 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &src) : Enemy(src.getHP(),src.getType())
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

void						SuperMutant::takeDamage(int amount)
{
	if (amount > 3)
		Enemy::takeDamage(amount - 3);
}

/* ************************************************************************** */