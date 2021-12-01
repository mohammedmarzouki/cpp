#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const & data){this->_Grade = data.getGrade();return *this;}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(Bureaucrat const & data) : _Name(data.getName()){*this = data;}

std::string	Bureaucrat::getName() const{return this->_Name;}

int	Bureaucrat::getGrade() const{return this->_Grade;}

Bureaucrat::Bureaucrat(std::string name, int grade) : _Name(name){
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_Grade = grade;
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

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & i){
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
	return o;
}
