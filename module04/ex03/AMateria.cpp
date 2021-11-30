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

}