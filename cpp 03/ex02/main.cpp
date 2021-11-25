#include "FragTrap.hpp"

int	main(void) {
	FragTrap	One("Sagat");
	FragTrap	Two("Cammy");

	One.attack(Two.getName());
	Two.takeDamage(One.getAttackDamage());
	One.takeDamage(80);
	One.beRepaired(60);
	std::cout << One.getName() << " has " << One.getHitPoints()	<< " hit points " << std::endl;
	Two.highFivesGuys();
	return (0);
}
