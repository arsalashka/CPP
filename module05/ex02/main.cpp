//
// Created by Mauro Early on 12/1/21.
//

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {

	std::cout << YELLOW << "\n=======================================\n"
			  << RESET << std::endl;
	//
	try {
		ShrubberyCreationForm sf("home");	//	145, 137

		Bureaucrat Steve("Steve", 140);
		Bureaucrat Barney("Barney", 140);
		Bureaucrat Leo("Leo", 130);


		sf.beSigned(Steve);

		Leo.executeForm(sf);

		Barney.executeForm(sf);


	} catch(const std::exception &ex) {
		std::cerr << RED << ex.what() << RESET << std::endl;
	};


	std::cout << YELLOW << "\n=======================================\n"
			  << RESET << std::endl;

	try {
		RobotomyRequestForm rf("robotomy");  //	72, 45

		Bureaucrat Mike("Mike", 40);
		Bureaucrat Jonh("John", 70);
		Bureaucrat Kate("Kate", 80);




//		rf.beSigned(Kate);
		rf.beSigned(Mike);

		Mike.executeForm(rf);
	} catch (std::exception &ex) {
		std::cerr << RED << ex.what() << RESET << std::endl;
	}


	std::cout << YELLOW << "\n=======================================\n"
			  << RESET << std::endl;

	try {
		PresidentialPardonForm forma("presential"); //	25, 5
		PresidentialPardonForm pf(forma);


		Bureaucrat Ivan("Ivan", 5);
		Bureaucrat Elena("Elena", 25);
		Bureaucrat Igor("Igor", 30);

		pf.beSigned(Elena);

		Ivan.executeForm(pf);
//		Elena.executeForm(pf);
		Igor.executeForm(pf);
	} catch (std::exception &ex) {
		std::cerr << RED << ex.what() << RESET << std::endl;
	}

	return 0;
}