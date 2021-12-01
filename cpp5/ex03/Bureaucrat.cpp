#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(Bureaucrat const & data) : _Name(data.getName()){*this = data;}

Bureaucrat::~Bureaucrat(){}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & data){this->_Grade = data.getGrade();return *this;}

std::string	Bureaucrat::getName() const{return this->_Name;}

int	Bureaucrat::getGrade() const{return this->_Grade;}

Bureaucrat::Bureaucrat(std::string value, int value2) : _Name(value){
	if (value2 < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (value2 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_Grade = value2;
}

void	Bureaucrat::inc_Grade(){
	if (this->_Grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_Grade--;
}

void	Bureaucrat::dec_Grade(){
	if (this->_Grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_Grade++;
}

std::ostream &	operator<<(std::ostream & out, Bureaucrat const & i){
	out << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
	return out;
}

void	Bureaucrat::signForm(Form const & f){
	if (f.is_signed())
		std::cout << this->_Name << " signs " << f.getName() << std::endl;
	else
		std::cout << this->_Name << " cannot sign " << f.getName() << " because Grade Too Low" << std::endl;
}

void	Bureaucrat::executeForm(Form const & form){
	if (this->getGrade() <= form.getG_EX())
	{
		if (form.is_signed())
		{
			form.execute(*this);
			std::cout << this->getName() << " executes " << form.getName() << "." << std::endl;
		}
		else
			std::cout << "Form not signed!" << std::endl;
	}
	else
		std::cout << "cannot sign because Grade Too Low" << std::endl;
}
