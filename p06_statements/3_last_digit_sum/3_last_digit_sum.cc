#include <iostream>

int main() {
  int num;
  int sum{0};
  int divisor{1};
  int temporal{0};
  std::cout << "Este programa suma los 3 últimos dígitos de un número natural" << std::endl;
  std::cout << std::endl;
  std::cout << "Introduce un número: ";
  std::cin >> num;
  while (num < 100) {
    std::cout << "Has introducido un numero muy pequeño para hacer el cálculo. Vuelve a intentarlo." << std::endl;
    std::cout << "Introduce un numero: ";
    std::cin >> num;
  }
  temporal = num;
  //Hallar el valor del divisor
  while((temporal / 10) != 0) {
    temporal = temporal/10;
    divisor = divisor*10;
  }
  while(divisor != 0){
    if(divisor < 1000){
      sum += num / divisor;
    }
    num = num % divisor;
    divisor = divisor / 10;
  }
  std::cout << "Resultado: " << sum << std::endl;
}