/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:03:48 by nforay            #+#    #+#             */
/*   Updated: 2021/02/04 17:09:41 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ZombieEvent::ZombieEvent()
{
	std::cout << "Constructor Called for ZombieEvent" << std::endl;
	names_pool[0] = "James";
	names_pool[1] = "John";
	names_pool[2] = "Robert";
	names_pool[3] = "Michael";
	names_pool[4] = "William";
	names_pool[5] = "David";
	names_pool[6] = "Richard";
	names_pool[7] = "Joseph";
	names_pool[8] = "Thomas";
	names_pool[9] = "Charles";
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ZombieEvent::~ZombieEvent()
{
	std::cout << "Destructor Called for ZombieEvent" << std::endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ZombieEvent::setZombieType(std::string p_type)
{
	type = p_type;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Zombie	*ZombieEvent::newZombie(std::string p_name)
{
	Zombie *newzombie;

	newzombie = new Zombie(p_name, type);
	return (newzombie);
}

Zombie	*ZombieEvent::randomChump()
{
	Zombie *newzombie;

	std::srand(std::time(0));
	newzombie = new Zombie(names_pool[std::rand() % 10], type);
	newzombie->announce();
	return (newzombie);
}

/* ************************************************************************** */