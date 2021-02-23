/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 21:56:35 by nforay            #+#    #+#             */
/*   Updated: 2021/02/23 09:38:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <ctime>
#include <cstdlib>

int	main(void)
{
	srand(time(NULL));
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "----------\nMaking a new Span with 20000 random numbers." << std::endl;
	Span bigsp = Span(20000);
	for (int i = 0; i < 20000; i++)
		bigsp.addNumber(std::rand());
	std::cout << "Shortest Span: " << bigsp.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << bigsp.longestSpan() << std::endl;
	std::cout << "Making a new Span with 100 numbers using range of iterators [0, 99] from previous Span, not making thousands of calls to addNumber." << std::endl;
	Span smallsp = Span(100);
	smallsp.addNumbers(bigsp.GetVector());
	std::cout << "It looks like this:\n[";
	for (int i = 0; i < 99; i++)
		std::cout << smallsp.GetVector()[i] << ", ";
	std::cout << smallsp.GetVector()[99] << "]" << std::endl;
	std::cout << "Shortest Span: " << smallsp.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << smallsp.longestSpan() << std::endl;
	std::cout << "---------\nMaking a Span with 3 numbers capacity." << std::endl;
	Span badsp = Span(3);
	try
	{
		std::cout << "Trying to get the shortestSpan..." << std::endl;
		std::cout << "Shortest Span: " << badsp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Adding 1 number (1)." << std::endl;
	badsp.addNumber(1);
	try
	{
		std::cout << "Trying to get the shortestSpan..." << std::endl;
		std::cout << "Shortest Span: " << badsp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "Adding another number (43)." << std::endl;
	badsp.addNumber(43);
	std::cout << "Shortest Span: " << badsp.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << badsp.longestSpan() << std::endl;
	std::cout << "Adding another number (100)." << std::endl;
	badsp.addNumber(100);
	std::cout << "Shortest Span: " << badsp.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << badsp.longestSpan() << std::endl;
	try
	{
		std::cout << "Trying to add another number..." << std::endl;
		badsp.addNumber(420);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
