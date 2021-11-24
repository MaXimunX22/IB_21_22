/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file harmonic_numbers_2.cc
 * @author Edgar Joel Martín Melián
 * @date Nov 24 2021
 * @brief The program reads pairs of numbers n and m with n ≥ m, and for each
 *        pair prints Hn − Hm
 * @see https://jutge.org/problems/P58153_en
 */

#include <iomanip>
#include <iostream>
#include <string>

double HarmonicNumbers(int inserted_number_1, int inserted_number_2) {
  const double kOne{1.00};
  double harmonic{0.00};
  for (int i{inserted_number_2 + 1}; i <= inserted_number_1; ++i) {
    harmonic += kOne / (double)i;
  }
  return harmonic;
}

int main() {
  const char kSpace{' '};
  std::string inserted_numbers_string;
  while (getline(std::cin, inserted_numbers_string)) {
    if (inserted_numbers_string.empty()) {
      break;
    } else {
      int inserted_number_1{stoi(inserted_numbers_string.substr(
          0, (inserted_numbers_string.find(kSpace))))};
      int inserted_number_2{stoi(inserted_numbers_string.substr(
          (inserted_numbers_string.find(kSpace) + 1),
          (inserted_numbers_string.size() - 1)))};
      std::cout << std::fixed << std::setprecision(10)
                << HarmonicNumbers(inserted_number_1, inserted_number_2)
                << std::endl;
    }
  }

  return 0;
}