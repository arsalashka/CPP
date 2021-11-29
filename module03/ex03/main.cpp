//
// Created by Mauro Early on 26/11/2021.
//

#include "DiamondTrap.hpp"

int	main() {

	DiamondTrap *a = new DiamondTrap();

	a->attack("Muchacho");
	a->guardGate();
	a->highFivesGuys();


	a->FlagTrap::takeDamage(5);
	a->ScavTrap::takeDamage(10);

	a->FlagTrap::beRepaired(3);
	a->ScavTrap::beRepaired(7);

	a->whoAmI();





	delete a;

	return 0;
}