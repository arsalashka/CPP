//
// Created by Mauro Early on 11/22/21.
//

#include "HumanA.hpp"

void	HumanA::attack() {
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) {
	this->name = name;
	this->weapon = &weapon;
}