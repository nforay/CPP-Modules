/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 01:09:41 by nforay            #+#    #+#             */
/*   Updated: 2021/02/15 14:56:13 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{

	public:

		RadScorpion();
		RadScorpion(RadScorpion const &src);
		virtual ~RadScorpion();

		virtual void		takeDamage(int amount);

};

#endif /* ***************************************************** RADSCORPION_H */