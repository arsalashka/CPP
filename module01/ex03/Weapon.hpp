//
// Created by Mauro Early on 11/22/21.
//

#ifndef EX03_WEAPON_HPP
#define EX03_WEAPON_HPP

#include <iostream>

class Weapon {
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string type);
	std::string &getType();
	void		setType(std::string type);
};


#endif //EX03_WEAPON_HPP
