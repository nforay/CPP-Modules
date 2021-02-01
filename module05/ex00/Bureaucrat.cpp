/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 16:38:33 by nforay            #+#    #+#             */
/*   Updated: 2021/02/01 18:43:53 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(std::string const & name, int const grade) : m_name(name), m_grade(grade)
{
	std::cout << "Bureaucrat " << m_name << " Constructor Called" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooHighException(*this);
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException(*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : m_name(src.m_name), m_grade(src.m_grade)
{
	std::cout << "Bureaucrat " << m_name << " Copy-Constructor Called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << m_name << " destructor Called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if ( this != &rhs )
	{
		this->m_name = rhs.getName();
		this->m_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &			operator<<(std::ostream &o, Bureaucrat const &i)
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void				Bureaucrat::increment()
{
	if (this->m_grade == 1)
		throw Bureaucrat::GradeTooHighException(*this);
	this->m_grade--;
}

void				Bureaucrat::decrement()
{
	if (this->m_grade == 150)
		throw Bureaucrat::GradeTooLowException(*this);
	this->m_grade--;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &	Bureaucrat::getName() const
{
	return (this->m_name);
}

int					Bureaucrat::getGrade() const
{
	return (this->m_grade);
}

/* ************************************************************************** */