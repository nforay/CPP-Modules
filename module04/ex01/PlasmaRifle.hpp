/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 21:08:15 by nforay            #+#    #+#             */
/*   Updated: 2021/01/26 16:26:08 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

	public:

		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const &src);
		~PlasmaRifle();

		virtual void		attack() const;

};

#endif /* ***************************************************** PLASMARIFLE_H */