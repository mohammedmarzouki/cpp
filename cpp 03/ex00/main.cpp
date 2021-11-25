#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	a("3li");
	ClapTrap	b("lbachir");

	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	a.beRepaired(900);
	b.beRepaired(874);
	a.takeDamage(478);
	b.takeDamage(808);
	std::cout << a.getName() << " has " << a.getHitPoints()	<< " hit points " << std::endl;
	std::cout << b.getName() << " has " << b.getHitPoints()	<< " hit points " << std::endl;
	return (0);
}
