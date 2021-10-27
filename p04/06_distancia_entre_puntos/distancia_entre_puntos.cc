#include <iostream>
#include <cmath>

int main() {
  float x1, y1, z1, x2, y2, z2;
  float distancia;

  std::cout << "Vamos a calcular la distancia entre 2 puntos en el espacio cartesiano de 3 dimensiones." << std::endl;
  std::cout<< "Introduzca las coornadas del punto A en el eje x: ";
  std::cin>> x1;
  std::cout<< "Introduzca las coornadas del punto A en el eje y: ";
  std::cin>> y1;
  std::cout<< "Introduzca las coornadas del punto A en el eje z: ";
  std::cin>> z1;
  std::cout<< "Introduzca las coornadas del punto B en el eje x: ";
  std::cin>> x2;
  std::cout<< "Introduzca las coornadas del punto B en el eje y: ";
  std::cin>> y2;
  std::cout<< "Introduzca las coornadas del punto B en el eje z: ";
  std::cin>> z2;

  distancia = sqrt((x2 - x1) + (y2 - y1) + (z2 - z1));
  std::cout << "La distancia entre A y B es: " << distancia << std::endl;

  return 0;
}