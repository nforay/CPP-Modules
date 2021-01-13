/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 19:12:56 by nforay            #+#    #+#             */
/*   Updated: 2021/01/13 20:05:43 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	neurons = 2;
	emptiness = 9001;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Brain::identify()
{
	std::stringstream	address;
	std::string			straddress;
	address << this;
	address >> straddress;
	return (straddress);
}

/* ************************************************************************** */