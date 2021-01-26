/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 21:08:24 by nforay            #+#    #+#             */
/*   Updated: 2021/01/26 16:25:58 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{

	public:

		PowerFist();
		PowerFist(PowerFist const &src);
		~PowerFist();

		virtual void	attack() const;

	private:

};

#endif /* ******************************************************* POWERFIST_H */