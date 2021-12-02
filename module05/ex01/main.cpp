//
// Created by Mauro Early on 12/1/21.
//

#include "Bureaucrat.hpp"

int main() {

	std::cout << YELLOW << "\n=======================================\n"
			  << RESET << std::endl;

	try {
		Bureaucrat Steve("Steve", 120);
		std::cout << GREEN << Steve << RESET << std::endl;

		Form form("blank", 100, 150);
		std::cout << GREEN << form << RESET << std::endl;


		form.beSigned(Steve);

		std::cout << GREEN << form << RESET << std::endl;

	} catch(const std::exception &e) {
		std::cerr << RED << e.what() << RESET << std::endl;
	};


	std::cout << YELLOW << "\n=======================================\n"
			  << RESET << std::endl;





	return 0;
}