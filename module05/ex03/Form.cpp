/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 16:17:24 by nforay            #+#    #+#             */
/*   Updated: 2021/02/03 18:15:56 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string const & name, int const gradew, int const gradex) : m_name(name), m_signed(0), m_gradew(gradew), m_gradex(gradex)
{
	std::cout << "Form " << m_name << " Constructor Called" << std::endl;
	if (gradew > 150 || gradex > 150)
		throw Form::GradeTooHighException(*this);
	if (gradew < 1 || gradex < 1)
		throw Form::GradeTooLowException(*this);
}

Form::Form(const Form &src) : m_name(src.m_name), m_signed(src.m_signed), m_gradew(src.m_gradew), m_gradex(src.m_gradex)
{
	std::cout << "Form " << m_name << " Copy Constructor Called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	std::cout << "Form " << m_name << " destructor Called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		this->m_signed = rhs.getSigned();
	}
	return *this;
}

std::ostream &			operator<<(std::ostream &o, Form const &i)
{
	o << "|Form: \"" << i.getName() << "\"|signed: " << i.getSigned() << "|grade Write: " << i.getGradeW() << "|grade Execute: " << i.getGradeX() << "|";
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void				Form::beSigned(Bureaucrat const &rhs)
{
	rhs.signForm(*this);
	if (rhs.getGrade() > this->getGradeW())
		throw Form::GradeTooLowException(*this);
	this->m_signed = 1;
}

void				Form::checkExec(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw Form::NotSignedException(*this);
	if (executor.getGrade() > this->getGradeX())
		throw Form::GradeTooLowException(*this);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &	Form::getName() const
{
	return (this->m_name);
}

int 				Form::getSigned() const
{
	return (this->m_signed);
}

int 				Form::getGradeW() const
{
	return (this->m_gradew);
}

int 				Form::getGradeX() const
{
	return (this->m_gradex);
}

/* ************************************************************************** */