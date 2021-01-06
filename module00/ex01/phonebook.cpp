/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/06 15:52:45 by nforay            #+#    #+#             */
/*   Updated: 2021/01/06 23:20:16 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

static void print_contact(contact phonebook[8], int contacts)
{
	int	index = -42;

	std::cout << "Show contact [0-" << contacts << "] > ";
	std::cin >> index;
	while (std::cin.fail() || (index < 0 || index > contacts))
	{
		if (std::cin.eof())
			return ;
		std::cin.clear();
		std::cin.ignore(1024, '\n');
		std::cout << "Invalid Entry.\nShow contact [0-" << contacts << "] > ";
		std::cin >> index;
	}
	phonebook[index].print();
	std::cin.clear();
	std::cin.ignore();
}

int main(void)
{
	contact		phonebook[8];
	int			contacts = 0;
	std::string	input;

	std::cout << "Phonebook [ADD|SEARCH|EXIT] > ";
	while (std::getline(std::cin, input) && input != "EXIT")
	{
		if (input.compare("ADD") == 0)
		{
			if (contacts < 8)
				phonebook[contacts++].create();
			else
				std::cout << "Phonebook is full!" << std::endl;
		}
		else if (input.compare("SEARCH") == 0)
		{
			if (!contacts)
				std::cout << "Phonebook is empty!" << std::endl;
			else
			{
				std::cout << "+----------+----------+----------+----------+" << std::endl;
				for (int i = 0; i < contacts; i++)
					phonebook[i].preview(i);
				std::cout << "+----------+----------+----------+----------+" << std::endl;
				print_contact(phonebook, contacts - 1);
			}
		}
		else
			std::cout << "Unknown command" << std::endl;
		std::cout << "Phonebook [ADD|SEARCH|EXIT] > ";
	}
	std::cout << "Closing Phonebook..." << std::endl;
	return (0);
}