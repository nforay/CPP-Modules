/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 14:17:57 by nforay            #+#    #+#             */
/*   Updated: 2021/02/13 15:05:11 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	iter(T *address, size_t lenght, void (*func)(T &))
{
	for (size_t i = 0; i < lenght; i++)
		func(address[i]);
}

template <typename T>
void	print(T &a)
{
	std::cout << a << std::endl;
}

template <typename T>
void	print_chars(T &a)
{
	std::cout << a;
}

#endif
