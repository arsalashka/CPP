//
// Created by Mauro Early on 11/28/21.
//

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int	main() {


//	const Animal* j = new Dog();
//	const Animal* i = new Cat();
//	delete j;//should not create a leak
//	delete i;
//
//	std::cout << YELLOW << "=======================================\n" << RESET
//			  << std::endl;
//
//	int N = 10;
//
//	const Animal *animals[N];
//
//	for (int i = 0; i < N; i++) {
//		if (i < N/2) {
//			animals[i] = new Dog();
//			std::cout << std::endl;
//		} else {
//			animals[i] = new Cat();
//			std::cout << std::endl;
//		}
//	}
//
//	std::cout << YELLOW << "=======================================\n" << RESET
//		<< std::endl;
//
//
//
//	animals[3]->makeSound();
//	animals[6]->makeSound();
//
//
//	std::cout << YELLOW << "=======================================\n" << RESET
//			  << std::endl;
//
//	for (int i = 0; i < N; i++) {
//		delete animals[i];
//		std::cout << std::endl;
//	}
//
//
//	std::cout << YELLOW << "=======================================\n" << RESET
//			  << std::endl;
//	std::cout << YELLOW << "=======================================\n" << RESET
//			  << std::endl;
//
//	Dog a;
//
//	Dog b(a);
//
//	std::cout << b.getBrain()->getIdeas()[6] << std::endl;
//
//	std::cout << (b.getBrain()->getIdeas()[5]) << std:: endl;
//
//	std::cout << YELLOW << "=======================================\n" << RESET
//			  << std::endl;
//
//	Cat c;
//	Cat d(c);
//	std::cout << d.getBrain()->getIdeas()[9] << std::endl;
//
//	std::cout << (d.getBrain()->getIdeas()[3]) << std:: endl;


	Animal *x = new Dog();

	Animal *y(x);

	return 0;
}