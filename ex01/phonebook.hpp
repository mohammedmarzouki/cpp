#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iomanip>

class Phonebook {
	private:
		int					index;
		int					list;
		Contact				my_list[8];
		void	printall(void) const;
	public:
		Phonebook(void);
		~Phonebook(void);
		void	add(void);
		void	search(void);
};



#endif