//
// Created by Mauro Early on 11/29/21.
//

#include "Brain.hpp"

Brain::Brain() {
	std::cout << GREEN;
	std::cout << "Brain's default constructor was called" << std::endl;
	std::cout << RESET;
	for (int i = 0; i < 100; i++)
		_ideas[i] = "idea number " + std::to_string(i);
}

Brain::Brain(Brain &obj) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = obj.getIdeas()[i];
	std::cout << "Brain's copy constructor was called" << std::endl;

}

Brain &Brain::operator=(Brain &obj) {
	std::cout << "Brain's assignation operator overload was called" <<
		std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = obj.getIdeas()[i];
	return (*this);
}

Brain::~Brain() {
	std::cout << RED;
	std::cout << "Brain's destructor was called" << std::endl;
	std::cout << RESET;
}

std::string *Brain::getIdeas() {
	return _ideas;
}
