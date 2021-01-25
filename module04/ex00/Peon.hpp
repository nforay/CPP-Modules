/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/24 18:35:58 by nforay            #+#    #+#             */
/*   Updated: 2021/01/25 19:23:06 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon : public Victim
{

	public:

		Peon(std::string const &name);
		Peon(Peon const &src);
		~Peon();

		Peon &			operator=(Peon const &rhs);

		virtual void	getPolymorphed() const;

};

#endif /* ************************************************************ PEON_H */