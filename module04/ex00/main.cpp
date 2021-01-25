/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 18:34:41 by nforay            #+#    #+#             */
/*   Updated: 2021/01/25 19:13:11 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Sheep.hpp"

int	main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Sheep snow("Snow");

	std::cout << robert << jim << joe << snow;

	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(snow);
	return 0;
}