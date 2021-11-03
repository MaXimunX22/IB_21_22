#include <iostream>

int main() {
  std::cout << "Código      Carácter" << std::endl;
  for (int i = 32; i <= 126; i++) {
    std::cout << i << "          " << char(i) << std::endl;
  }
  return 0;
}