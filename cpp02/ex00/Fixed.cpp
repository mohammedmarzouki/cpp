#include "Fixed.hpp"

const int Fixed::_bit = 8;

Fixed::Fixed() :_fp(0) {std::cout << "Default constructor called" << std::endl;}

int	Fixed::getRawBits()const { std::cout << "getRawBits member function called" << std::endl; return(this->_fp);}

void Fixed::setRawBits(int const raw) {_fp = raw ;}

void Fixed::operator = (const Fixed &a) {std::cout << "Assignation operator called" << std::endl; this->_fp = a.getRawBits();}

Fixed::Fixed(const Fixed &a) {std::cout << "Copy constructor called" << std::endl; this->_fp = a.getRawBits();}

Fixed::~Fixed(){std::cout << "Destructor called" << std::endl;}