//
// Created by Mauro Early on 26/11/2021.
//

#include "FlagTrap.hpp"

int	main() {

	FlagTrap *a = new FlagTrap();

	a->attack("Muchacho");
	a->takeDamage(50);
	a->beRepaired(20);

	a->highFivesGuys();




	delete a;

	return 0;
}