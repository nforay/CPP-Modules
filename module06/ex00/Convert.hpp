/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 18:48:47 by nforay            #+#    #+#             */
/*   Updated: 2021/02/07 05:05:20 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Convert
{

	public:

		Convert(std::string const &input);
		Convert(Convert const &src);
		~Convert();

		Convert &		operator=(Convert const &rhs);

		char			getChar() const;
		int				getInt() const;
		float			getFloat() const;
		double			getDouble() const;

		char			getCharFlags() const;
		char			getIntFlags() const;
		char			getFloatFlags() const;
		char			getDoubleFlags() const;

		class NotDisplayableException : public std::exception
		{
			public:
				NotDisplayableException(void) : m_message("Exception: non displayable character was passed.") {}
				virtual ~NotDisplayableException() throw() {return ;}
				virtual const char* what() const throw() {return m_message.c_str();}
			
			private:
				std::string const	m_message;
		};

	private:

		char				m_char;
		char				m_charflags;
		int					m_int;
		char				m_intflags;
		float				m_float;
		char				m_floatflags;
		double				m_double;
		char				m_doubleflags;

		void 				convChar(std::string const &input);
		void 				convDouble(std::string const &input);

};

std::ostream &			operator<<(std::ostream &o, Convert const &i);

#endif /* ********************************************************* CONVERT_H */