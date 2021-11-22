//
// Created by Mauro Early on 11/22/21.
//

#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
	Zombie *zombie = new Zombie(name);
	return zombie;
}