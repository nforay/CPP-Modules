/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 01:14:11 by nforay            #+#    #+#             */
/*   Updated: 2021/01/12 02:03:32 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

void	SpawnBob()
{
	Zombie Bob = Zombie("Bob", "stack");
	Bob.announce();
}

int		main(void)
{
	SpawnBob();
	ZombieEvent Spawner;
	Zombie *zombies[3];

	Spawner.setZombieType("runner");
	for (int i = 0; i < 3; i++)
		zombies[i] = Spawner.randomChump();
	for (int i = 0; i < 3; i++)
		zombies[i]->announce();
	for (int i = 0; i < 3; i++)
		delete zombies[i];
	return (0);
}