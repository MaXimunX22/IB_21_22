#include <iostream>

int main() {
  std::cout << "Este programa calcula la conjetura de Collatz de un número introducido." << std::endl;
  std::cout << "Introduce un número: ";
  int collatz_number;
  std::cin >> collatz_number;
  while (collatz_number != 1) {
    std::cout << collatz_number << " ";
    if (collatz_number % 2 == 0) {
      collatz_number = collatz_number / 2;
    } else {
      collatz_number = (collatz_number * 3) + 1;
    }
  }
  std::cout << collatz_number << std::endl;

  return 0;
}