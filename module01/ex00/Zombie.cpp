//
// Created by Mauro Early on 11/22/21.
//

#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << name << " dosn't exist anymore :-(" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}