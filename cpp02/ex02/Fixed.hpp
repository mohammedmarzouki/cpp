#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int     _fp;
    const static int _bit;
public:
    Fixed();
    Fixed(const Fixed &);
    Fixed(const int i);
    Fixed(const float f);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    void operator= (const Fixed &);
	Fixed	operator--(int);
	bool	operator>(Fixed const& f) const;
	Fixed	&operator++();
	Fixed	operator++(int);
	bool	operator<(Fixed const& f) const;
	bool	operator==(Fixed const& f) const;
	Fixed	operator-(Fixed const& f) const;
	bool	operator!=(Fixed const& f) const;
	Fixed	operator/(Fixed const& f) const;
	Fixed	&operator--();
	bool	operator<=(Fixed const& f) const;
	bool	operator>=(Fixed const& f) const;
	Fixed	operator+(Fixed const& f) const;
	Fixed	operator*(Fixed const& f) const;
	static Fixed &min(Fixed &f1, Fixed &f2);
	static Fixed const&	min(Fixed const& f1, Fixed const& f2);
	static Fixed &max(Fixed &f1, Fixed &f2);
	static Fixed const&	max(Fixed const& f1, Fixed const& f2);
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
};
std::ostream &operator<<(std::ostream &out, Fixed const &f);

#endif