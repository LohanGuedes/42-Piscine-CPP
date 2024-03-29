#include "Fixed.hpp"

int main() {
  Fixed a;
  Fixed const b(Fixed(5.05f) * Fixed(2));
  std::cout << a << std::endl;
  std::cout << ++a << std::endl;
  std::cout << a << std::endl;
  std::cout << a++ << std::endl;
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << Fixed::max(a, b) << std::endl;
  return 0;
}

// int main() {
//   Fixed a(10);
//   Fixed b(30);

//   std::cout << "-------- Value of a and b: ---------" << std::endl;
//   std::cout << "a = " << a << std::endl;
//   std::cout << "b = " << b << std::endl;
//   std::cout << "-------- Comparison operators: ---------" << std::endl;
//   std::cout << "a > b = " << (a > b) << std::endl;
//   std::cout << "b > a = " << (b > a) << std::endl;
//   std::cout << "b >= a = " << (b >= a) << std::endl;
//   std::cout << "b < a = " << (b < a) << std::endl;
//   std::cout << "b <= a = " << (b <= a) << std::endl;
//   std::cout << "b == a = " << (b == a) << std::endl;
//   std::cout << "b != a = " << (b != a) << std::endl;
//   std::cout << "-------- Arithmetic operators: ---------" << std::endl;
//   std::cout << "b + a = " << (b + a) << std::endl;
//   std::cout << "b - a = " << (b - a) << std::endl;
//   std::cout << "b * a = " << (b * a) << std::endl;
//   std::cout << "b / a = " << (b / a) << std::endl;
//   std::cout << "-------- Increment and decrement: ---------" << std::endl;
//   std::cout << "post increment = " << (b++) << std::endl;
//   std::cout << "pre increment = " << (++a) << std::endl;
//   std::cout << "post increment = " << (b--) << std::endl;
//   std::cout << "pre increment = " << (--a) << std::endl;
//   std::cout << "-------- Max/min: ---------" << std::endl;
//   std::cout << "Min between a and b = " << Fixed::min(a, b) << std::endl;
//   std::cout << "Max between a and b = " << Fixed::max(a, b) << std::endl;
//   return 0;
// }
