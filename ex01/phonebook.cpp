#include "phonebook.hpp"

Phonebook::Phonebook() {
	index = 0;
	list = 0;
	std::cout << "Phonebook Created \n";
}

Phonebook::~Phonebook() {
	std::cout << "Phonebook Deleted \n";
}

void	Phonebook::add(void) {
	std::string hold;

	std::cout << "Please, enter your first name: ";
	std::getline (std::cin, hold);
	my_list[index].setfirst_name(hold);

	std::cout << "Please, enter your last name: ";
	std::getline (std::cin, hold);
	my_list[index].setlast_name(hold);

	std::cout << "Please, enter your nickname: ";
	std::getline (std::cin, hold);
	my_list[index].setnickname(hold);

	std::cout << "Please, enter your phone number: ";
	std::getline (std::cin, hold);
	my_list[index].setphone_number(hold);

	std::cout << "Please, enter your darkest secret: ";
	std::getline (std::cin, hold);
	my_list[index++].setdarkest_secret(hold);

	index = index % 8;
	list = list < 8 ? list + 1 : list;
}

void	Phonebook::search(void) {
	std::string hold;
	int			value;

	printnumber(-1);
	std::cout << "Please, enter the index you want: ";
	std::getline (std::cin, hold);
	if (hold.length() == 1 && isdigit(hold[0])) {
		value = std::stoi(hold);
		if (value > list) {
			std::cout << "index does not exist" << std::endl;
			return;
		}
		printnumber(value);
		return;
	}
	std::cout << "index does not exist" << std::endl;
}

void	Phonebook::printnumber(int i) {
	std::cout << std::endl;
	std::cout << "   index  |first name|last  name| nickname |" << std::endl;
	
}