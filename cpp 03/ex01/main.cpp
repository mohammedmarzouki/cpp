#include "ScavTrap.hpp"

int	main(void) {
	ScavTrap	a("3li");
	ScavTrap	b("lbachir");

	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	a.beRepaired(900);
	b.beRepaired(874);
	a.takeDamage(478);
	b.takeDamage(808);
	std::cout << a.getName() << " has " << a.getHitPoints()	<< " hit points " << std::endl;
	std::cout << b.getName() << " has " << b.getHitPoints()	<< " hit points " << std::endl;
	b.guardGate();
	a.guardGate();
	return (0);
}
