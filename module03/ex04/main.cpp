/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 18:18:14 by nforay            #+#    #+#             */
/*   Updated: 2021/01/24 16:39:36 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperTrap.hpp"
#include <cstdlib>

int main(void)
{
	SuperTrap	super = SuperTrap("Supertrap");

	std::srand(time(0));
	super.meleeAttack("Bandit");
	super.rangedAttack("Bandit");
	super.takeDamage(50);
	std::cout << super;
	super.beRepaired(60);
	std::cout << super;
	super.vaulthunter_dot_exe("Badass Bandit");
	FragTrap	frag = FragTrap("Fragtrap");
	super.ninjaShoebox(frag);
	std::cout << super;
}