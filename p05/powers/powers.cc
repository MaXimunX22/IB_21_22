#include <iostream>
#include <cmath>

int main() {
  std::cout << "Este programa calcula la potencia de un de un numero dado a la potencia que tu elijas.\n" << std::endl;
  std::cout << "Introduce el numero a potenciar: ";
  int num;
  std::cin >> num;
  std::cout << "Introduce la potencia a la que quieres elevar " << num << ": ";
  int power;
  std::cin >> power;
  std::cout << "Resultado: " << pow(num, power) << std::endl;
  
  return 0;
}