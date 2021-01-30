/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 20:09:19 by nforay            #+#    #+#             */
/*   Updated: 2021/01/29 20:32:32 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource() : m_inv(new AMateria*[4]), m_nbrmat(0)
{
	//std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &src) : m_inv(new AMateria*[4]), m_nbrmat(src.m_nbrmat)
{
	//std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < src.m_nbrmat; i++)
		this->m_inv[i] = src.m_inv[i];
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	//std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < m_nbrmat; i++)
		delete m_inv[i];
	delete [] m_inv;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &		MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		this->m_nbrmat = rhs.m_nbrmat;
		for (int i = 0; i < rhs.m_nbrmat; i++)
			this->m_inv[i] = rhs.m_inv[i];
	}
	return *this;
}

std::ostream &		operator<<(std::ostream &o, MateriaSource const &i)
{
	(void)i;
	o << "This is a MateriaSource" << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void				MateriaSource::learnMateria(AMateria *mat)
{
	if (!mat)
		return ;
	if (this->m_nbrmat < 4)
	{
		this->m_inv[this->m_nbrmat] = mat;
		this->m_nbrmat++;
	}
	else
		delete mat;
}

AMateria*			MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->m_nbrmat; i++)
		if (this->m_inv[i]->getType() == type)
			return this->m_inv[i]->clone();
	return 0;
}

/* ************************************************************************** */