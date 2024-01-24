#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include <string>

#include "Contact.hpp"

class PhoneBook {
private:
  int _count;
  int _add_index;
  Contact _contacts[8];

public:
  PhoneBook();

  int getCount();
  Contact getContact(int index);

  void addContact(Contact contact);
};

#endif
