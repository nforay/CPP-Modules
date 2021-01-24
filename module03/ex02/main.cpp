/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 18:18:14 by nforay            #+#    #+#             */
/*   Updated: 2021/01/22 20:44:11 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <cstdlib>

int main(void)
{
	FragTrap	clap = FragTrap("Fragtrap");
	ScavTrap	scav = ScavTrap("Scav-piège");

	std::srand(time(0));
	clap.meleeAttack(scav.GetName());
	scav.takeDamage(30);
	scav.meleeAttack(clap.GetName());
	clap.takeDamage(20);
	clap.rangedAttack(scav.GetName());
	scav.takeDamage(20);
	scav.meleeAttack(clap.GetName());
	clap.takeDamage(15);
	clap.beRepaired(75);
	scav.beRepaired(50);
	clap.vaulthunter_dot_exe(scav.GetName());
	scav.challengeNewcomer(clap.GetName());
}