//
// Created by Mauro Early on 11/29/21.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << GREEN;
	std::cout << "WrongCat's default constructor was called" << std::endl;
	std::cout << RESET;
}

WrongCat::WrongCat(WrongCat &obj) {
	_type = obj.getType();
	std::cout << "WrongCat's copy constructor was called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat &obj) {
	_type = obj.getType();
	std::cout << "WrongCat's an assignation operator overload was called" <<
			  std::endl;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << RED;
	std::cout << "WrongCat's destructor was called" << std::endl;
	std::cout << RESET;
}

void WrongCat::makeSound() const {
	std::cout << "Wrong Meow-meow!" << std::endl;
}