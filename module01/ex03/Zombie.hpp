/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 16:03:56 by nforay            #+#    #+#             */
/*   Updated: 2021/01/13 18:39:08 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{

	public:

		Zombie();
		Zombie(std::string p_name, std::string p_type);
		~Zombie();
		void setAttributes(std::string p_name, std::string p_type);
		void announce() const;

	private:

		std::string	type;
		std::string	name;

};

#endif /* ********************************************************** ZOMBIE_H */