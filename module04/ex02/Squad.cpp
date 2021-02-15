/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:45:31 by nforay            #+#    #+#             */
/*   Updated: 2021/02/15 17:16:44 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Squad::Squad() : m_unitcount(0), m_unitarray(new ISpaceMarine*[this->m_unitcount])
{
}

Squad::Squad(const Squad &src) : m_unitcount(src.m_unitcount), m_unitarray(new ISpaceMarine*[src.m_unitcount])
{
	for (int i = 0; i < src.m_unitcount; i++)
		m_unitarray[i] = src.m_unitarray[i]->clone();
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Squad::~Squad()
{
	if (m_unitcount > 0)
	{
		for (int i = 0; i < this->m_unitcount; i++)
			delete (m_unitarray[i]);
	}
	delete [] m_unitarray;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Squad &				Squad::operator=(ISquad const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < this->m_unitcount; i++)
			delete this->m_unitarray[i];
		delete [] this->m_unitarray;
		this->m_unitcount = rhs.getCount();
		this->m_unitarray = new ISpaceMarine*[this->m_unitcount];
		for (int i = 0; i < this->m_unitcount; i++)
			this->m_unitarray[i] = rhs.getUnit(i)->clone();
	}
	return *this;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

int					Squad::getCount() const
{
	return this->m_unitcount;
}

ISpaceMarine		*Squad::getUnit(int n) const
{
	if (n >= m_unitcount || n < 0)
		return NULL;
	return(this->m_unitarray[n]);
}

int					Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return (m_unitcount);
	ISpaceMarine	**newsquad = new ISpaceMarine*[this->m_unitcount + 1];

	for (int i = 0; i < this->m_unitcount; i++)
	{
		if (this->m_unitarray[i] == unit)
		{
			delete [] newsquad;
			return (m_unitcount);
		}
		newsquad[i] = this->m_unitarray[i];
	}
	newsquad[this->m_unitcount] = unit;
	delete [] m_unitarray;
	m_unitarray = newsquad;
	return (++this->m_unitcount);
}

/* ************************************************************************** */