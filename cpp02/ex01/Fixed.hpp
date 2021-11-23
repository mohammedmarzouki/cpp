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
    void operator= (const Fixed &);
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;

    ~Fixed();
};
    std::ostream &operator<<(std::ostream &out, Fixed const &f);

#endif