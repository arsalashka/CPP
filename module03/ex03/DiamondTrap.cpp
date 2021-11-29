//
// Created by Mauro Early on 11/27/21.
//

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	_dname = "Leo";
	_name = _dname + "_clap_name";
	_hp = FlagTrap::_hp;
	_ep = ScavTrap::_ep;
	_dmg = FlagTrap::_ep;
	std::cout << "New DiamodnTrap " << _dname << " constructor :)" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &obj) {
	_dname = obj.getName();
	_name = _dname + "_clap_name";
	_hp = obj.getHp();
	_ep = obj.getEp();
	_dmg = obj.getDmg();
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &obj) {
	_dname = obj.getName();
	_name = _dname + "_clap_name";
	_hp = obj.getHp();
	_ep = obj.getEp();
	_dmg = obj.getDmg();
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _dname << " distructor :(" << std::endl;
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << _dname << " " << _name << std::endl;
}