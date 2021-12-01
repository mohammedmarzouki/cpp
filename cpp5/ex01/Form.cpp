#include "Form.hpp"

Form::Form() : _Grade_sgn(1), _Grade_exec(1){this->_is_signed = false;}

Form::Form(std::string value, int value2, int value3) : _Name(value), _Grade_sgn(value2), _Grade_exec(value3){
	this->_is_signed = false;
	if (value2 < 1 || value3 < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (value2 > 150 || value3 > 150)
		throw Bureaucrat::GradeTooLowException();
}

Form::Form(Form const & data) : _Name(data.getName()), _Grade_sgn(data.getG_SG()), _Grade_exec(data.getG_EX()) {*this = data;}

Form::~Form(){}

Form &	Form::operator=(Form const & data){
	if (this != &data)
		this->_is_signed = data.is_signed();
	return *this;
}

std::string	Form::getName() const{return this->_Name;}

int			Form::getG_SG() const{return this->_Grade_sgn;}

int			Form::getG_EX() const{return this->_Grade_exec;}

bool		Form::is_signed() const{return this->_is_signed;}

void	Form::beSigned(Bureaucrat & b){
	if (b.getGrade() <= this->_Grade_sgn)
		this->_is_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream &	operator<<(std::ostream & out, Form const & i){
	out << "Form : " << i.getName() << ",  grade required to sign : " << i.getG_SG();
	out << ", grade required to execute : " << i.getG_EX();
	if (i.is_signed())
		out << ", is signed.";
	else
		out << ", is not signed.";
	return out;
}
