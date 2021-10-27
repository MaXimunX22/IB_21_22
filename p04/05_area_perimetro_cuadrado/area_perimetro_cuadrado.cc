#include <iostream>

int main() {
  double area, perimetro, longitud;

  std::cout << "Vamos a calcular el área y el perímetro de un cuadrado." << std::endl;
  std::cout << "Escribe la longitud del lado del cuadrado: ";
  std::cin >> longitud;

  area = longitud * longitud;
  perimetro = 4 * longitud;

  std::cout << "El área del cuadrado es: " << area << " m2." << std::endl;
  std::cout << "El perímetro del cuadrado es: " << perimetro << " m." << std::endl;

  return 0;
}