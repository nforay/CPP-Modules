/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/02 16:17:24 by nforay            #+#    #+#             */
/*   Updated: 2021/02/03 18:30:13 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

	public:

		Form(std::string const & name, int const gradew, int const gradex);
		Form(Form const &src);
		virtual ~Form();

		Form &		operator=(Form const &rhs);

		std::string const &	getName() const;
		int 				getSigned() const;
		int 				getGradeW() const;
		int 				getGradeX() const;
		void				beSigned(Bureaucrat const &rhs);
		void				checkExec(Bureaucrat const &executor) const;
		virtual void		execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(Form const &rhs) : m_message(rhs.getName() + " Exception: grade's too high.") {}
				virtual ~GradeTooHighException() throw() {return ;}
				virtual const char* what() const throw() {return m_message.c_str();}
			
			private:
				std::string const	m_message;
		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(Form const &rhs) : m_message(rhs.getName() + " Exception: grade's too low.") {}
				virtual ~GradeTooLowException() throw() {return ;}
				virtual const char* what() const throw() {return m_message.c_str();}
			
			private:
				std::string const	m_message;
		};

		class NotSignedException : public std::exception
		{
			public:
				NotSignedException(Form const &rhs) : m_message(rhs.getName() + " Exception: not signed.") {}
				virtual ~NotSignedException() throw() {return ;}
				virtual const char* what() const throw() {return m_message.c_str();}
			
			private:
				std::string const	m_message;
		};

	private:

		std::string const	m_name;
		int					m_signed;
		int	const			m_gradew;
		int	const			m_gradex;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */