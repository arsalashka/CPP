//
// Created by Mauro Early on 11/29/21.
//

#include "Cat.hpp"

Cat::Cat() {
	std::cout << GREEN;
	std::cout << "Cat's default constructor was called" << std::endl;
	std::cout << RESET;
	_type = "Cat";
}

Cat::Cat(Cat &obj) {
	_type = obj.getType();
	std::cout << GREEN;
	std::cout << "Cat's copy constructor was called" << std::endl;
	std::cout << RESET;

}

Cat &Cat::operator=(Cat &obj) {
	_type = obj.getType();
	std::cout << "Cat's an assignation operator overload was called" <<
			  std::endl;
	return (*this);
}

Cat::~Cat() {
	std::cout << RED;
	std::cout << "Cat's destructor was called" << std::endl;
	std::cout << RESET;
}

void Cat::makeSound() const {
	std::cout << "Meow-meow!" << std::endl;
}