#include <iostream>

int main() {

  double euros;
  const double kYenes{0.0075};

  std::cout << "Vamos a convertir una cantidad de euros a yenes." << std::endl;
  std::cout << "Introduce la cantidad de euros a convertir: ";
  std::cin >> euros;

  std::cout << "En total son : " << kYenes * euros << " yenes" << std::endl;

  return 0;
}