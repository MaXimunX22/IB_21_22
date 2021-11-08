#include <iostream>

int main() {
  int temperature;
  std::cout << "Este programa te indica si la temperatura (ºC) introducida es fria o caliente." << std::endl;
  std::cout << std::endl;
  std::cout << "Introduce la temperatura: ";
  std::cin >> temperature;
  if (temperature < 10) {
    std::cout << "It's cold" << std::endl;
    if (temperature <= 0) {
      std::cout << "water would freeze" << std::endl;
    }
  }
  else if (temperature > 30) {
    std::cout << "It's hot" << std::endl;
    if (temperature >= 100) {
      std::cout << "water would boil" << std::endl;
    }
  } else {
    std::cout << "It's ok" << std::endl;
  }
  return 0;
}