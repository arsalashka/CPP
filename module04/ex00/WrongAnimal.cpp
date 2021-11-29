//
// Created by Mauro Early on 11/29/21.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	_type = "WrongAnimal";
	std::cout << GREEN;
	std::cout << "WrongAnimal's default constructor was called" << std::endl;
	std::cout << RESET;
}

WrongAnimal::WrongAnimal(WrongAnimal &obj) {
	_type = obj.getType();
	std::cout << "WrongAnimal's copy constructor was called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal &obj) {
	_type = obj.getType();
	std::cout << "WrongAnimal's assignation operator overload was called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << RED;
	std::cout << "WrongAnimal's destructor was called" << std::endl;
	std::cout << RESET;
}

std::string WrongAnimal::getType() const {
	return _type;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal's sound!" << std::endl;
}
