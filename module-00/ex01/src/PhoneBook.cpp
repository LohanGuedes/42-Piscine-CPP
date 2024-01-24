#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() {
  this->_add_index = 0;
  this->_count = 0;
}

int PhoneBook::getCount() { return this->_count; }

void PhoneBook::addContact(Contact contact) {
  this->_contacts[this->_add_index] = contact;
  if (this->_count < 8)
    _count++;
  this->_add_index = (this->_add_index + 1) % 8;
}

Contact PhoneBook::getContact(int index) { return this->_contacts[index]; }
