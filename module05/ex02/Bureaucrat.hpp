/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 16:38:34 by nforay            #+#    #+#             */
/*   Updated: 2021/02/03 17:46:04 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{

	public:

		Bureaucrat(std::string const &name, int const grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat();

		Bureaucrat &		operator=(Bureaucrat const &rhs);

		std::string const &	getName() const;
		int					getGrade() const;
		void				increment();
		void				decrement();
		void				signForm(Form const &rhs) const;
		void				executeForm(Form const &form) const;

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(Bureaucrat const &rhs) : m_message(rhs.getName() + " Exception: grade's too high.") {}
				virtual ~GradeTooHighException() throw() {return ;}
				virtual const char* what() const throw() {return m_message.c_str();}
			
			private:
				std::string const	m_message;
		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(Bureaucrat const &rhs) : m_message(rhs.getName() + " Exception: grade's too low.") {}
				virtual ~GradeTooLowException() throw() {return ;}
				virtual const char* what() const throw() {return m_message.c_str();}
			
			private:
				std::string const	m_message;
		};

	private:

		std::string	m_name;
		int			m_grade;

};

std::ostream &			operator<<(std::ostream &o, Bureaucrat const &i);

#endif /* ****************************************************** BUREAUCRAT_H */