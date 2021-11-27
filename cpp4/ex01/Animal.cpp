#include "Animal.hpp"

Animal	&Animal::operator=(const Animal &cp) {type = cp.type; return (*this);}

Animal::Animal() {}

Animal::Animal(Animal const& src) {*this = src;}

std::string     Animal::getType(void) const {return(type);}

void    Animal::makeSound(void) const {std::cout << "Animals don't have a sound" << std::endl;}

Animal::~Animal() {}