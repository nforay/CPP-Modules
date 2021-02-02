/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:09:30 by nforay            #+#    #+#             */
/*   Updated: 2021/02/02 17:27:40 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main(void)
{
	Bureaucrat	mac("Macaron", 1);
	Bureaucrat	jc("JeanCastex", 2);

	Form		conf("Confinement", 1, 1);

	try
	{
		Form	nope("Norminet for president", 42, 4242);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << jc << std::endl;

	try
	{
		conf.beSigned(jc);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << conf << std::endl;

	try
	{
		jc.increment();
		std::cout << jc << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		conf.beSigned(jc);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << conf << std::endl;

	return (0);
}