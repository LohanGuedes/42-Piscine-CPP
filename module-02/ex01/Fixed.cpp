#include "Fixed.hpp"

Fixed::Fixed() {
  std::cout << "Default constructor called" << std::endl;
  this->_value = 0;
}

Fixed::Fixed(int initialValue) {
  std::cout << "Int constructor called" << std::endl;
  this->_value = (initialValue * 256);
}

Fixed::Fixed(float initialValue) {
  std::cout << "Float constructor called" << std::endl;
  this->_value = roundf(initialValue * 256);
}

Fixed::Fixed(const Fixed &fixed) {
  std::cout << "Copy constructor called" << std::endl;
  this->_value = fixed._value;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
  std::cout << "Copy assignment operator called" << std::endl;
  this->_value = fixed._value;
  return *this;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

int Fixed::toInt() const { return this->_value / 256; }

float Fixed::toFloat() const { return float(this->_value) / 256; }

std::ostream &operator<<(std::ostream &output, const Fixed &fixed) {
  output << fixed.toFloat();
  return output;
}
