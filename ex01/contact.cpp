#include "contact.hpp"

Contact::Contact()
{
	std::cout << "Contact created\n";
}

Contact::~Contact()
{
	std::cout << "Contact deleted\n";
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
