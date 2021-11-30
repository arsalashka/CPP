//
// Created by Mauro Early on 11/30/21.
//

#include "Cure.hpp"

Cure::Cure() {
	_type = "cure";
}

Cure::Cure(Cure &obj) {
	_type = obj.getType();
}

Cure &Cure::operator=(Cure &obj) {
	_type = obj.getType();
	return *this;
}

Cure::~Cure() {
}

AMateria *Cure::clone() const {
	AMateria *clone = new Cure();
	return clone;
}

void	Cure::use(ICharacter &target) {
	std::cout << GREEN;
	std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
	std::cout << RESET;
}
