//
// Created by Mauro Early on 11/30/21.
//

#include "AMateria.hpp"

AMateria::AMateria() {
}

AMateria::AMateria(std::string const &type) {
	_type = type;
}

AMateria::AMateria(AMateria &obj) {
	_type = obj.getType();
}

AMateria &AMateria::operator=(AMateria &obj) {
	_type = obj.getType();
	return *this;
}

AMateria::~AMateria() {
}

std::string const &AMateria::getType() const {
	return _type;
}

void	AMateria::use(ICharacter &target) {
	if (!_type.compare("ice")) {
		std::cout << BLUE;
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" <<
				  std::endl;
		std::cout << RESET;
	}
	if (!_type.compare("cure")) {
		std::cout << GREEN;
		std::cout << "* heals " << target.getName() << "’s wounds *"
				  << std::endl;
		std::cout << RESET;

	}
}