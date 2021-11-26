#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const& src) {std::cout << "FragTrap copy constructor has been called" << std::endl;*this = src;}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap() {std::cout << "FragTrap destructor called" << std::endl;}

void	FragTrap::highFivesGuys(void) {std::cout << "FragTrap " << this->_name << ": HIGH FIVE?" << std::endl;}

void	FragTrap::attack(std::string const& target) {
	if (this->_hitPoints > 0)
		std::cout << "FragTrap " << this->_name << " attack " << target << ", causing " << _attackDamage << " points of damage! " << std::endl;
	else
		std::cout << "No hit points left. Good luck next time." << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &op)
{
	std::cout << "FragTrap equal operator called" << std::endl;
	this->_name = op._name;
	this->_hitPoints = op._hitPoints;
	this->_energyPoints = op._energyPoints;
	this->_attackDamage = op._attackDamage;
	return (*this);
}