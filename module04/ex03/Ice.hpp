/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:07:12 by nforay            #+#    #+#             */
/*   Updated: 2021/01/29 20:25:48 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{

	public:

		Ice();
		Ice(Ice const &src);
		virtual ~Ice();

		Ice &		operator=(Ice const &rhs);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif /* ************************************************************* ICE_H */