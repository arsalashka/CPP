//
// Created by Mauro Early on 11/27/21.
//

#include "FlagTrap.hpp"

FlagTrap::FlagTrap() {
	_name = "SuperMario";
	_hp = 100;
	_ep = 100;
	_dmg = 30;
	std::cout << "New FlagTrap " << _name << " constructor :)" << std::endl;
}

FlagTrap::FlagTrap(FlagTrap &object)
{
	_name = object.getName();
	_hp = object.getHp();
	_ep = object.getEp();
	_dmg = object.getDmg();
}

FlagTrap &FlagTrap::operator=(FlagTrap &object)
{
	_name = object.getName();
	_hp = object.getHp();
	_ep = object.getEp();
	_dmg = object.getDmg();
	return (*this);
}

FlagTrap::~FlagTrap() {
	std::cout << "FlagTrap " << _name << " distructor :(" << std::endl;
}

void	FlagTrap::highFivesGuys() {
	std::cout << "high five guys!" << std::endl;
}

void	FlagTrap::attack(const std::string &target) {
	std::cout << "FlagTrap " << _name << " attack " << target << ", causing "
			  << _dmg << " points of damage" << std::endl;
}

void FlagTrap::takeDamage(unsigned int amount) {
	std::cout << "FlagTrap " << _name << " take " << amount <<
			  " points of damage" << std::endl;
	_hp -= amount;
	if (_hp < 0)
		_hp = 0;
}

void FlagTrap::beRepaired(unsigned int amount) {
	std::cout << "FlagTrap " << _name << " repaired hp on " << amount <<
			  " points" << std::endl;
	_hp += amount;
	if (_hp > 100)
		_hp = 100;
}
