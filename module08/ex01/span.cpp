/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 21:56:44 by nforay            #+#    #+#             */
/*   Updated: 2021/03/02 15:08:04 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(unsigned int n) : m_nbrints(n)
{
}

Span::Span(const Span &src)
{
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		this->m_nbrints = rhs.GetNbrInts();
		this->m_ints = std::vector<int>(rhs.GetVector());
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void			Span::addNumber(int number)
{
	if (m_ints.size() == m_nbrints)
		throw Span::IsFullException();
	m_ints.push_back(number);
}

void			Span::addNumbers(std::vector<int>const &src)
{
	if (m_ints.size() == m_nbrints)
		throw Span::IsFullException();
	if ((m_nbrints - m_ints.size()) < src.size())
		m_ints.insert(m_ints.end(), src.begin(), src.begin() + (m_nbrints - m_ints.size()));
	else
		m_ints.insert(m_ints.end(), src.begin(), src.end());
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int							Span::shortestSpan(void)
{
	if (m_ints.size() < 2)
		throw Span::NotEnoughException();
	std::sort(m_ints.begin(), m_ints.end());
	std::vector<int>::iterator			it = m_ints.begin();
	std::vector<int>::const_iterator	end = m_ints.end();
	int									shortest = (*(it + 1) - *it);
	while ((++it + 1) != end)
		if ((*(it + 1) - *it) < shortest)
			shortest = (*(it + 1) - *it);
	return (shortest);
}

int							Span::longestSpan(void)
{
	if (m_ints.size() < 2)
		throw Span::NotEnoughException();
	std::sort(m_ints.begin(), m_ints.end());
	return (*(m_ints.end() - 1) - *m_ints.begin());
}

unsigned int				Span::GetNbrInts(void) const
{
	return (m_nbrints);
}

std::vector<int>const &		Span::GetVector(void) const
{
	return (m_ints);
}

/* ************************************************************************** */
