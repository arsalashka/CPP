//
// Created by Mauro Early on 11/29/21.
//

#include "Dog.hpp"

Dog::Dog() {
	std::cout << GREEN;
	std::cout << "Dog's default constructor was called" << std::endl;
	std::cout << RESET;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(Dog &obj) {
	_type = obj.getType();
	_brain = obj.getBrain();
	std::cout << "Dog's copy constructor was called" << std::endl;
}

Dog &Dog::operator=(Dog &obj) {
	_type = obj.getType();
	_brain = obj.getBrain();
	std::cout << "Dog's an assignation operator overload was called" <<
		std::endl;
	return (*this);
}

Dog::~Dog() {
	std::cout << RED;
	std::cout << "Dog's destructor was called" << std::endl;
	std::cout << RESET;
	delete _brain;
}

Brain *Dog::getBrain() {
	return _brain;
}

void Dog::makeSound() const {
	std::cout << "Woof-woof!" << std::endl;
}
