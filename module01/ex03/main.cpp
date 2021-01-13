/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 01:14:11 by nforay            #+#    #+#             */
/*   Updated: 2021/01/13 18:53:39 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>

void	another_horde()
{
	ZombieHorde Horde2(2);

	Horde2.announce();
}

int		main(void)
{
	ZombieHorde Horde(4);

	Horde.announce();
	std::cout << "Entering another_horde()" << std::endl;
	another_horde();
	std::cout << "Back to main()" << std::endl;
	return (0);
}