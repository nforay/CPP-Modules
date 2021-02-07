/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 18:48:46 by nforay            #+#    #+#             */
/*   Updated: 2021/02/07 05:05:12 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iomanip>
#include <limits>
#include <cstdlib>

/*
+---------+-----------+-----------+-----------------+-----------+
| Bitmask | 00000100b | 00000010b |    00000001b    | 00000000b |
+---------+-----------+-----------+-----------------+-----------+
| char    | underflow | overflow  | impossible      | OK        |
| int     | underflow | overflow  | impossible      | OK        |
| float   | -inff     | +inff     | nanf            | OK        |
| double  | -inf      | +inf      | nan             | OK        |
+---------+-----------+-----------+-----------------+-----------+
*/

# define B_NAN		0x01
# define B_PINF		0x02
# define B_MINF		0x04

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Convert::Convert(std::string const &input) : m_char(0), m_charflags(0), m_int(0), m_intflags(0), m_float(0.0f), m_floatflags(0), m_double(0.0), m_doubleflags(0)
{
	std::size_t	i = 0;
	int			f = 0;
	int			dot = 0;

	if (input.length() == 1 && !isdigit(input[0]))
	{
		if (!isprint(input[0]))
			throw Convert::NotDisplayableException();
		convChar(input);
	}
	else if (input == "-inff" || input == "+inff" || input == "-inf" || input == "+inf")
		convDouble(input);
	else if (isdigit(input[0]) || (input[0] == '-' && isdigit(input[1])))
	{
		while (isprint(input[++i]))
		{
			if (!dot && input[i] == '.' && (i + 1) != input.length())
			{
				dot++;
			}
			else if (dot && input[i] == 'f' && !f)
				f++;
			else if (isdigit(input[i]) && !f)
				continue;
			else
			{
				m_charflags = m_intflags = m_floatflags = m_doubleflags |= B_NAN;
			}
		}
		if (i != input.length())
			throw Convert::NotDisplayableException();
		if (f)
			convDouble(input);
		else if (dot)
			convDouble(input);
		else
			convDouble(input);
	}
	else
	{
		m_charflags = m_intflags = m_floatflags = m_doubleflags |= B_NAN;
	}
}

Convert::Convert(const Convert &src) : m_char(src.m_char), m_int(src.m_int), m_float(src.m_float), m_double(src.m_double)
{
	this->m_charflags = src.m_charflags;
	this->m_intflags = src.m_intflags;
	this->m_floatflags = src.m_floatflags;
	this->m_doubleflags = src.m_doubleflags;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Convert::~Convert()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Convert &				Convert::operator=(Convert const &rhs)
{
	if (this != &rhs)
	{
		this->m_char = rhs.getChar();
		this->m_int = rhs.getInt();
		this->m_float = rhs.getFloat();
		this->m_double = rhs.getDouble();
		this->m_charflags = rhs.getCharFlags();
		this->m_intflags = rhs.getIntFlags();
		this->m_floatflags = rhs.getFloatFlags();
		this->m_doubleflags = rhs.getDoubleFlags();
	}
	return *this;
}

std::ostream &			operator<<(std::ostream &o, Convert const &i)
{
	o << "char: ";
	if (i.getCharFlags())
		o << "impossible" << std::endl;
	else
	{
		if (isprint(i.getChar()))
			o << "'" << i.getChar() << "'" <<  std::endl;
		else
			o << "Non displayable" << std::endl;
	}
	o << "int: ";
	if (i.getIntFlags())
		o << "impossible" << std::endl;
	else
	{
		o << i.getInt() << std::endl;
	}
	o << "float: ";
	if (i.getFloatFlags())
		o << "nan";
	else
	{
		o << std::fixed << std::setprecision(1) << i.getFloat();
	}
	o << "f" << std::endl << "double: ";
	if (i.getDoubleFlags())
		o << "nan" << std::endl;
	else
	{
		o << i.getDouble() << std::endl;
	}
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void 					Convert::convChar(std::string const &input)
{
	this->m_char = input[0];
	m_char = static_cast<char>(m_char);
	m_int = static_cast<int>(m_char);
	m_float = static_cast<float>(m_char);
	m_double = static_cast<double>(m_char);
}

void 					Convert::convDouble(std::string const &input)
{
	m_double = strtod(input.c_str(), NULL);

	m_char = static_cast<char>(m_double);
	m_int = static_cast<int>(m_double);
	m_float = static_cast<float>(m_double);
	if (m_double > std::numeric_limits<char>::max())
		m_charflags |= B_PINF;
	else if (m_double < std::numeric_limits<char>::min())
		m_charflags |= B_MINF;
	if (m_double > std::numeric_limits<int>::max())
		m_intflags |= B_PINF;
	else if (m_double < std::numeric_limits<int>::min())
		m_intflags |= B_MINF;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

char					Convert::getChar() const
{
	return (m_char);
}

char					Convert::getCharFlags() const
{
	return (m_charflags);
}

int						Convert::getInt() const
{
	if (m_intflags & B_NAN)
		return (0);
	else
		return (m_int);
}

char					Convert::getIntFlags() const
{
	return (m_intflags);
}

float					Convert::getFloat() const
{
	if (!m_floatflags)
		return (m_float);
	else
		return (0.0f);
}

char					Convert::getFloatFlags() const
{
	return (m_floatflags);
}

double					Convert::getDouble() const
{
	if (!m_doubleflags)
		return (m_double);
	else
		return (0.0);
}

char					Convert::getDoubleFlags() const
{
	return (m_doubleflags);
}

/* ************************************************************************** */