/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 14:17:53 by nforay            #+#    #+#             */
/*   Updated: 2021/02/13 15:08:33 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	add_5(T &a)
{
	a += 5;
}

template <typename T>
void	add_32(T &a)
{
	a += 32;
}

int	main(void)
{
	int		array_int[] = {0, 1, 2, 3, 4, 5, 6};
	char	array_char[] = "HELLO>>";

	iter(array_int, 7, &add_5);
	iter(array_int, 7, &print);
	std::cout << "---------" << std::endl;
	iter(array_int, 7, &add_32);
	iter(array_int, 7, &print);
	std::cout << "---------" << std::endl;
	iter(array_char, 7, &add_32);
	iter(array_char, 7, &print_chars);
	std::cout << "\n---------" << std::endl;
	iter(array_char, 7, &add_5);
	iter(array_char, 7, &print_chars);
	std::cout << "\n---------" << std::endl;

	return 0;
}
