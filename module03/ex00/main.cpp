//
// Created by Mauro Early on 26/11/2021.
//

#include "ClapTrap.hpp"

int	main() {

	ClapTrap a;

	a.attack("Godzilla");
	a.takeDamage(6);
	a.beRepaired(5);



	std::cout << a.getHp() << std::endl;

	return 0;
}