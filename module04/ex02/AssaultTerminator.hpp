/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:29:07 by nforay            #+#    #+#             */
/*   Updated: 2021/01/27 17:13:01 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{

	public:

		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const &src);
		virtual ~AssaultTerminator();

		AssaultTerminator &		operator=(AssaultTerminator const &rhs);

		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;

};

#endif /* *********************************************** ASSAULTTERMINATOR_H */