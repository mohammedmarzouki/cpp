#include "Dog.hpp"

Dog::~Dog() {}

Dog::Dog(){this->type = "Dog";}

void    Dog::makeSound(void) const{std::cout << "Woof" << std::endl;}

Dog	&Dog::operator=(const Dog &cp) {type = cp.type; return (*this);}

Dog::Dog(Dog const& src) {*this = src;}