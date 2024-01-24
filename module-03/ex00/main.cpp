#include "ClapTrap.hpp"

int main(void) {
  ClapTrap homer("Homer");

  homer.attack("Bart");
  homer.takeDamage(8);
  homer.takeDamage(2);
  homer.takeDamage(1);
  homer.attack("Lisa");
  homer.beRepaired(5);
  homer.beRepaired(3);
  homer.attack("Lisa");
  homer.beRepaired(1);
  homer.beRepaired(1);
  homer.beRepaired(1);
  homer.beRepaired(1);
  homer.beRepaired(1);
  homer.beRepaired(1);
  homer.beRepaired(1);
  homer.beRepaired(1);
  return 0;
}
