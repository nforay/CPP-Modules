/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/20 16:26:54 by nforay            #+#    #+#             */
/*   Updated: 2021/01/24 16:05:50 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NinjaTrap_HPP
# define NinjaTrap_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{

	public:

		NinjaTrap(std::string const name);
		NinjaTrap( NinjaTrap const & src );
		~NinjaTrap();

		void			ninjaShoebox(FragTrap const & rhs) const;
		void			ninjaShoebox(ScavTrap const & rhs) const;
		void			ninjaShoebox(NinjaTrap const & rhs) const;

		NinjaTrap &		operator=(NinjaTrap const & rhs);

};

std::ostream &			operator<<( std::ostream & o, NinjaTrap const & i );

#endif /* ******************************************************** NinjaTrap_H */