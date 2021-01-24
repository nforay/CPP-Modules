/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:26:54 by nforay            #+#    #+#             */
/*   Updated: 2021/01/22 20:39:36 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

	public:

		FragTrap(std::string const name);
		FragTrap( FragTrap const & src );
		~FragTrap();

		void			vaulthunter_dot_exe(std::string const & target);

		FragTrap &		operator=( FragTrap const & rhs );

};

std::ostream &			operator<<( std::ostream & o, FragTrap const & i );

#endif /* ******************************************************** FRAGTRAP_H */