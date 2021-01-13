/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:03:52 by nforay            #+#    #+#             */
/*   Updated: 2021/01/13 02:16:30 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{

	public:

		ZombieEvent();
		~ZombieEvent();
		void	setZombieType(std::string p_type);
		Zombie	*newZombie(std::string p_name);
		Zombie	*randomChump();

	private:

		std::string	type;
		std::string names_pool[10];

};

#endif /* ***************************************************** ZOMBIEEVENT_H */