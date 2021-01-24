/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:26:54 by nforay            #+#    #+#             */
/*   Updated: 2021/01/24 16:33:25 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
# define ScavTrap_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap(std::string const name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		void			challengeNewcomer(std::string const & target) const;

		ScavTrap &		operator=( ScavTrap const & rhs );

};

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i );

#endif /* ******************************************************** ScavTrap_H */