//
// Created by Mauro Early on 12/1/21.
//

#ifndef CPP_BUREAUCRAT_HPP
#define CPP_BUREAUCRAT_HPP

# define RESET		"\033[0m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define PINK		"\033[35m"

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat {

private:
	const std::string _name;
	int _grade;

	class GradeTooHighException: public std::exception {
	public:
		const char *what() const throw();
	};
	class GradeTooLowException: public std::exception {
	public:
		const char *what() const throw();
	};

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &obj);
	Bureaucrat &operator=(const Bureaucrat &obj);
	~Bureaucrat();

	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();

	void signForm(const Form &form);
	void executeForm(Form const & form);
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif //CPP_BUREAUCRAT_HPP
