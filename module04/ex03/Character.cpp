//
// Created by Mauro Early on 11/30/21.
//

#include "Character.hpp"

Character::Character() {
	_name = "noname";
	_cntAMateria = 0;
	_inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++) {
		_inventory[i] = 0;
	}
}

Character::Character(std::string name) {
	_name = name;
	_cntAMateria = 0;
	_inventory = new AMateria*[4];
	for (int i = 0; i < 4; i++) {
		_inventory[i] = 0;
	}
}

Character::Character(Character &obj) {
	this->_name = obj.getName();
	this->_cntAMateria = obj.getCntAMateria();
//	this->_inventory = new AMateria*[4];
	for (int i = 0; i < _cntAMateria; i++) {
//		delete _inventory[i];
		_inventory[i] = obj._inventory[i]->clone();
	}
}

Character &Character::operator=(Character &obj) {
	_name = obj.getName();
	_cntAMateria = obj.getCntAMateria();
//	this->_inventory = new AMateria*[4];
	for (int i = 0; i < _cntAMateria; i++) {
//		delete _inventory[i];
		_inventory[i] = obj._inventory[i]->clone();
	}
	return *this;
}

Character::~Character() {

	for (int i = 0; i < 4; i++) {
		delete _inventory[i];
	}
	delete[] _inventory;
}

int Character::getCntAMateria() {
	return _cntAMateria;
}

std::string const &Character::getName() const {
	return _name;
}

void Character::equip(AMateria *m) {
	if (_cntAMateria < 4) {
		delete _inventory[_cntAMateria];
		_inventory[_cntAMateria] = m->clone();
		_cntAMateria++;
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3) {
		delete _inventory[idx];
		_inventory[idx] = 0;
		_cntAMateria--;
	}
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx <= 3 && _inventory[idx] != 0) {
		_inventory[idx]->use(target);
	}
}