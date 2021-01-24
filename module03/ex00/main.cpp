/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:26:50 by nforay            #+#    #+#             */
/*   Updated: 2021/01/22 18:32:40 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <cstdlib>

int main(void)
{
	FragTrap clap = FragTrap("Claptrap");

	std::srand(time(0));
	clap.meleeAttack("Bandit");
	clap.takeDamage(30);
	clap.rangedAttack("Badass Psycho");
	clap.takeDamage(50);
	clap.beRepaired(75);
	clap.vaulthunter_dot_exe("Badass Psycho");
	clap.vaulthunter_dot_exe("Badass Psycho");
	clap.vaulthunter_dot_exe("Badass Psycho");
	clap.vaulthunter_dot_exe("Badass Psycho");
	clap.vaulthunter_dot_exe("Badass Psycho");
}