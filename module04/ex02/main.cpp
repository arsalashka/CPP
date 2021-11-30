//
// Created by Mauro Early on 11/28/21.
//

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main() {

	// abstract class
//	const Animal *animal = new Animal();
//	animal->makeSound();

	const Animal *cat = new Cat();
	const Animal *dog = new Dog();

	std::cout << cat->getType() << std::endl;
	cat->makeSound();
	std::cout << dog->getType() << std::endl;
	dog->makeSound();

	delete dog;
	delete cat;

	std::cout << YELLOW << "=======================================\n" << RESET
			  << std::endl;
	std::cout << YELLOW << "=======================================\n" << RESET
			  << std::endl;

	Cat c;
	Dog d;
	Cat e(c);

	std::cout << c.getType() << " " << c.getBrain()->getIdeas()[3] << std::endl;
	std::cout << d.getType() << " " << d.getBrain()->getIdeas()[8] << std::endl;
	std::cout << e.getType() << " " << e.getBrain()->getIdeas()[9] << std::endl;

	return 0;
}
