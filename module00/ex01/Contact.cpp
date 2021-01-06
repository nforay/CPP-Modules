/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 18:25:20 by nforay            #+#    #+#             */
/*   Updated: 2021/01/06 22:23:27 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

contact::contact()
{

}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

contact::~contact()
{
	
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	contact::create(void)
{
	std::cout << "Enter contact details:" << std::endl;
	
	std::cout << "First Name: "; getline(std::cin, this->first_name);
	std::cout << "Last Name: "; getline(std::cin, this->last_name);
	std::cout << "Nickname: "; getline(std::cin, this->nickname);
	std::cout << "Login: "; getline(std::cin, this->login);
	std::cout << "Postal Address: "; getline(std::cin, this->postal_address);
	std::cout << "Email Address: "; getline(std::cin, this->email_address);
	std::cout << "Phone Number: "; getline(std::cin, this->phone_number);
	std::cout << "Birthday Date: "; getline(std::cin, this->birthday_date);
	std::cout << "Favorite Meal: "; getline(std::cin, this->favorite_meal);
	std::cout << "Underwear Color: "; getline(std::cin, this->underwear_color);
	std::cout << "Darkest Secret: "; getline(std::cin, this->darkest_secret);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void	contact::preview(int index) const
{
	std::cout << "|" << std::setw(10) << index << "|";
	if (first_name.length() > 9)
		std::cout << first_name.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << first_name << "|";
	if (last_name.length() > 9)
		std::cout << last_name.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << last_name << "|";
	if (nickname.length() > 9)
		std::cout << nickname.substr(0, 9) << "." << "|" << std::endl;
	else
		std::cout << std::setw(10) << nickname << "|" << std::endl;
}

void	contact::print() const
{
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Login: " << login << std::endl;
	std::cout << "Postal Address: " << postal_address << std::endl;
	std::cout << "Email Address: " << email_address << std::endl;
	std::cout << "Phone Number: " << phone_number << std::endl;
	std::cout << "Birthday Date: " << birthday_date << std::endl;
	std::cout << "Favorite Meal: " << favorite_meal << std::endl;
	std::cout << "Underwear Color: " << underwear_color << std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}

/* ************************************************************************** */