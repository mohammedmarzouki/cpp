#include "WrongAnimal.hpp"

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &cp) {type = cp.type; return (*this);}

WrongAnimal::WrongAnimal() {}

WrongAnimal::WrongAnimal(WrongAnimal const& src) {*this = src;}

std::string     WrongAnimal::getType(void) const {return(type);}

void    WrongAnimal::makeSound(void) const{std::cout << "Animals don't have a sound" << std::endl;}

WrongAnimal::~WrongAnimal() {}