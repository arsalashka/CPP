//
// Created by Mauro Early on 11/29/21.
//

#include "Cat.hpp"

Cat::Cat() {
	std::cout << GREEN;
	std::cout << "Cat's default constructor was called" << std::endl;
	std::cout << RESET;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(Cat &obj) {
	std::cout << "Cat's copy constructor was called" << std::endl;
	_type = obj.getType();
	_brain = new Brain();
}

Cat &Cat::operator=(Cat &obj) {
	std::cout << "Cat's an assignation operator overload was called" <<
			  std::endl;
	_type = obj.getType();
	_brain = new Brain();
	return (*this);
}

Cat::~Cat() {
	delete _brain;
	std::cout << RED;
	std::cout << "Cat's destructor was called" << std::endl;
	std::cout << RESET;
}

Brain *Cat::getBrain() {
	return _brain;
}

//std::string Cat::getType() const {
//	return _type;
//}

void Cat::makeSound() const {
	std::cout << "Meow-meow!" << std::endl;
}
