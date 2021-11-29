//
// Created by Mauro Early on 26/11/2021.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	_name = "Ninja";
	_hp = 100;
	_ep = 50;
	_dmg = 20;
	std::cout << "New ScavTrap " << _name << " constructor :)" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &object)
{
	_name = object.getName();
	_hp = object.getHp();
	_ep = object.getEp();
	_dmg = object.getDmg();
}

ScavTrap &ScavTrap::operator= (ScavTrap &object)
{
	_name = object.getName();
	_hp = object.getHp();
	_ep = object.getEp();
	_dmg = object.getDmg();
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << _name << " distructor :(" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " have enterred in Gate keeper mode"
		<< std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	std::cout << "ScavTrap " << _name << " attack " << target << ", causing "
			  << _dmg << " points of damage" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	std::cout << "ScavTrap " << _name << " take " << amount <<
			  " points of damage" << std::endl;
	_hp -= amount;
	if (_hp < 0)
		_hp = 0;
}

void ScavTrap::beRepaired(unsigned int amount) {
	std::cout << "ScavTrap " << _name << " repaired hp on " << amount <<
			  " points" << std::endl;
	_hp += amount;
	if (_hp > 100)
		_hp = 100;
}