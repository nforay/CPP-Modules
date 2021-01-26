/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 00:54:11 by nforay            #+#    #+#             */
/*   Updated: 2021/01/26 16:44:56 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy
{

	public:

		Enemy(int hp, std::string const &type);
		Enemy(Enemy const &src);
		virtual ~Enemy();

		Enemy &		operator=(Enemy const &rhs);

		std::string		getType() const;
		int				getHP() const;

		virtual void	takeDamage(int damage);

	protected:

		int				m_hp;
		std::string		m_type;

};

std::ostream &			operator<<(std::ostream &o, Enemy const &i);

#endif /* *********************************************************** ENEMY_H */