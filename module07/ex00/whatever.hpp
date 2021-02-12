/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:41:52 by nforay            #+#    #+#             */
/*   Updated: 2021/02/12 19:55:20 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b)
{
	T	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T const &	min(T const &a, T const &b)
{
	return (a <= b ? a : b);
}

template <typename T>
T const &	max(T const &a, T const &b)
{
	return (a >= b ? a : b);
}

#endif