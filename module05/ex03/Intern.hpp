//
// Created by Mauro Early on 12/3/21.
//

#ifndef CPP_INTERN_HPP
#define CPP_INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Form;

class Intern {
private:
	class WrongFormName: public std::exception {
	public:
		const char*	what() const throw();
	};
	Form	*shrubbery_func(std::string const target);
	Form	*robotomy_func(std::string const target);
	Form	*presidental_func(std::string const target);
public:
	Intern();
	Intern(Intern &obj);
	Intern &operator=(Intern &obj);
	~Intern();

	Form *makeForm(std::string formName, std::string target);
};


#endif //CPP_INTERN_HPP
