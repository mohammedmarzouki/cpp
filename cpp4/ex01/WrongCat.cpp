#include "WrongCat.hpp"

WrongCat::~WrongCat() {}

WrongCat::WrongCat(){this->type = "WrongCat";}

void    WrongCat::makeSound(void) const {std::cout << "meaw" << std::endl;}

WrongCat	&WrongCat::operator=(const WrongCat &cp) {type = cp.type; return (*this);}

WrongCat::WrongCat(WrongCat const& src) {*this = src;}