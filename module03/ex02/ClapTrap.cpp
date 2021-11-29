//
// Created by Mauro Early on 26/11/2021.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	_name = "Robocop";
	_hp = 10;
	_ep = 10;
	_dmg = 0;
	std::cout << "New ClapTrap " << _name << " constructor :)" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &object)
{
	_name = object.getName();
	_hp = object.getHp();
	_ep = object.getEp();
	_dmg = object.getDmg();
}

ClapTrap &ClapTrap::operator = (ClapTrap &object)
{
	_name = object.getName();
	_hp = object.getHp();
	_ep = object.getEp();
	_dmg = object.getDmg();
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << _name << " distructor :(" << std::endl;
}

//	getters and setters

std::string ClapTrap::getName() {
	return _name;
}

int	ClapTrap::getHp() {
	return _hp;
}

int	ClapTrap::getEp() {
	return _ep;
}

int	ClapTrap::getDmg() {
	return _dmg;
}

void ClapTrap::setName(std::string name) {
	_name = name;
}

void	ClapTrap::setHp(int hp) {
	_hp = hp;
}

void	ClapTrap::setEp(int ep) {
	_ep = ep;
}

void	ClapTrap::setDmg(int dmg) {
	_dmg = dmg;
}


//			methods

void	ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << _name << " attack " << target << ", causing "
	<< _dmg << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " take " << amount <<
		" points of damage" << std::endl;
	_hp -= amount;
	if (_hp < 0)
		_hp = 0;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << _name << " repaired hp on " << amount <<
			  " points" << std::endl;
	_hp += amount;
	if (_hp > 10)
		_hp = 10;
}