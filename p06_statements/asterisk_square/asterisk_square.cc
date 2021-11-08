#include <iostream>

int main() {
  int size;
  std::cout << "Este programa imprime en pantalla un cuadradro de asteriscos del tamaño indicado" << std::endl;
  std::cout << std::endl;
  std::cout << "Introduce el tamaño del cuadrado: ";
  std::cin >> size;
  while (size < 1){
    std::cout << "Error! Has introducido un numero negativo o 0. Vuelve a intentarlo." << std::endl;
    std::cout << "Introduce el tamaño del cuadrado: ";
    std::cin >> size;
  }
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size; ++j) {
      std::cout << "* ";
    }
    std::cout << std::endl;
  }
  return 0;
}