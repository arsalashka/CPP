//
// Created by Mauro Early on 11/27/21.
//

#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

public:
	ScavTrap();
	ScavTrap(ScavTrap &object);
	ScavTrap& operator= (ScavTrap &object);
	~ScavTrap();

	void	attack(const std::string &target);
	void	guardGate();
	void 	takeDamage(unsigned int amount);
	void 	beRepaired(unsigned int amount);
};


#endif //CPP_SCAVTRAP_HPP
