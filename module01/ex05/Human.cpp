/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 19:12:51 by nforay            #+#    #+#             */
/*   Updated: 2021/01/13 19:51:53 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Human::Human()
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Human::~Human()
{
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string	Human::identify()
{
	return (brain.identify());
}

Brain&		Human::getBrain()
{
	return (brain);
}

/* ************************************************************************** */