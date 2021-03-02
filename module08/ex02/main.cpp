/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 23:44:31 by nforay            #+#    #+#             */
/*   Updated: 2021/03/02 15:08:01 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iterator>
#include <string>
#include "mutantstack.hpp"

int	main(void)
{
	MutantStack<int>	mstack;

	mstack.push(33);
	mstack.push(84);
	mstack.push(0);

	std::cout << "Top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(83);
	mstack.push(69);
	mstack.push(84);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int>	s(mstack);
	std::cout << "Size: " << s.size() << std::endl;
	MutantStack<char>	c_mstack;
	std::cout << "------------" << std::endl;
	size_t i = s.size();
	while (i--)
	{
		c_mstack.push(s.top());
		s.pop();
	}
	std::cout << "Size: " << c_mstack.size() << std::endl;
	MutantStack<char>::iterator c_itb = c_mstack.begin();
	MutantStack<char>::iterator c_ite = c_mstack.end();
	while(c_itb != c_ite)
	{
		std::cout << *c_itb << std::endl;
		++c_itb;
	}

	return 0;
}