//
// Created by Mauro Early on 12/3/21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():
	Form("presidential", 25, 5),
	_target("default") {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
		Form("presidential", 25, 5), _target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &obj):
	Form(obj) {
	this->_target = obj._target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(
		PresidentialPardonForm &obj) {
	this->Form::operator=(obj);
	this->_target = obj._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string PresidentialPardonForm::getTarget() {
	return _target;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (this->getIsSigned() == false) {
		throw NotSignedYet();
	}
	if (this->getGradeExecIt() < executor.getGrade()) {
		throw GradeTooLowException();
	}
	std::cout << GREEN << _target << " has been pardoned by Zafod Beeblebrox"
		<< RESET << std::endl;
}
