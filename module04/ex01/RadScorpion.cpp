/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:09:40 by nforay            #+#    #+#             */
/*   Updated: 2021/01/26 16:53:16 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &src) : Enemy(src.getHP(),src.getType())
{
	std::cout << "* click click click *" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

void						RadScorpion::takeDamage(int amount)
{
	Enemy::takeDamage(amount);
}

/* ************************************************************************** */