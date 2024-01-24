#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie {
private:
  std::string _name;

public:
  ~Zombie();

  void announce();
  void setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif
