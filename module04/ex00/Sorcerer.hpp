/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 18:35:40 by nforay            #+#    #+#             */
/*   Updated: 2021/01/25 19:24:36 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{

	public:

		Sorcerer(std::string const &name, std::string const &title);
		Sorcerer(Sorcerer const &src);
		~Sorcerer();

		Sorcerer &		operator=(Sorcerer const &rhs);

		std::string		GetName() const;
		std::string		GetTitle() const;
		void			polymorph(Victim const &target) const;

	private:

		std::string 	m_name;
		std::string 	m_title;

};

std::ostream &			operator<<(std::ostream &o, Sorcerer const &i);

#endif /* ******************************************************** SORCERER_H */