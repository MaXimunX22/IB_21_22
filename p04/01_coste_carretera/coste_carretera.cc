#include <iostream>

int main() {
  double longitud;
  const int kPrecioMetro{1624};

  std::cout << "Vamos a calcular el coste de una carretera en función de su longitud y coste por metro (1624 €/m)" << std::endl;
  std::cout << "¿Cuantos metros quieres que tenga la carretera?" << std::endl;
  std::cin >> longitud;

  std::cout << "El coste total es de : " << longitud * kPrecioMetro << " €." << std::endl;

  return 0;
}