#include <iostream>

int	main(int argc,char **argv) {
	for (int i(1); i < argc; i++) {
		int len = strlen(argv[i]);
		for (int j(0); j < len; j++)
			std::cout << (char)toupper(argv[i][j]);
	}
	argc == 1 ? std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" : 0;
	std::cout << std::endl;
}
