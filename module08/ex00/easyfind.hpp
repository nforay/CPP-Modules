/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 18:24:21 by nforay            #+#    #+#             */
/*   Updated: 2021/02/14 18:22:36 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iterator>
#include <algorithm>
#include <exception>

template <typename T>
typename T::iterator	easyfind(T &haystack, int needle)
{
	typename T::iterator it = std::find(haystack.begin(), haystack.end(), needle);
	if (it == haystack.end())
		throw std::exception();
	return (it);
}

#endif