/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 19:12:46 by nforay            #+#    #+#             */
/*   Updated: 2021/01/13 19:51:52 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Human
{

	public:

		Human();
		~Human();
		std::string	identify();
		Brain&		getBrain();

	private:
	
	Brain brain;
};

#endif /* *********************************************************** HUMAN_H */