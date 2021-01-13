/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:03:48 by nforay            #+#    #+#             */
/*   Updated: 2021/01/13 18:39:53 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ZombieHorde::ZombieHorde(unsigned int const n) : m_nzombies(n)
{
	std::cout << "Constructor Called for ZombieHorde" << std::endl;
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
	std::srand(std::time(0));
	m_zombies = new Zombie[m_nzombies]();
	for (unsigned int i = 0; i < m_nzombies; i++)
		m_zombies[i].setAttributes(names_pool[std::rand() % 10], "Horde");
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ZombieHorde::~ZombieHorde()
{
	std::cout << "Destructor Called for ZombieHorde" << std::endl;
	delete[] m_zombies;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	ZombieHorde::announce() const
{
	for (unsigned int i = 0; i < m_nzombies; i++)
		m_zombies[i].announce();
}

/* ************************************************************************** */