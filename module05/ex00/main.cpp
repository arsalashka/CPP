//
// Created by Mauro Early on 12/1/21.
//

#include "Bureaucrat.hpp"

int main() {

	std::cout << YELLOW << "\n=======================================\n"
			  << RESET << std::endl;

	/*lowest grade*/
	try {
		Bureaucrat bb("John", 150);
		std::cout << GREEN << bb << RESET << std::endl;
	} catch(const std::exception& e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << YELLOW << "\n=======================================\n"
			  << RESET << std::endl;

	/*copy constructor*/
	try {
		Bureaucrat bb("Nathan", 32);
		std::cout << GREEN << bb << RESET << std::endl;

		Bureaucrat cc(bb);
		std::cout << GREEN << cc << RESET << std::endl;

		Bureaucrat dd("Kevin", 45);
		dd = cc;
		std::cout << GREEN << dd << RESET << std::endl;
	} catch (const std::exception &e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << YELLOW << "\n=======================================\n"
			  << RESET << std::endl;

	/*lowest grade exception*/

	try {
		Bureaucrat bb("Sara", 170);
		std::cout << GREEN << bb << RESET << std::endl;
	} catch(const std::exception& e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << YELLOW << "\n=======================================\n"
			  << RESET << std::endl;

	/*highest grade exception*/
	try {
		Bureaucrat bb("Mike", 0);
		std::cout << GREEN << bb << RESET << std::endl;
	} catch(const std::exception& e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << YELLOW << "\n=======================================\n"
			  << RESET << std::endl;

	/*highest grade exception by increasing*/
	try {
		Bureaucrat bb("Lola", 10);
		std::cout << GREEN << bb << RESET << std::endl;
		while (true) {
			bb.incrementGrade();
			std::cout << GREEN << bb << RESET << std::endl;
		}
	} catch(const std::exception& e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << YELLOW << "\n=======================================\n"
			  << RESET << std::endl;

	/*lowest grade exception by decreasing*/
	try {
		Bureaucrat bb("Pedro", 140);
		std::cout << GREEN << bb << RESET << std::endl;
		while (true) {
			bb.decrementGrade();
			std::cout << GREEN << bb << RESET << std::endl;
		}
	} catch(const std::exception& e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << YELLOW << "\n=======================================\n"
			  << RESET << std::endl;

	return 0;
}