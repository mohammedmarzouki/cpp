#include "Cat.hpp"

Cat::~Cat() {}

Cat::Cat(){this->type = "Cat";}

void    Cat::makeSound(void) const{std::cout << "meaw" << std::endl;}

Cat	&Cat::operator=(const Cat &cp) {type = cp.type; return (*this);}

Cat::Cat(Cat const& src) {*this = src;}