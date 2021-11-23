#include "Fixed.hpp"

const int Fixed::_bit = 8;

Fixed::Fixed() :_fp(0) {std::cout << "Default constructor called" << std::endl;}

Fixed::Fixed(const Fixed &a) {std::cout << "Copy constructor called" << std::endl; this->_fp = a.getRawBits();}

Fixed::Fixed(const int i) {std::cout << "Int constructor called" << std::endl;setRawBits((i << _bit));}

Fixed::Fixed(const float f) {std::cout << "Float constructor called" << std::endl;setRawBits(roundf(f * (1 << _bit)));}

int	Fixed::getRawBits()const {  return(this->_fp);}

void Fixed::setRawBits(int const raw) {_fp = raw ;}

void Fixed::operator = (const Fixed &a) {std::cout << "Assignation operator called" << std::endl; this->_fp = a.getRawBits();}

float   Fixed::toFloat(void) const {return(((float)getRawBits() / (1 << _bit)));}

int     Fixed::toInt(void) const {return((getRawBits() >> _bit));}

Fixed::~Fixed(){std::cout << "Destructor called" << std::endl;}

std::ostream &operator << (std::ostream &out, Fixed const &f) {out << f.toFloat(); return(out);}