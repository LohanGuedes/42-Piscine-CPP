#ifndef FIXED_H
#define FIXED_H

#include <cmath>
#include <iostream>

class Fixed {
private:
  int _value;
  static const int _fractionBits = 8;

public:
  // Constructors and Destructors
  Fixed();
  Fixed(int initialValue);
  Fixed(float initialValue);
  Fixed(const Fixed &fixed);
  ~Fixed();

  // Copy assignment operator
  Fixed &operator=(const Fixed &fixed);

  // Comparison operators
  bool operator>(const Fixed &fixed);
  bool operator>=(const Fixed &fixed);
  bool operator<(const Fixed &fixed);
  bool operator<=(const Fixed &fixed);
  bool operator==(const Fixed &fixed);
  bool operator!=(const Fixed &fixed);

  // Arithmetic operators
  Fixed operator+(const Fixed &other);
  Fixed operator-(const Fixed &other);
  Fixed operator*(const Fixed &other);
  Fixed operator/(const Fixed &other);

  // Increment/Decrement operators
  Fixed operator++(int);
  Fixed operator--(int);
  Fixed &operator++(void);
  Fixed &operator--(void);

  // Min/Max
  static Fixed &min(Fixed &first, Fixed &second);
  static const Fixed &min(const Fixed &first, const Fixed &second);
  static Fixed &max(Fixed &first, Fixed &second);
  static const Fixed &max(const Fixed &first, const Fixed &second);

  // Member functions
  int getRawBits() const;
  void setRawBits(int const raw);

  int toInt(void) const;
  float toFloat(void) const;
};

std::ostream &operator<<(std::ostream &output, const Fixed &fixed);

#endif
