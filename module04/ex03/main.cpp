/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 18:40:51 by nforay            #+#    #+#             */
/*   Updated: 2021/01/30 16:28:47 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	AMateria* tmp2;
	tmp2 = tmp->clone();
	std::cout << "Teaching a copy of my Cure to bob and using it on himself." << std::endl;
	bob->equip(tmp2);
	bob->use(0, *bob);
	std::cout << "This is my Cure Materia:" << std::endl;
	std::cout << *tmp;
	std::cout << "This is bob's Cure Materia, it now have higher XP:" << std::endl;
	std::cout << *tmp2;
	std::cout << "Bob forgets how to use Cure but try to use it anyway:" << std::endl;
	bob->unequip(0);
	bob->use(0, *bob);
	std::cout << "* Nothing happened *" << std::endl;

	delete tmp2;

	delete bob;
	delete me;
	delete src;

	return 0;
}