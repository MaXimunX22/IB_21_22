#include <iostream>
#include <vector>
#include <ctime>
#include <cmath>

int main() {
  std::cout << "Este programa le establece unos valores aletarios a un vector de x tamaño (en este caso son 5) y calcula la media\
 de los valores, el valor maximo y el valor minimo.\n" << std::endl;
  std::vector<double> random_vector;
  const int kVectorSize{5};
  random_vector.reserve(kVectorSize);
  std::srand(std::time(nullptr));
  double min_value{10};
  double max_value{0};
  double sum_medium_value;
  for (int i{0}; i < kVectorSize; ++i) {
    random_vector[i] = round(std::rand() / ((RAND_MAX)/100)) * 0.1;
    sum_medium_value += random_vector[i] / kVectorSize;
    if (random_vector[i] > max_value) {
      max_value = random_vector[i];
    }
    else if (random_vector[i] < min_value) {
      min_value = random_vector[i];
    }
  }
  std::cout << "Valor medio de los datos: " << sum_medium_value << std::endl;
  std::cout << "Valor máximo de los datos: " << max_value << std::endl;
  std::cout << "Valor mínimo de los datos: " << min_value << std::endl;

  return 0;
}