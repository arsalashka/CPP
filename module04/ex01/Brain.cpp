//
// Created by Mauro Early on 11/29/21.
//

#include "Brain.hpp"

Brain::Brain() {
	std::cout << GREEN;
	std::cout << "Animal's default constructor was called" << std::endl;
	std::cout << RESET;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "0";
}

Brain::Brain(Brain &obj) {

}

Brain &Brain::operator=(Brain &obj) {

}

Brain::~Brain() {

}

