/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 18:38:04 by nforay            #+#    #+#             */
/*   Updated: 2021/02/04 14:25:38 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{

	public:

		Intern();
		Intern(Intern const &src);
		~Intern();

		Intern &		operator=(Intern const &rhs);

		Form	*makeForm(std::string const &name, std::string const &target);

		class UnknownFormException : public std::exception
		{
			public:
				UnknownFormException() : m_message("Exception: Unknown form request.") {}
				virtual ~UnknownFormException() throw() {return ;}
				virtual const char* what() const throw() {return m_message.c_str();}
			
			private:
				std::string const	m_message;
		};

	private:

		std::string 			m_names[3];
		Form*					(*functptr[3])(std::string const &target);

		static Form 	*SCForm(std::string const &target);
		static Form 	*RRForm(std::string const &target);
		static Form 	*PPForm(std::string const &target);

};

std::ostream &			operator<<(std::ostream &o, Intern const &i);

#endif /* ********************************************************** INTERN_H */