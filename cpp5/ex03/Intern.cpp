#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(Intern const & data){*this = data;}

Intern::~Intern(){}

Intern &	Intern::operator=(Intern const & data){
	(void)data;
	return *this;
}

Form	*Intern::makeForm(std::string const & name, std::string const & target){
	std::string	forms[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
	Form*		(*funcs[3])(std::string const & target) = {PresidentialPardonForm::clone, RobotomyRequestForm::clone, ShrubberyCreationForm::clone};
	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return funcs[i](target);
		}
	}
	std::cout << "unknown form: " << name << std::endl;
	return NULL;
}
