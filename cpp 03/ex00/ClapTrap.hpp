#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap{
private:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
public:
	ClapTrap();
	ClapTrap(std::string);
	ClapTrap(ClapTrap const&);
	ClapTrap	&operator=(const ClapTrap &);
	std::string		getName(void) const;
	unsigned int	getHitPoints(void) const;
	unsigned int	getAttackDamage(void) const;
	unsigned int	getEnergyPoints(void) const;
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	attack(std::string const&target);
	~ClapTrap();
};

#endif
