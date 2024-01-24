#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
  // Constructors and Destructors
  FragTrap();
  FragTrap(std::string name);
  FragTrap(const FragTrap &other);
  ~FragTrap();

  // Copy assignment operator
  FragTrap &operator=(const FragTrap &other);

  // Member functions
  void attack(const std::string &target);
  void highFivesGuys(void);
};

#endif
