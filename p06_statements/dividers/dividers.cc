#include <iostream>

int main() {
  int num;
  std::cout << "Este programa calcula los divisores de el número que introduzcas" << std::endl;
  std::cout << "Introduce un número: ";
  std::cin >> num;
  for (int i = 1; i <= num; ++i) {
    if ((num % i) == 0) {
      std::cout << i << " ";
    }
  }
  std::cout << std::endl;
  return 0;
}