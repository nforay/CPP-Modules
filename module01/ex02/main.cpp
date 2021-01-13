/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 01:14:11 by nforay            #+#    #+#             */
/*   Updated: 2021/01/13 02:18:59 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
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
	Zombie *zombie;

	Spawner.setZombieType("runner");
	zombie = Spawner.randomChump();
	zombie->announce();
	delete zombie;
	return (0);
}