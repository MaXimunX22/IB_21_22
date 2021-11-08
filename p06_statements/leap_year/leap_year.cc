#include <iostream>

int main() {
  int year;
  std::cout << "Este programa te dice si el año introducido es bisiesto o no" << std::endl;
  std::cout << std::endl;
  std::cout << "Introduce un año: ";
  std::cin >> year;
  if (year % 4 != 0 || (year % 100 == 0 && year % 400 != 0)) {
    std::cout << "NO" << std::endl;
  } else {
    std::cout << "YES" << std::endl;
  }
  return 0;
}