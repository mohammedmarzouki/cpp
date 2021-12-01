#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat tst("tom", 10);
		tst.inc_Grade();
		std::cout << tst << std::endl;
		tst.dec_Grade();
		tst.dec_Grade();
		std::cout << tst << std::endl;
		
		// Bureaucrat b2("f1", 0);
		// Bureaucrat b3("f2", 160);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}