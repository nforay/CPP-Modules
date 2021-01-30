/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 19:26:59 by nforay            #+#    #+#             */
/*   Updated: 2021/01/29 20:28:11 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{

	public:

		AMateria(std::string const &type);
		AMateria(AMateria const &src);
		virtual ~AMateria();

		AMateria &		operator=(AMateria const &rhs);

		std::string const & getType() const;
		unsigned int getXP() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);

	private:

		unsigned int	_xp;
		std::string		_type;

};

std::ostream &			operator<<(std::ostream &o, AMateria const &i);

#endif /* ******************************************************** AMATERIA_H */