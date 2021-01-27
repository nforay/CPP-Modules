/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:17:21 by nforay            #+#    #+#             */
/*   Updated: 2021/01/27 18:29:20 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "There are " << vlc->getCount() << " element(s) in the squad." << std::endl;
	std::cout << "Adding NULL..." << std::endl;
	vlc->push(NULL);
	std::cout << "There are " << vlc->getCount() << " element(s) in the squad." << std::endl;
	std::cout << "Adding bob again..." << std::endl;
	vlc->push(bob);
	std::cout << "There are " << vlc->getCount() << " element(s) in the squad." << std::endl;
	std::cout << "Adding a clone from bob..." << std::endl;
	vlc->push(bob->clone());
	std::cout << "There are " << vlc->getCount() << " element(s) in the squad." << std::endl;
	std::cout << "Deleting squad." << std::endl;
	delete vlc;

	return 0;
}