#include "Fixed.hpp"

const int Fixed::_bit = 8;

Fixed::Fixed() :_fp(0) {}

Fixed::Fixed(const Fixed &a) {this->_fp = a.getRawBits();}

Fixed::Fixed(const int i) {setRawBits((i << _bit));}

Fixed::Fixed(const float f) {setRawBits(roundf(f * (1 << _bit)));}

int	Fixed::getRawBits()const {  return(this->_fp);}

void Fixed::setRawBits(int const raw) {_fp = raw ;}

void Fixed::operator = (const Fixed &a) { this->_fp = a.getRawBits();}

float   Fixed::toFloat(void) const {return(((float)getRawBits() / (1 << _bit)));}

int     Fixed::toInt(void) const {return((getRawBits() >> _bit));}

Fixed	&Fixed::operator--() {this->_fp--; return (*this);}

Fixed	&Fixed::operator++() {this->_fp++; return (*this);}

std::ostream &operator << (std::ostream &out, Fixed const &f) {out << f.toFloat(); return(out);}

bool	Fixed::operator>(Fixed const& f) const {return (this->getRawBits() > f.getRawBits());}

bool	Fixed::operator>=(Fixed const& f) const {return (*this == f || this->getRawBits() > f.getRawBits());}

Fixed	Fixed::operator+(Fixed const& f) const {return (Fixed(this->toFloat() + f.toFloat()));}

bool	Fixed::operator<=(Fixed const& f) const {return (*this == f || this->getRawBits() < f.getRawBits());}

bool	Fixed::operator!=(Fixed const& f) const {return (*this != f);}

Fixed	Fixed::operator*(Fixed const& f) const {return (Fixed(this->toFloat() * f.toFloat()));}

bool	Fixed::operator<(Fixed const& f) const {return (this->getRawBits() < f.getRawBits());}

Fixed	Fixed::operator-(Fixed const& f) const {return (Fixed(this->toFloat() - f.toFloat()));}

bool	Fixed::operator==(Fixed const& f) const {return (this->getRawBits() == f.getRawBits());}

Fixed	Fixed::operator/(Fixed const& f) const {return (Fixed(this->toFloat() / f.toFloat()));}

Fixed &Fixed::min(Fixed &f1, Fixed &f2) {
	if (f1 > f2)
		return (f2);
	return (f1);}

Fixed const&	Fixed::min(Fixed const& f1, Fixed const& f2) {
	if (f1 > f2)
		return (f2);
	return (f1);}

Fixed &Fixed::max(Fixed &f1, Fixed &f2) {
	if (f1 < f2)
		return (f2);
	return (f1);}

Fixed::~Fixed(){}

Fixed const&	Fixed::max(Fixed const& f1, Fixed const& f2) {
	if (f1 < f2)
		return (f2);
	return (f1);}


Fixed	Fixed::operator++(int) {
	Fixed	tmp(*this);
	++*this;
	return (tmp);
}


Fixed	Fixed::operator--(int) {
	Fixed	temp(*this);
	--*this;
	return (temp);
}