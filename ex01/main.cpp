#include "phonebook.hpp"

int main() {
	Phonebook phone;
	std::string	input;

	while (1) {
		std::cout << "[ADD] [SEARCH] [EXIT]: ";
		std::getline (std::cin, input);
		if (input == "ADD")
			phone.add();
		else if (input == "SEARCH")
			phone.search();
		else if (input == "EXIT")
			return (0);
	}
}