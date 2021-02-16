/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 18:38:03 by nforay            #+#    #+#             */
/*   Updated: 2021/02/16 20:05:35 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	functptr[0] = SCForm;
	functptr[1] = RRForm;
	functptr[2] = PPForm;
	m_names[0] = "shrubbery request";
	m_names[1] = "robotomy request";
	m_names[2] = "presidential request";
}

Intern::Intern(const Intern &src)
{
	(void)src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return *this;
}

std::ostream &			operator<<(std::ostream &o, Intern const &i)
{
	(void)i;
	o << "This is an intern.";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Form 	*Intern::SCForm(std::string const &target)
{
	return (new ShrubberyCreationForm(target));
}

Form 	*Intern::RRForm(std::string const &target)
{
	return (new RobotomyRequestForm(target));
}

Form 	*Intern::PPForm(std::string const &target)
{
	return (new PresidentialPardonForm(target));
}

Form*	Intern::makeForm(std::string const &name, std::string const &target)
{
	for (int i = 0; i < 3; i++)
	{
		if (name == this->m_names[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return ((functptr[i])(target));
		}
	}
	throw Intern::UnknownFormException();
}

/* ************************************************************************** */