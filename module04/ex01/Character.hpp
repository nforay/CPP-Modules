/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 00:12:26 by nforay            #+#    #+#             */
/*   Updated: 2021/01/26 00:53:48 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{

	public:

		Character(std::string const &name);
		Character(Character const &src);
		~Character();

		Character &		operator=(Character const &rhs);

		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		
		std::string const	getName() const;
		int					getAP() const;
		AWeapon				*getWeapon() const;

	private:

		std::string	m_name;
		int			m_ap;
		AWeapon		*m_weapon;

};

std::ostream &			operator<<(std::ostream &o, Character const &i);

#endif /* ******************************************************* CHARACTER_H */