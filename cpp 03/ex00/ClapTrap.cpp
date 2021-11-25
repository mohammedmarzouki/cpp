#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attackDamage(0) {std::cout << "Default constructor called" << std::endl;}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {std::cout << "Name constructor called" << std::endl;}

ClapTrap::ClapTrap(ClapTrap const& src) {std::cout << "Copy constructor called" << std::endl;*this = src;}

ClapTrap::~ClapTrap() {std::cout << "Destructor called" << std::endl;}

std::string	ClapTrap::getName(void) const {return (_name);}

unsigned int	ClapTrap::getHitPoints(void) const {return (_hitPoints);}

unsigned int	ClapTrap::getEnergyPoints(void) const {return (_energyPoints);}

unsigned int	ClapTrap::getAttackDamage(void) const {return (_attackDamage);}

ClapTrap	&ClapTrap::operator=(const ClapTrap &cp)
{
	std::cout << "Equal operator called" << std::endl;
	_name = cp.getName();
	_hitPoints = cp.getHitPoints();
	_energyPoints = cp.getEnergyPoints();
	_attackDamage = cp.getAttackDamage();
	return (*this);
}

void	ClapTrap::beRepaired(unsigned int amount) {
	_energyPoints += amount;
	std::cout << "ClapTrap " << this->_name << " is repaired gaining " << amount << " points of damage! " << std::endl;
	std::cout << this->_name << " has " << this->_energyPoints << " energy points" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	amount > _energyPoints ? _energyPoints = 0 : _energyPoints -= amount;
	std::cout << this->_name << " has been hit by " << amount << " points of damage and left with " << this->_energyPoints << " energy points" << std::endl;
}

void	ClapTrap::attack(std::string const& target) {
	if (this->_hitPoints > 0)
		std::cout << this->_name << " attacked " << target << ", causing " << _attackDamage << " points of damage! " << std::endl;
	else
		std::cout << "You are Dead" << std::endl;
}
