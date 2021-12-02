//
// Created by Mauro Early on 12/2/21.
//

#ifndef CPP_FORM_HPP
#define CPP_FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
private:
	const std::string _name;
	bool _isSigned;
	const int _gradeSignIt;
	const int _gradeExecIt;

	void	checkGrades();

	class GradeTooHighException: public std::exception {
	public:
		const char *what() const throw();
	};
	class GradeTooLowException: public std::exception {
	public:
		const char *what() const throw();
	};
public:
	Form();
	Form(std::string const name, const int gradeSignIt, const int gradeExecIt);
	Form(Form &obj);
	Form &operator=(Form &obj);
	~Form();


	std::string getName() const;
	bool getIsSigned() const;
	int getGradeSignIt() const;
	int getGradeExecIt() const;

	void beSigned(Bureaucrat &bCrat);

};

std::ostream &operator<<(std::ostream &os, const Form &obj);

#endif //CPP_FORM_HPP
