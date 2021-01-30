/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nforay <nforay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 20:09:19 by nforay            #+#    #+#             */
/*   Updated: 2021/01/29 19:43:31 by nforay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

	public:

		MateriaSource();
		MateriaSource(MateriaSource const &src);
		~MateriaSource();

		MateriaSource &		operator=(MateriaSource const &rhs);

		virtual void learnMateria(AMateria *mat);
		virtual AMateria* createMateria(std::string const & type);

	private:

		AMateria**	m_inv;
		int			m_nbrmat;

};

std::ostream &			operator<<( std::ostream & o, MateriaSource const & i );

#endif /* *************************************************** MATERIASOURCE_H */