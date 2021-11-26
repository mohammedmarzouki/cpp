#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap name constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap const& src) {std::cout << "ScavTrap copy constructor called" << std::endl;*this = src;}

ScavTrap::~ScavTrap() {std::cout << "ScavTrap destructor called" << std::endl;}

void	ScavTrap::guardGate() {std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode" << std::endl;}

ScavTrap	&ScavTrap::operator=(const ScavTrap &op)
{
	std::cout << "ScavTrap equal operator called" << std::endl;
	this->_name = op._name;
	this->_hitPoints = op._hitPoints;
	this->_energyPoints = op._energyPoints;
	this->_attackDamage = op._attackDamage;
	return (*this);
}

void	ScavTrap::attack(std::string const& target) {
	if (this->_hitPoints > 0)
		std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << _attackDamage << " points of damage! " << std::endl;
	else
		std::cout << "You Are Dead !!!" << std::endl;
}

