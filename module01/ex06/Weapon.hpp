/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 17:03:15 by nforay            #+#    #+#             */
/*   Updated: 2021/01/14 17:16:19 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{

	public:

		Weapon(std::string p_type);
		~Weapon();

		const std::string &	getType() const;
		void				setType(std::string p_type);

	private:

		std::string	type;
};

#endif /* ********************************************************** WEAPON_H */