#include <iostream>

int main() {
  char letter;
  std::cout << "Este programa solicita al usuario una letra. Si la letra que introduce el usuario es minúscula, ha de imprimir la correspondiente mayúscula y viceversa." << std::endl;
  std::cout << "Intorduce una letra: ";
  std::cin >> letter;
  while ((letter < 65 || letter > 90) && (letter < 97 || letter > 122)) {
    std::cout << "Error! No has introducido una letra. Vuelve a intentarlo." << std::endl;
    std::cout << "Introduce una letra: ";
    std::cin >> letter;
  }
  if (letter > 65 && letter < 90) {
    std::cout << "Resultado: " << char(letter + 32) << std::endl;
  }else {
    std::cout << "Resultado: " << char(letter - 32) << std::endl;
  }
  
  return 0;
}