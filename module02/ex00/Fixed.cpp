//
// Created by Mauro Early on 11/23/21.
//

#include "Fixed.hpp"

int const Fixed::_numberFractionalBits = 8;

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	_fixedPointValue = 0;
}
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
	std::cout << "Copy constructor called" << std::endl;
	_fixedPointValue = other.getRawBits();
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
	_fixedPointValue = raw;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Assignation operator called" << std::endl;
	_fixedPointValue = other.getRawBits();
	return *this;
}
