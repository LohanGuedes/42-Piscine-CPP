#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
  // Constructors and Destructors
  ScavTrap();
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap &other);
  ~ScavTrap();

  // Copy assignment operator
  ScavTrap &operator=(const ScavTrap &other);

  // Member functions
  void attack(const std::string &target);
  void guardGate();
};

#endif
