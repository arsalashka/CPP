//
// Created by Mauro Early on 11/22/21.
//

#include "HumanB.hpp"

void	HumanB::attack() {
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name) {
	this->name = name;
}

void	HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}