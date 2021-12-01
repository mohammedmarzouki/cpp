#include "Form.hpp"

Form::Form() : _Grade_sgn(1), _Grade_exec(1){this->_is_signed = false;}

std::string	Form::getName() const{return this->_Name;}

std::string	Form::getTarget() const{return this->_Target;}

int			Form::getG_SG() const{return this->_Grade_sgn;}

int			Form::getG_EX() const{return this->_Grade_exec;}

bool		Form::is_signed() const{return this->_is_signed;}

void		Form::set_is_signed(bool value){this->_is_signed = value;}

Form::Form(Form const & data) : _Name(data.getName()), _Grade_sgn(data.getG_SG()), _Grade_exec(data.getG_EX()){*this = data;}

Form::~Form(){}

Form::Form(std::string name, std::string target, int g_sgn, int g_exec) : _Name(name), _Target(target), _Grade_sgn(g_sgn), _Grade_exec(g_exec){
	this->_is_signed = false;
	if (g_sgn < 1 || g_exec < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (g_sgn > 150 || g_exec > 150)
		throw Bureaucrat::GradeTooLowException();
}

Form &	Form::operator=(Form const & data){
	if (this != &data)
		this->_is_signed = data.is_signed();
	return *this;
}

void	Form::beSigned(Bureaucrat & b){
	if (b.getGrade() <= this->_Grade_sgn)
		this->_is_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream &	operator<<(std::ostream & o, Form const & i){
	o << "Form : " << i.getName() << ",  grade required to sign : " << i.getG_SG();
	o << ", grade required to execute : " << i.getG_EX();
	if (i.is_signed())
		o << ", is signed.";
	else
		o << ", is not signed.";
	return o;
}
