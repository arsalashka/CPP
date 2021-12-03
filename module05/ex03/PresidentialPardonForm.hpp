//
// Created by Mauro Early on 12/3/21.
//

#ifndef CPP_PRESIDENTIALPARDONFORM_HPP
#define CPP_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm: public Form {
private:
	std::string _target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm &obj);
	PresidentialPardonForm &operator=(PresidentialPardonForm &obj);
	~PresidentialPardonForm();

	std::string getTarget();
	void execute(Bureaucrat const & executor) const;
};


#endif //CPP_PRESIDENTIALPARDONFORM_HPP
