//
// Created by Mauro Early on 11/30/21.
//

#include "Ice.hpp"

Ice::Ice() {
	_type = "ice";
}

Ice::Ice(Ice &obj) {
	_type = obj.getType();
}

Ice &Ice::operator=(Ice &obj) {
	_type = obj.getType();
	return *this;
}

Ice::~Ice() {
}

AMateria *Ice::clone() const {
	AMateria *clone = new Ice();
	return clone;
}

void	Ice::use(ICharacter &target) {
	std::cout << BLUE;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<
		std::endl;
	std::cout << RESET;
}