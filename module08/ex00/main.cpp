/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 18:24:19 by nforay            #+#    #+#             */
/*   Updated: 2021/02/14 20:34:30 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#include <ctime>
#include "easyfind.hpp"

int	main(void)
{
	std::srand(time(NULL));
	std::vector<int>			vec(5);

	for (size_t i = 0; i < vec.size(); i++)
	{
		vec[i] = (std::rand() % 5);
	}
	std::cout << "Looking for the first occurence of 1 inside <vector>..." << std::endl;
	try
	{
		std::vector<int>::iterator	v_iter;
		v_iter = easyfind(vec, 1);
		std::cout << "Found " << *v_iter << " at position: " << v_iter - vec.begin() << std::endl;
		for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); ++i)
		{
			if (i == vec.begin())
				std::cout << "[" << *i;
			else
			{
				std::cout << ", " << *i;
			}
		}
		std::cout << "]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Not Found." << std::endl;
	}
	std::list<int>				lst;
	for (size_t i = 0; i < 5; i++)
		lst.push_back((std::rand() % 5));
	std::cout << "Looking for the first occurence of 1 inside <list>..." << std::endl;
	try
	{
		std::list<int>::iterator	l_iter;
		l_iter = easyfind(lst, 1);
		std::cout << "Found:\n[";
		for (std::list<int>::const_iterator j = lst.begin(); j != lst.end(); ++j)
		{
			if (l_iter == lst.begin() && j == l_iter)
				std::cout << "\e[31m" << *j << "\e[39m";
			else if (j == lst.begin())
				std::cout << *j;
			else if (j == l_iter)
				std::cout << ", \e[31m" << *j << "\e[39m";
			else
			{
				std::cout << ", " << *j;
			}
		}
		std::cout << "]" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Not Found." << std::endl;
	}

	return (0);
}