//
// Created by Mauro Early on 11/22/21.
//

#include "Weapon.hpp"

Weapon::Weapon() {
}

Weapon::Weapon(std::string type) {
	this->type = type;
}

std::string &Weapon::getType() {
	return type;
}

void	Weapon::setType(std::string type) {
	this->type = type;
}