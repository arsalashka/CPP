//
// Created by Mauro Early on 12/3/21.
//


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():
	Form("robotomy", 72, 45), _target("default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string str):
		Form("robotomy", 72, 45),
		_target(str) {
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &obj):
	Form(obj) {
	this->_target = obj._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &obj) {
	this->Form::operator=(obj);
	this->_target = obj._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string RobotomyRequestForm::getTarget() {
	return _target;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (this->getIsSigned() == false) {
		throw NotSignedYet();
	}
	if (this->getGradeExecIt() < executor.getGrade()) {
		throw GradeTooLowException();
	}
	std::cout <<PINK << "MAKE SOME NOISE!!!" << RESET <<std::endl;
	std::srand((unsigned int)time(NULL));
	int  action = rand() % 2;
	if (action == 1) {
		std::cout << GREEN << _target << " has been robotomized successfully"
								" 50% of the time" << RESET << std::endl;
	} else {
		std::cout << RED << _target << " hasn't been robotomized. FAILURE"
			<< RESET << std::endl;
	}
}


