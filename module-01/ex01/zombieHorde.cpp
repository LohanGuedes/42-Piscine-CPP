#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name) {
  Zombie *horde = new Zombie[N];

  for (int i = 0; i < N; i++) {
    std::string zombieName = name + " " + std::to_string(i);
    horde[i].setName(zombieName);
  }

  return horde;
}
