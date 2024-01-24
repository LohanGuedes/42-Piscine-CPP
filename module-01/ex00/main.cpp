#include "Zombie.hpp"

int main() {
  Zombie zombieOne("lguedes");
  Zombie *zombieTwo = newZombie("lohan");
  zombieOne.announce();
  zombieTwo->announce();
  randomChump("Chaves");
  delete zombieTwo;
}
