#include "Fixed.hpp"

// Constructors and Destructors
Fixed::Fixed() { this->_value = 0; }

Fixed::Fixed(int initialValue) { this->_value = (initialValue * 256); }

Fixed::Fixed(float initialValue) { this->_value = roundf(initialValue * 256); }

Fixed::Fixed(const Fixed &fixed) { this->_value = fixed._value; }

Fixed::~Fixed() {}

// Copy assignment operator
Fixed &Fixed::operator=(const Fixed &fixed) {
  this->_value = fixed._value;
  return *this;
}

// Comparison operators
bool Fixed::operator>(const Fixed &fixed) {
  return this->_value > fixed._value;
}

bool Fixed::operator>=(const Fixed &fixed) {
  return this->_value >= fixed._value;
}

bool Fixed::operator<(const Fixed &fixed) {
  return this->_value < fixed._value;
}

bool Fixed::operator<=(const Fixed &fixed) {
  return this->_value <= fixed._value;
}

bool Fixed::operator==(const Fixed &fixed) {
  return this->_value == fixed._value;
}

bool Fixed::operator!=(const Fixed &fixed) {
  return this->_value != fixed._value;
}

// Arithmetic operators
Fixed Fixed::operator+(const Fixed &other) {
  Fixed result;
  result.setRawBits(this->_value + other.getRawBits());
  return result;
}

Fixed Fixed::operator-(const Fixed &other) {
  Fixed result;
  result.setRawBits(this->_value - other.getRawBits());
  return result;
}

Fixed Fixed::operator*(const Fixed &other) {
  Fixed result;
  result.setRawBits(this->_value * other.getRawBits() / 256);
  return result;
}

Fixed Fixed::operator/(const Fixed &other) {
  Fixed result;
  result.setRawBits(this->_value / other.getRawBits() * 256);
  return result;
}

// Increment/Decrement operators
Fixed Fixed::operator++(int) {
  Fixed tmp;
  tmp.setRawBits(this->_value);
  this->_value++;
  return tmp;
}

Fixed Fixed::operator--(int) {
  Fixed tmp;
  tmp.setRawBits(this->_value);
  this->_value--;
  return tmp;
}

Fixed &Fixed::operator++(void) {
  this->_value++;
  return *this;
}

Fixed &Fixed::operator--(void) {
  this->_value--;
  return *this;
}

// Min/Max
Fixed &Fixed::min(Fixed &first, Fixed &second) {
  return first._value < second._value ? first : second;
}

const Fixed &Fixed::min(const Fixed &first, const Fixed &second) {
  return first._value < second._value ? first : second;
}

Fixed &Fixed::max(Fixed &first, Fixed &second) {
  return first._value > second._value ? first : second;
}

const Fixed &Fixed::max(const Fixed &first, const Fixed &second) {
  return first._value > second._value ? first : second;
}

// Member functions
int Fixed::getRawBits() const { return this->_value; }

void Fixed::setRawBits(int const raw) { this->_value = raw; }

int Fixed::toInt() const { return this->_value / 256; }

float Fixed::toFloat() const { return float(this->_value) / 256; }

std::ostream &operator<<(std::ostream &output, const Fixed &fixed) {
  output << fixed.toFloat();
  return output;
}
