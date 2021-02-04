/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 01:14:11 by nforay            #+#    #+#             */
/*   Updated: 2021/02/04 17:09:29 by nforay           ###   ########.fr       */
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
	delete zombie;
	return (0);
}