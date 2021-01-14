/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 17:03:20 by nforay            #+#    #+#             */
/*   Updated: 2021/01/14 17:39:03 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{

	public:

		HumanA(std::string p_name, Weapon &p_weapon);
		~HumanA();

		void	attack() const;

	private:

	std::string	name;
	Weapon &	weapon;

};

#endif /* ********************************************************** HUMANA_H */