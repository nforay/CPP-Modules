/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:09:30 by nforay            #+#    #+#             */
/*   Updated: 2021/02/16 20:11:22 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <cstdlib>

int	main(void)
{
	Bureaucrat	mac("Macaron", 1);
	Intern		lestagiaire;

	Form*		scf;

	std::srand(time(0));

	try
	{
		scf = lestagiaire.makeForm("shrubbery request", "CentralPark");
		scf->beSigned(mac);
		mac.executeForm(*scf);
		delete scf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		scf = lestagiaire.makeForm("robotomy request", "Prumt");
		scf->beSigned(mac);
		mac.executeForm(*scf);
		delete scf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		scf = lestagiaire.makeForm("presidential request", "Norminet");
		scf->beSigned(mac);
		mac.executeForm(*scf);
		delete scf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		scf = lestagiaire.makeForm("norminet request", "42");
		scf->beSigned(mac);
		mac.executeForm(*scf);
		delete scf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}