	//
// Created by Mauro Early on 12/1/21.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Unknown"), _grade(150) {
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name) {
	if (1 <= grade && grade <= 150) {
		_grade = grade;
	} else if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else {
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj): _name(obj._name), _grade(obj
._grade) {
	if (_grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else if (_grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
}

// object was created with const name
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj) {
	_grade = obj.getGrade();
	if (_grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else if (_grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return "1 - is the highest grade of Bureaucrat";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return "150 - is the lowest grade of Bureaucrat";
}

std::string Bureaucrat::getName() const {
	return _name;
}

int Bureaucrat::getGrade() const{
	return _grade;
}

void Bureaucrat::incrementGrade() {
	if (_grade > 1)
		_grade -= 1;
	else
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade() {
	if (_grade < 150)
		_grade += 1;
	else
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}

void Bureaucrat::signForm(const Form &form) {
	if (form.getIsSigned()) {
		std::cout << BLUE << _name << " signs " << form.getName()
			<< RESET << std::endl;
	} else {
		std::cerr << PINK << _name << " cannot sign " << form.getName()
			<< " because gradeSignIt = " << form.getGradeSignIt() << RESET
			<< std::endl;
	}
}

void Bureaucrat::executeForm(const Form &form) {

	try {
		form.execute(*this);
		std::cout << GREEN << _name << " executes " << form.getName() << RESET
			<< std::endl;
	} catch (std::exception &ex) {
		std::cerr << PINK << _name << " can't to execute " <<
		form.getName() << ". Exception: " << RED << ex.what()  << RESET
		<< std::endl;
	}
}