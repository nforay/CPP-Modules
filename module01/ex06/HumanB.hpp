#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{

	public:

		HumanB(std::string p_name);
		~HumanB();

		void	attack() const;
		void	setWeapon(Weapon &p_weapon);

	private:

	std::string	name;
	Weapon		*weapon;

};

#endif /* ********************************************************** HUMANB_H */