//
// Created by Mauro Early on 11/23/21.
//

#include "Fixed.hpp"

int const Fixed::_numberFractionalBits = 8;

Fixed::Fixed() {
//	std::cout << "Default constructor called" << std::endl;
	_fixedPointValue = 0;
}
Fixed::~Fixed() {
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) {
//	std::cout << "Copy constructor called" << std::endl;
//	_fixedPointValue = other.getRawBits();
	*this = other;
}

Fixed::Fixed(const int i) {
//	std::cout << "Int constructor called" << std::endl;
	_fixedPointValue = i << _numberFractionalBits;
}

Fixed::Fixed(const float f) {
//	std::cout << "Float constructor called" << std::endl;
	_fixedPointValue = roundf(f * (1 << _numberFractionalBits));
}

int Fixed::getRawBits(void) const {
//	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw) {
	_fixedPointValue = raw;
}

Fixed &Fixed::operator=(const Fixed &other) {
//	std::cout << "Assignation operator called" << std::endl;
	_fixedPointValue = other.getRawBits();
	return *this;
}

float Fixed::toFloat(void) const {
	return float(roundf(_fixedPointValue) / (1 << _numberFractionalBits));
}

int Fixed::toInt(void) const {
	return (_fixedPointValue >> _numberFractionalBits);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &other) {
	out << other.toFloat();
	return out;
}

bool	Fixed::operator>(Fixed const &obj) {
	return (this->toFloat() > obj.toFloat());
}

bool	Fixed::operator<(Fixed const &obj) {
	return (this->toFloat() < obj.toFloat());
}

bool	Fixed::operator>=(Fixed const &obj) {
	return (this->toFloat() >= obj.toFloat());
}

bool	Fixed::operator<=(Fixed const &obj) {
	return (this->toFloat() <= obj.toFloat());
}

bool	Fixed::operator==(Fixed const &obj) {
	return (this->toFloat() == obj.toFloat());
}

bool	Fixed::operator!=(Fixed const &obj) {
	return (this->toFloat() != obj.toFloat());
}

Fixed Fixed::operator+(Fixed const &obj) {
	return Fixed(this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator-(Fixed const &obj) {
	return Fixed(this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator*(Fixed const &obj) {
	return Fixed(this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(Fixed const &obj) {
	return Fixed(this->toFloat() / obj.toFloat());
}

Fixed &Fixed::operator++(void) {
	this->_fixedPointValue = this->_fixedPointValue + 1;
	return (*this);
}

Fixed Fixed::operator++(int i) {
	Fixed a(*this);
	(void)i;

	this->_fixedPointValue += 1;
	return (a);
}

Fixed &Fixed::operator--(void) {
	this->_fixedPointValue = this->_fixedPointValue - 1;
	return (*this);
}

Fixed Fixed::operator--(int i) {
	Fixed a(*this);
	(void)i;

	this->_fixedPointValue -= 1;
	return (a);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2) {
	if (f1.toFloat() < f2.toFloat())
		return f1;
	return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2) {
	if (f1.toFloat() > f2.toFloat())
		return f1;
	return f2;
}

Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2) {
	if (f1.toFloat() < f2.toFloat())
		return f1;
	return f2;
}

Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2) {
	if (f1.toFloat() > f2.toFloat())
		return f1;
	return f2;
}