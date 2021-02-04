/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 17:44:42 by nforay            #+#    #+#             */
/*   Updated: 2021/02/03 18:20:57 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : Form(target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src.getName(), src.getGradeW(), src.getGradeX())
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &				ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs )
{
	if ( this != &rhs )
	{
		*this = rhs;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void		ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	this->checkExec(executor);
	std::ofstream		outputfile;
	const std::string	filename(this->getName() + "_shrubbery");

	outputfile.open(filename.c_str(), std::fstream::out);
	if (outputfile.is_open())
	{
		outputfile << "      ^                          ^      " << std::endl;
		outputfile << "     /|\\            ^           /|\\     " << std::endl;
		outputfile << "    //|\\\\          /|\\         //|\\\\    " << std::endl;
		outputfile << "   ///|\\\\\\        //|\\\\       ///|\\\\\\   " << std::endl;
		outputfile << "  ////|\\\\\\\\      ///|\\\\\\     ////|\\\\\\\\  " << std::endl;
		outputfile << " /////|\\\\\\\\\\    ////|\\\\\\\\   /////|\\\\\\\\\\ " << std::endl;
		outputfile << "      |             |            |      " << std::endl;
		outputfile.close();
	}
}

/* ************************************************************************** */