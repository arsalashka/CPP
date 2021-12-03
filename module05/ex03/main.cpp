//
// Created by Mauro Early on 12/1/21.
//

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main() {

	std::cout << YELLOW << "\n=======================================\n"
			  << RESET << std::endl;
	//
	try {
//		ShrubberyCreationForm sf("home");	//	145, 137
		Intern intern;

		Form *sf;
		sf = intern.makeForm("shrubbery request", "Home");

		Bureaucrat Steve("Steve", 140);
		Bureaucrat Barney("Barney", 140);
		Bureaucrat Leo("Leo", 130);


		sf->beSigned(Steve);

		Leo.executeForm(*sf);

		Barney.executeForm(*sf);


	} catch(const std::exception &ex) {
		std::cerr << RED << ex.what() << RESET << std::endl;
	};


	std::cout << YELLOW << "\n=======================================\n"
			  << RESET << std::endl;


	try {
		Bureaucrat Patrik("Patrik", 100);
		Bureaucrat Zherar("Zherar", 5);

		Intern someRandomIntern;
		Form *rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		rrf->beSigned(Zherar);

		Zherar.executeForm(*rrf);


	} catch (std::exception &ex) {
		std::cerr << RED << ex.what() << RESET << std::endl;
	}


	return 0;
}