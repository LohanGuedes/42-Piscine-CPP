#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
  this->_name = name;
  this->_weapon = NULL;
}

void HumanB::attack() {

  if (!this->_weapon) {
    std::cout << "Oh No! not wielding a weapon!" << std::endl;
    return;
  }
  std::cout << this->_name << " attacks with their " << this->_weapon->getType()
            << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) { this->_weapon = &weapon; }
