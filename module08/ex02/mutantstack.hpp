/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 23:44:05 by nforay            #+#    #+#             */
/*   Updated: 2021/02/15 00:42:56 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <deque>

/*
Making a stack container adaptor using deque as the underlying container type.
as seen in: http://www.cplusplus.com/reference/stack/stack/stack/
*/

template <typename T>
class MutantStack : public std::stack<T>
{

	public:

		MutantStack<T>() : std::stack<T,std::deque<T> >() {};
		MutantStack<T>(MutantStack const &src) : std::stack<T>(src) {};
		virtual ~MutantStack<T>() {};

		MutantStack<T> &		operator=(MutantStack<T> const &rhs) {return (std::stack<T>::operator=(rhs));};

		typedef typename std::deque<T>::iterator iterator;
		iterator	begin() {return (std::stack<T>::c.begin());}
		iterator	end() {return (std::stack<T>::c.end());}
};

#endif /* ***************************************************** MUTANTSTACK_H */