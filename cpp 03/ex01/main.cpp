#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap	One("Sagat");
	ScavTrap	Two("Cammy");

	One.attack(Two.getName());
	Two.takeDamage(One.getAttackDamage());
	One.takeDamage(80);
	One.beRepaired(60);
	std::cout << One.getName() << " has " << One.getHitPoints()	<< " hit points " << std::endl;
	Two.guardGate();
	return (0);
}
