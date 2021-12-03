//
// Created by Mauro Early on 12/3/21.
//

#ifndef CPP_ROBOTOMYREQUESTFORM_HPP
#define CPP_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form {
private:
	std::string _target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string str);
	RobotomyRequestForm(RobotomyRequestForm &obj);
	RobotomyRequestForm &operator=(RobotomyRequestForm &obj);
	~RobotomyRequestForm();

	std::string getTarget();
	void execute(Bureaucrat const & executor) const;
};


#endif //CPP_ROBOTOMYREQUESTFORM_HPP
