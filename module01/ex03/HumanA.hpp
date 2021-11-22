//
// Created by Mauro Early on 11/22/21.
//

#ifndef EX03_HUMANA_HPP
#define EX03_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
	Weapon *weapon;
	std::string name;
public:
	HumanA(std::string name, Weapon &weapon);
	void attack();
};


#endif //EX03_HUMANA_HPP
