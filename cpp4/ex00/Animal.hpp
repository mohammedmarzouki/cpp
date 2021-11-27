#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal{
protected:
	std::string		type;
public:
	Animal();
	Animal(Animal const&);
    Animal	&operator=(const Animal &);
    virtual void makeSound(void)const;
    std::string getType(void) const;
	virtual ~Animal();
};

#endif