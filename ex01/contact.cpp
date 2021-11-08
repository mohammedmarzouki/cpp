#include "contact.hpp"

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
	std::cout << "Contact created\n";
}

Contact::~Contact()
{
	std::cout << "Contact deleted\n";
}

void		Contact::print_data(void) const {
	
	std::cout << "First Name : " << this->first_name << std::endl;
	std::cout << "Last Name : " << this->last_name << std::endl;
	std::cout << "Nickame : " << this->nickname << std::endl;
	std::cout << "Phone Number : " << this->phone_number << std::endl;
	std::cout << "Darkest Secret : " << this->darkest_secret << std::endl;
}

std::string	Contact::getfirst_name(void) const {
	return this->first_name;
}
void		Contact::setfirst_name(std::string s) {
	this->first_name = s;
}
std::string	Contact::getlast_name(void) const {
	return this->last_name;
}
void		Contact::setlast_name(std::string s) {
	this->last_name = s;
}
std::string	Contact::getnickname(void) const {
	return this->nickname;
}
void		Contact::setnickname(std::string s) {
	this->nickname = s;
}
std::string	Contact::getphone_number(void) const {
	return this->phone_number;
}
void		Contact::setphone_number(std::string s) {
	this->phone_number = s;
}
std::string	Contact::getdarkest_secret(void) const {
	return this->darkest_secret;
}
void		Contact::setdarkest_secret(std::string s) {
	this->darkest_secret = s;
}
