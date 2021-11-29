//
// Created by Mauro Early on 11/28/21.
//

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main() {

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << YELLOW << "===========================\n" << RESET << std::endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << YELLOW << "===========================\n" << RESET << std::endl;

	delete i;
	delete j;
	delete meta;

	std::cout << YELLOW << "===========================\n" << RESET << std::endl;
	std::cout << YELLOW << "===========================\n" << RESET << std::endl;

	const WrongAnimal *beta = new WrongAnimal();
	const WrongAnimal *wCat = new WrongCat;

	std::cout << YELLOW << "===========================\n" << RESET << std::endl;

	beta->makeSound();
	wCat->makeSound();

	std::cout << YELLOW << "===========================\n" << RESET << std::endl;


	delete wCat;
	delete beta;

	return 0;
}