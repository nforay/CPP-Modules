/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:34:30 by nforay            #+#    #+#             */
/*   Updated: 2021/01/27 17:13:14 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

	public:

		TacticalMarine();
		TacticalMarine(TacticalMarine const &src);
		~TacticalMarine();

		TacticalMarine &		operator=(TacticalMarine const &rhs);

		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;

};

#endif /* ************************************************** TACTICALMARINE_H */