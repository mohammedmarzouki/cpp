#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"

class Phonebook {
	private:
		int					index;
		int					list;
		Contact::Contact	my_list[8];
		void	printnumber(int);
	public:
		Phonebook(void);
		~Phonebook(void);
		void	add(void);
		void	search(void);
};



#endif