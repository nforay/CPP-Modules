/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 19:00:39 by nforay            #+#    #+#             */
/*   Updated: 2021/02/08 20:11:43 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <cstdlib>

typedef struct	Data
{
	std::string	s1;
	int			n;
	std::string	s2;
}				Data;

void	*serialize(void)
{
	std::string const	alphanumeric = "0123456789abcdefghijklmnopqrstuvwxyABCDEFGHIJKLMNOPQRSTUVWXYZ";
	Data				*data = new Data;

	for (int i = 0; i < 8; i++)
		data->s1 += alphanumeric[std::rand() % alphanumeric.length()];
	data->n = std::rand();
	for (int i = 0; i < 8; i++)
		data->s2 += alphanumeric[std::rand() % alphanumeric.length()];
	std::cout << "\e[33mrandom data generated:\ns1='" << data->s1 << "'\nn=" << data->n << "\ns2='" << data->s2 << "'" << std::endl;
	std::cout << "<= sending data as type void* at address " << data << ".\e[39m" << std::endl;
	return (reinterpret_cast<void *>(data));
}

Data	*deserialize(void *raw)
{
	Data	*data = reinterpret_cast<Data *>(raw);
	std::cout << "\e[35m=> recieving data from type void* from address " << raw << "." << std::endl;
	std::cout << "deserialized data:\ns1='" << data->s1 << "'\nn=" << data->n << "\ns2='" << data->s2 << "'\e[39m" << std::endl;
	return (data);
}

int	main(void)
{
	std::srand(time(NULL));
	delete deserialize(serialize());
}