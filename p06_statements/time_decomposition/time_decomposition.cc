#include <iostream>

int main() {
  int num;
  int hours{0};
  int min{0};
  int sec{0};
  std::cout << "Este programa calcula el numero de horas, minutos y segundos que tiene un número natural introducido" << std::endl;
  std::cout << std::endl;
  std::cout << "Introduce un numero natural: ";
  std::cin >> num;
  while (num < 0) {
    std::cout << "Has introducido un numero no natural. Vuelve a intentarlo" << std::endl;
    std::cout << "Introduce un numero natural: ";
    std::cin >> num;
  }
  while (num > 3600) {
    ++hours;
    num -= 3600;
  }
  while (num > 60) {
    ++min;
    num -= 60;
  }
  sec = num;
  std::cout << hours << " " << min << " " << sec << std::endl;
  return 0;
}