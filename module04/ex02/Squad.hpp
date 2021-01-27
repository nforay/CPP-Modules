/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:45:31 by nforay            #+#    #+#             */
/*   Updated: 2021/01/27 18:10:56 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{

	public:

		Squad();
		Squad( Squad const & src );
		~Squad();

		Squad &		operator=( Squad const & rhs );

		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int n) const;
		virtual int push(ISpaceMarine *unit);

	private:

		int				m_unitcount;
		ISpaceMarine**	m_unitarray;

};

#endif /* *********************************************************** SQUAD_H */