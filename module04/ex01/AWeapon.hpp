/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 19:56:08 by nforay            #+#    #+#             */
/*   Updated: 2021/01/25 21:37:14 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{

	public:

		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(AWeapon const &src);
		~AWeapon();

		AWeapon &		operator=(AWeapon const &rhs);

		std::string		getName() const;
		int				getAPCost() const;
		int				getDamage() const;
		virtual void	attack() const = 0;

	private:

		std::string	m_name;
		int			m_apcost;
		int			m_damage;

};

std::ostream &			operator<<(std::ostream &o, AWeapon const &i);

#endif /* ********************************************************* AWEAPON_H */