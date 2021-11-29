//
// Created by Mauro Early on 11/28/21.
//

#include "Animal.hpp"

Animal::Animal() {
	std::cout << GREEN;
	std::cout << "Animal's default constructor was called" << std::endl;
	std::cout << RESET;
	_type = "Animal";
}

Animal::Animal(Animal &obj) {
	_type = obj.getType();
	std::cout << "Animal's copy constructor was called" << std::endl;
}

Animal &Animal::operator=(Animal &obj) {
	_type = obj.getType();
	std::cout << "Animal's assignation operator overload was called" << std::endl;
	return (*this);
}

Animal::~Animal() {
	std::cout << RED;
	std::cout << "Animal's destructor was called" << std::endl;
	std::cout << RESET;
}

std::string Animal::getType() const {
	return _type;
}

//void Animal::setType(std::string type) {
//	_type = type;
//}

void Animal::makeSound() const {
	std::cout << "Animal's sound!" << std::endl;
}
