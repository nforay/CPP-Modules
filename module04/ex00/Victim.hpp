/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 18:35:50 by nforay            #+#    #+#             */
/*   Updated: 2021/02/15 14:59:47 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim
{

	public:

		Victim(std::string const &name);
		Victim(Victim const &src);
		virtual ~Victim();

		Victim &		operator=(Victim const &rhs);

		virtual void	getPolymorphed() const;
		std::string 	GetName() const;

	private:

		std::string		m_name;
};

std::ostream &			operator<<( std::ostream & o, Victim const & i );

#endif /* ********************************************************** VICTIM_H */