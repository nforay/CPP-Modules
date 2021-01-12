/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:04:00 by nforay            #+#    #+#             */
/*   Updated: 2021/01/11 22:20:03 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Zombie::Zombie()
{
	std::cout << "Constructor Called for Zombie" << std::endl;
}

Zombie::Zombie(std::string p_name, std::string p_type) : type(p_type), name(p_name)
{
	std::cout << "Constructor Called for Zombie (" << name << ")" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Zombie::~Zombie()
{
	std::cout << "Destructor Called for Zombie (" << name << ")" << std::endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Zombie::announce() const
{
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss..." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */