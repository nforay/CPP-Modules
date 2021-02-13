/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 15:56:37 by nforay            #+#    #+#             */
/*   Updated: 2021/02/13 18:17:11 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <iomanip>

int	main(void)
{
	Array<float> a(5);
	std::cout << "Checking default Initialization for length [5] float Array:" << std::endl;
	std::cout << std::setprecision(1) << std::fixed << a << std::endl;
	std::cout << "changing default values..." << std::endl;
	for (int i = 0; i < 5; i++)
		a[i] = i;
	std::cout << a << "\n" <<std::endl;
	std::cout << "------------------------------------------------------------" << std::endl;
	Array<int> b(0);
	std::cout << "Checking empty int Array:" << std::endl;
	std::cout << b << std::endl;
	std::cout << "Trying to change value at [0]:" << std::endl;
	try
	{
		b[0] = 42;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}
	std::cout << "------------------------------------------------------------" << std::endl;
	Array<size_t> c(10);
	std::cout << "Checking default Initialization for length [10] size_t Array:" << std::endl;
	std::cout << c << std::endl;
	std::cout << "changing default values..." << std::endl;
	for (int i = 0; i < 10; i++)
		c[i] = i * 10 + 2;
	std::cout << c << "\n" << std::endl;

	Array<std::string> d(5);
	std::cout << "Checking default Initialization for length [5] string Array:" << std::endl;
	std::cout << d << std::endl;
	std::cout << "changing default values..." << std::endl;
	d[0] = "Woow";
	d[1] = "everything";
	d[2] = "works";
	d[3] = "as";
	d[4] = "expected !";
	std::cout << d << "\n" << std::endl;
	std::cout << "------------------------------------------------------------" << std::endl;
	Array<char> e(5);
	std::cout << "Checking default Initialization for length [5] char Array:" << std::endl;
	std::cout << e << std::endl;
	std::cout << "changing default values..." << std::endl;
	e[0] = 'H';
	e[1] = 'e';
	e[2] = 'l';
	e[3] = 'l';
	e[4] = 'o';
	std::cout << e << std::endl;
	std::cout << "Trying to print value at index [42]:" << std::endl;
	try
	{
		std::cout << e[42] << "\n" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Trying to edit value at index [42]:" << std::endl;
	try
	{
		e[42] = '*';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n' << std::endl;
	}
	std::cout << "------------------------------------------------------------" << std::endl;
	std::cout << "Original Char Array:" << std::endl;
	std::cout << &e << ": " << e << std::endl;
	std::cout << "Creating char Array with Copy-Constructor:" << std::endl;
	Array<char> ee(e);
	std::cout << &ee << ": " << ee << std::endl;
	std::cout << "Creating empty char array:" << std::endl;
	Array<char> eee(0);
	std::cout << &eee << ": " << eee << std::endl;
	std::cout << "Using operator = on empty array:" << std::endl;
	eee = e;
	std::cout << &eee << ": " << eee << std::endl;
	return 0;
}
