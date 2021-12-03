//
// Created by Mauro Early on 12/3/21.
//

#ifndef CPP_SHRUBBERYCREATIONFORM_HPP
#define CPP_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form {
private:
	std::string _target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm &obj);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm &obj);
	~ShrubberyCreationForm();

	std::string getTarget();
	void execute(Bureaucrat const & executor) const;
};


#endif //CPP_SHRUBBERYCREATIONFORM_HPP
