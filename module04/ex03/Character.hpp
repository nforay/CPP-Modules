/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 19:08:37 by nforay            #+#    #+#             */
/*   Updated: 2021/01/29 19:54:18 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class Character : public ICharacter
{

	public:

		Character(std::string const &name);
		Character(Character const &src);
		virtual ~Character();

		Character &		operator=(Character const &rhs);

		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter &target);

	private:

		std::string	m_name;
		AMateria**	m_inv;
		int			m_nbrmat;

};

std::ostream &			operator<<(std::ostream &o, Character const &i);

#endif /* ******************************************************* CHARACTER_H */