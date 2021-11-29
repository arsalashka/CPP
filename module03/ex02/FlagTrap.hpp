//
// Created by Mauro Early on 11/27/21.
//

#ifndef CPP_FLAGTRAP_HPP
#define CPP_FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FlagTrap: public ClapTrap {

public:
	FlagTrap();
	FlagTrap(FlagTrap &object);
	FlagTrap &operator=(FlagTrap &object);
	~FlagTrap();

	void highFivesGuys(void);
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //CPP_FLAGTRAP_HPP
