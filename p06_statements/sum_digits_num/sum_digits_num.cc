#include <iostream>

int main() {
  int num;
  int sum{0};
  std::cout << "Este programa calcula la suma de los digitos de un numero natural" << std::endl;
  std::cout << std::endl;
  std::cout << "Introduce un numero natural: ";
  std::cin >> num;
  while (num < 0) {
    std::cout << "Has introducido un numero no natural. Vuelve a intentarlo" << std::endl;
    std::cout << "Introduce un numero natural: ";
    std::cin >> num;
  }
  while(num > 0) {
    sum = sum + num % 10;
    num = num / 10;
  }
  std::cout << "Resultado: " << sum << std::endl;
  return 0;
}