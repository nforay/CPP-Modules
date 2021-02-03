/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:09:30 by nforay            #+#    #+#             */
/*   Updated: 2021/02/03 18:17:21 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>

int	main(void)
{
	Bureaucrat	mac("Macaron", 1);
	Bureaucrat	jc("JeanCastex", 70);

	ShrubberyCreationForm	bois("Reboisement");
	RobotomyRequestForm		robot("DeusEx");
	PresidentialPardonForm	prumt("Toupine");

	std::srand(time(0));

	try
	{
		bois.beSigned(jc);
		jc.executeForm(bois);
		robot.beSigned(jc);
		jc.executeForm(robot);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		mac.executeForm(robot);
		prumt.beSigned(mac);
		mac.executeForm(prumt);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}