#ifndef WrongCAT_HPP
# define WrongCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
public:
    WrongCat();
	WrongCat(WrongCat const&);
    WrongCat	&operator=(const WrongCat &);
    void    makeSound(void) const;
    ~WrongCat();
};

#endif