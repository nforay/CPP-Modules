/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 15:03:33 by nforay            #+#    #+#             */
/*   Updated: 2021/02/10 03:53:59 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Base
{
	public:
		Base() {};
		virtual ~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate(void)
{
	switch (std::rand() % 3)
	{
	case 0:
		return (new A);
	case 1:
		return (new B);
	default:
		return (new C);
	}
}

void identify_from_pointer(Base *p)
{
	try
	{
		A *a = dynamic_cast<A*>(p);
		if (a)
			std::cout << "A" << std::endl;
	}
	catch(const std::exception &e) {}
	try
	{
		B *b = dynamic_cast<B*>(p);
		if (b)
			std::cout << "B" << std::endl;
	}
	catch(const std::exception &e) {}
	try
	{
		C *c = dynamic_cast<C*>(p);
		if (c)
			std::cout << "C" << std::endl;
	}
	catch(const std::exception &e) {}
}

void identify_from_reference(Base &p)
{
	try
	{
		A a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(const std::exception &e) {}
	try
	{
		B b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch(const std::exception &e) {}
	try
	{
		C c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch(const std::exception &e) {}
}

int	main(void)
{
	std::srand(std::time(NULL));

	std::cout << "Generating random pointer..." << std::endl;
	Base *randomBase = generate();
	std::cout << "Identifying from pointer:" << std::endl;
	identify_from_pointer(randomBase);
	std::cout << "Identifying from reference:" << std::endl;
	identify_from_reference(*randomBase);
	delete randomBase;
}