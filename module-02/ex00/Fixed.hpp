#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed {
private:
  int _value;
  static const int _fractionBits = 8;

public:
  Fixed();
  Fixed(const Fixed &fixed);
  Fixed &operator=(const Fixed &fixed);
  ~Fixed();

  int getRawBits();
  void setRawBits(int const raw);
};

#endif
