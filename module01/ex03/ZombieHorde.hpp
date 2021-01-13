/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:03:52 by nforay            #+#    #+#             */
/*   Updated: 2021/01/13 18:29:48 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{

	public:

		ZombieHorde(unsigned int const n);
		~ZombieHorde();
		void	announce() const;

	private:

		unsigned int	m_nzombies;
		Zombie			*m_zombies;
		std::string		names_pool[10];

};

#endif /* ***************************************************** ZOMBIEHORDE_H */