//
// Created by Mauro Early on 26/11/2021.
//

#include "ScavTrap.hpp"

int	main() {

//	ClapTrap a;
//
//	a.attack("Godzilla");
//	a.takeDamage(6);
//	a.beRepaired(5);

	ScavTrap *b = new ScavTrap();

//	b.setName("Amigo");

	b->attack("Godzilla");
	b->takeDamage(90);
	b->beRepaired(50);
	b->guardGate();

	std::cout << b->getHp() << std::endl;

	delete b;

	return 0;
}