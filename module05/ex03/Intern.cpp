//
// Created by Mauro Early on 12/3/21.
//

#include "Intern.hpp"

Intern::Intern() {
}

Intern::Intern(Intern &intern) {
	(void)intern;
}

Intern	&Intern::operator=(Intern &intern) {
	(void)intern;
	return *this;
}

Intern::~Intern() {
}

Form	*Intern::shrubbery_func(std::string const target)
{
	return new ShrubberyCreationForm(target);
}

Form	*Intern::robotomy_func(std::string const target)
{
	return new RobotomyRequestForm(target);
}

Form	*Intern::presidental_func(std::string const target)
{
	return new PresidentialPardonForm(target);
}


Form *Intern::makeForm(std::string formName, std::string target) {
	size_t i = 0;

	std::string	names[3] = {"presidental request", "robotomy request", "shrubbery request"};
	for (; i < 3 && names[i] != formName; i++)
	{
	}
	typedef Form *(Intern::*constructors)(std::string const target);
	constructors FormsArr[3] = {&Intern::presidental_func, &Intern::robotomy_func, &Intern::shrubbery_func};

	Form	*result = NULL;
	switch (i)
	{
		case 0:
		case 1:
		case 2:
			delete result;
			result = (this->*FormsArr[i])(target);
			std::cout << "Intern creates " << result->getName() << std::endl;
			return result;
		default:
			throw WrongFormName();
	}
}

const char* Intern::WrongFormName::what() const throw()
{
	return "Invalid form name";
}
