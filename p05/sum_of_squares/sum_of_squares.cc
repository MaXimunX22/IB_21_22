#include <iostream>
#include <cmath>

int main() {
  std::cout << "Este programa calcula la suma: 1^2 + 2^2 + 3^2 + … + n^2\n" << std::endl;
  std::cout << "Introduce un número: ";
  int num;
  std::cin >> num;
  int sum{0};
  for (int i{1}; i <= num; ++i) {
    sum += pow(i, 2);
  }
  std::cout << "Resultado: " << sum << std::endl;

  return 0;
}