/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/08 18:12:30 by nforay            #+#    #+#             */
/*   Updated: 2021/01/08 20:06:45 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{

	public:

		Pony(std::string name, int age);
		~Pony();
		void print_infos(void) const;

	private:

		std::string name;
		int			age;

};

#endif /* ************************************************************ PONY_H */