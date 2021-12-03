//
// Created by Mauro Early on 12/3/21.
//

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("shrubbery", 145, 137),
	_target("default") {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
		Form("shrubbery", 145, 137) {
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &obj):
	Form(obj) {
	this->_target = obj._target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=
		(ShrubberyCreationForm &obj) {
	this->Form::operator=(obj);
	this->_target = obj._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

std::string ShrubberyCreationForm::getTarget() {
	return _target;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (this->getIsSigned() == false) {
		throw NotSignedYet();
	}
	if (this->getGradeExecIt() < executor.getGrade()) {
		throw GradeTooLowException();
	}

	std::ofstream tree(this->_target + "_shrubbery", std::ofstream::out);
	tree << "                                            .                " << std::endl;
	tree << "                                          .         ;        " << std::endl;
	tree << "             .              .              ;%     ;;         " << std::endl;
	tree << "               ,           ,                :;%  %;          " << std::endl;
	tree << "                :         ;                   :;%;'     .,   " << std::endl;
	tree << "       ,.        %;     %;            ;        %;'    ,;     " << std::endl;
	tree << "         ;       ;%;  %%;        ,     %;    ;%;    ,%'      " << std::endl;
	tree << "          %;       %;%;      ,  ;       %;  ;%;   ,%;'       " << std::endl;
	tree << "           ;%;      %;        ;%;        % ;%;  ,%;'         " << std::endl;
	tree << "            `%;.     ;%;     %;'         `;%%;.%;'           " << std::endl;
	tree << "             `:;%.    ;%%. %@;        %; ;@%;%'              " << std::endl;
	tree << "                `:%;.  :;bd%;          %;@%;'                " << std::endl;
	tree << "                  `@%:.  :;%.         ;@@%;'                 " << std::endl;
	tree << "                    `@%.  `;@%.      ;@@%;                   " << std::endl;
	tree << "                      `@%%. `@%%    ;@@%;                    " << std::endl;
	tree << "                        ;@%. :@%%  %@@%;                     " << std::endl;
	tree << "                          %@bd%%%bd%%:;                      " << std::endl;
	tree << "                            #@%%%%%:;;                       " << std::endl;
	tree << "                            %@@%%%::;                        " << std::endl;
	tree << "                            %@@@%(o);  . '                   " << std::endl;
	tree << "                            %@@@o%;:(.,'                     " << std::endl;
	tree << "                        `.. %@@@o%::;                        " << std::endl;
	tree << "                           `)@@@o%::;                        " << std::endl;
	tree << "                            %@@(o)::;                        " << std::endl;
	tree << "                           .%@@@@%::;                        " << std::endl;
	tree << "                           ;%@@@@%::;.                       " << std::endl;
	tree << "                          ;%@@@@%%:;;;.                      " << std::endl;
	tree << "                      ...;%@@@@@%%:;;;;,..                   " << std::endl;

	tree.close();

	std::cout << GREEN << "Tree was created" << RESET << std::endl;
}
