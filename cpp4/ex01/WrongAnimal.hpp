#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal{
protected:
	std::string		type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const&);
    WrongAnimal	&operator=(const WrongAnimal &);
    void makeSound(void) const;
    std::string getType(void) const;
	virtual ~WrongAnimal();
};

#endif