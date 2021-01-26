/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 19:52:50 by nforay            #+#    #+#             */
/*   Updated: 2021/01/26 16:53:25 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << "--------------------------------" << std::endl;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	Enemy* c = new SuperMutant();
	me->attack(c);
	std::cout << *me;
	std::cout << *c;
	me->attack(c);
	std::cout << *me;
	me->equip(pf);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;

	return 0;
}