/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/22 18:18:14 by nforay            #+#    #+#             */
/*   Updated: 2021/01/24 16:39:32 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include <cstdlib>

int main(void)
{
	FragTrap	frag = FragTrap("Fragtrap");
	ScavTrap	scav = ScavTrap("Scav-piège");
	NinjaTrap	ninj = NinjaTrap("Ninjtrap");

	std::srand(time(0));
	frag.meleeAttack(scav.GetName());
	scav.takeDamage(30);
	scav.meleeAttack(frag.GetName());
	frag.takeDamage(20);
	frag.rangedAttack(scav.GetName());
	scav.takeDamage(20);
	scav.meleeAttack(frag.GetName());
	frag.takeDamage(15);
	frag.beRepaired(75);
	scav.beRepaired(50);
	frag.vaulthunter_dot_exe(scav.GetName());
	scav.challengeNewcomer(frag.GetName());
	frag.meleeAttack(ninj.GetName());
	ninj.takeDamage(30);
	ninj.meleeAttack(frag.GetName());
	frag.takeDamage(60);
	ninj.beRepaired(100);
	ninj.ninjaShoebox(frag);
	ninj.ninjaShoebox(scav);
	ninj.ninjaShoebox(ninj);
}