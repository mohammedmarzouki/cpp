#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int     _fp;
    const static int _bit;
public:
    Fixed();
    Fixed(const Fixed &);
    int getRawBits(void) const;
    void operator= (const Fixed &);
    void setRawBits(int const raw);
    ~Fixed();
};

#endif