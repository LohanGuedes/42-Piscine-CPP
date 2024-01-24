#include "Zombie.hpp"

Zombie::~Zombie() {
  std::cout << "Zombie " << this->_name << " killed!" << std::endl;
}

void Zombie::announce() {
  std::cout << this->_name << ": ";
  std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) { this->_name = name; }
