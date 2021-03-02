/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 21:56:44 by nforay            #+#    #+#             */
/*   Updated: 2021/03/02 15:08:03 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <exception>
# include <iterator>
# include <algorithm>
# include <vector>

class Span
{

	public:

		Span(unsigned int n);
		Span(Span const &src);
		~Span();

		Span &		operator=(Span const &rhs);

		void					addNumber(int number);
		void					addNumbers(std::vector<int>const &src);

		int						shortestSpan(void);
		int						longestSpan(void);
		unsigned int			GetNbrInts(void) const;
		std::vector<int>const &	GetVector(void) const;

		class NotEnoughException : public std::exception
		{
			public:
				NotEnoughException(void) : m_message("Exception: not enough numbers.") {}
				virtual ~NotEnoughException() throw() {return ;}
				virtual const char* what() const throw() {return m_message.c_str();}
			
			private:
				std::string const	m_message;
		};

		class IsFullException : public std::exception
		{
			public:
				IsFullException(void) : m_message("Exception: Span is Full.") {}
				virtual ~IsFullException() throw() {return ;}
				virtual const char* what() const throw() {return m_message.c_str();}
			
			private:
				std::string const	m_message;
		};

	private:

		Span(void) {}

		unsigned int		m_nbrints;
		std::vector<int>	m_ints;

};

#endif /* ************************************************************ SPAN_H */
