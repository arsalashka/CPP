//
// Created by Mauro Early on 12/2/21.
//

#include "Form.hpp"

Form::Form(): _name("noName form"), _isSigned(false),_gradeSignIt(150),
	_gradeExecIt(150) {
}

Form::Form(const std::string name, const int gradeSignIt,
		   const int gradeExecIt): _name(name), _isSigned(false),
		   _gradeSignIt(gradeSignIt), _gradeExecIt(gradeExecIt) {
	checkGrades();
}

Form::Form(Form &obj): _name(obj.getName()), _isSigned(getIsSigned()),
	_gradeSignIt(getGradeSignIt()), _gradeExecIt(getGradeExecIt()) {
	checkGrades();
}

Form &Form::operator=(Form &obj) {
	_isSigned = obj.getIsSigned();
	return *this;
}

Form::~Form() {
}

void Form::checkGrades() {
	if (_gradeSignIt < 1 || _gradeExecIt < 1) {
		throw Form::GradeTooHighException();
	} else if (_gradeSignIt > 150 || _gradeExecIt > 150) {
		throw Form::GradeTooLowException();
	}
}

const char *Form::GradeTooHighException::what() const throw() {
	return "form's grade is too low";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "form's grade is too high";
}

std::string Form::getName() const {
	return _name;
}

bool Form::getIsSigned() const {
	return _isSigned;
}

int Form::getGradeSignIt() const {
	return _gradeSignIt;
}

int Form::getGradeExecIt() const {
	return _gradeExecIt;
}

std::ostream &operator<<(std::ostream &os, const Form &obj) {
	os << GREEN;
	os << "Form name: " << obj.getName();
	os << "; Is signed: " << obj.getIsSigned();
	os << "; gradeSignIt: " << obj.getGradeSignIt();
	os << "; gradeExecIt: " << obj.getGradeExecIt() << RESET;
	return os;
}

void Form::beSigned(Bureaucrat &bCrat) {
	if (bCrat.getGrade() <= _gradeSignIt) {
		_isSigned = true;
		bCrat.signForm(*this);
	} else {
		bCrat.signForm(*this);
		throw GradeTooLowException();
	}
}

