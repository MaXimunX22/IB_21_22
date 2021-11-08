#include <iostream>

int main() {
  std::cout << "Este programa lee una letra e indica si es mayúscula o minúscula e indica asimismo si se trata de una vocal o una consonante\n" << std::endl;
  std::cout << "Introduce una letra: ";
  char letter;
  std::cin >> letter;
  while ((letter < 65 || letter > 90) && (letter < 97 || letter > 122)) {
    std::cout << "Error! No has introducido una letra. Vuelve a intentarlo." << std::endl;
    std::cout << "Introduce una letra: ";
    std::cin >> letter;
  }
  if (letter > 65 && letter < 90) {
    std::cout << "uppercase" << std::endl;
    if ((letter == 'A') || (letter == 'E') || (letter == 'I') || (letter == 'O') || (letter == 'U')) {
      std::cout << "vowel" << std::endl;
    } else {
      std::cout << "consonant" << std::endl;
    }
  } else {
    std::cout << "lowercase" << std::endl;
    if ((letter == 'a') || (letter == 'e') || (letter == 'i') || (letter == 'o') || (letter == 'u')) {
      std::cout << "vowel" << std::endl;
    } else {
      std::cout << "consonant" << std::endl;
    }
  }

  return 0;
}