/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 17:08:56 by nforay            #+#    #+#             */
/*   Updated: 2021/01/29 20:25:45 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Cure : public AMateria
{

	public:

		Cure();
		Cure(Cure const &src);
		virtual ~Cure();

		Cure &		operator=(Cure const &rhs);

		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);

};

#endif /* ************************************************************ CURE_H */