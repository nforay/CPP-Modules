/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:26:54 by nforay            #+#    #+#             */
/*   Updated: 2021/01/24 16:26:01 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{

	public:

		SuperTrap(std::string const name);
		SuperTrap( SuperTrap const & src );
		~SuperTrap();

		void			rangedAttack(std::string const & target) const;
		void			meleeAttack(std::string const & target) const;

		SuperTrap &		operator=(SuperTrap const & rhs);

};

std::ostream &			operator<<( std::ostream & o, SuperTrap const & i );

#endif /* ***************************************************** SUPERTRAP_HPP */