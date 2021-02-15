/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:45:31 by nforay            #+#    #+#             */
/*   Updated: 2021/02/15 17:08:35 by nforay           ###   ########.fr       */
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
		virtual ~Squad();

		Squad &		operator=(ISquad const & rhs);

		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int n) const;
		virtual int push(ISpaceMarine *unit);

	private:

		int				m_unitcount;
		ISpaceMarine**	m_unitarray;

};

#endif /* *********************************************************** SQUAD_H */