#include <iostream>

int Factorial(int num_fact) {
  int aux_fact_num{1};
  for (int i{1}; i <= num_fact; ++i) {
    aux_fact_num *= i;
  }
  
  return aux_fact_num;
}

int main() {
  std::cout << "Este programa imprime en pantalla el valor del factorial de los N primeros números." << std::endl;
  std::cout << "Introduzca el numero de factoriales a calcular: ";
  int num_factorials;
  std::cin >> num_factorials;
  for (int i{1}; i <= num_factorials; ++i) {
    std::cout << i << "! = " << Factorial(i) << std::endl;
  }

  return 0;
}