#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
		Contact();
		~Contact();
		std::string	getfirst_name(void) const;
		void		setfirst_name(std::string);
		std::string	getlast_name(void) const;
		void		setlast_name(std::string);
		std::string	getnickname(void) const;
		void		setnickname(std::string);
		std::string	getphone_number(void) const;
		void		setphone_number(std::string);
		std::string	getdarkest_secret(void) const;
		void		setdarkest_secret(std::string);
};

#endif