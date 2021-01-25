/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sheep.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 18:43:15 by nforay            #+#    #+#             */
/*   Updated: 2021/01/25 19:24:04 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHEEP_HPP
# define SHEEP_HPP

# include <iostream>
# include <string>
# include "Peon.hpp"

class Sheep : public Peon
{

	public:

		Sheep(std::string const &name);
		Sheep(Sheep const &src);
		~Sheep();

		Sheep &		operator=(Sheep const &rhs);

		virtual void	getPolymorphed() const;

	private:

};

std::ostream &			operator<<(std::ostream &o, Sheep const &i);

#endif /* *********************************************************** SHEEP_H */