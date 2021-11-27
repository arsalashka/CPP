//
// Created by Mauro Early on 11/27/21.
//

#ifndef CPP_DIAMONDTRAP_HPP
#define CPP_DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FlagTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FlagTrap, public ScavTrap {
private:
	std::string _name;
public:
	DiamondTrap();
	DiamondTrap(DiamondTrap &obj);
	DiamondTrap &operator=(DiamondTrap &obj);
	~DiamondTrap();




};


#endif //CPP_DIAMONDTRAP_HPP
