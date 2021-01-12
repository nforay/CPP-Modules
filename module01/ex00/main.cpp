/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 20:35:07 by nforay            #+#    #+#             */
/*   Updated: 2021/01/08 20:58:44 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

static void	ponyOnTheHeap(void)
{
	std::cout << "Entering ponyOnTheHeap" << std::endl;
	Pony	*test2 = new Pony("Heap", 24);
	test2->print_infos();
	delete test2;
	std::cout << "Leaving ponyOnTheHeap" << std::endl;
}

static void	ponyOnTheStack(void)
{
	std::cout << "Entering ponyOnTheStack" << std::endl;
	Pony	test = Pony("Stack", 20);
	test.print_infos();
	std::cout << "Leaving ponyOnTheStack" << std::endl;
}

int			main(void)
{
	std::cout << "Entering Main" << std::endl;
	ponyOnTheStack();
	ponyOnTheHeap();
	std::cout << "Leaving Main" << std::endl;
}