#include <iostream>

int main() {
  std::string string = "HI THIS IS BRAIN";
  std::string *stringPTR = &string;
  std::string &stringREF = string;

  std::cout << "Address of string = " << &string << std::endl;
  std::cout << "Address of string ptr = " << stringPTR << std::endl;
  std::cout << "Address of string ref = " << &stringREF << std::endl;
  std::cout << std::endl;
  std::cout << "String using string = " << string << std::endl;
  std::cout << "String using string ptr = " << *stringPTR << std::endl;
  std::cout << "String using string ref = " << stringREF << std::endl;
}
