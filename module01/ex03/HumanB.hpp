//
// Created by Mauro Early on 11/22/21.
//

#ifndef EX03_HUMANB_HPP
#define EX03_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
	Weapon *weapon;
	std::string name;
public:
	HumanB(std::string name);
	void setWeapon(Weapon &weapon);
	void attack();
};


#endif //EX03_HUMANB_HPP
