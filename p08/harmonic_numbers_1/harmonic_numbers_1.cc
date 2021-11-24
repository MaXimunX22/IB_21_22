/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file harmonic_numbers_1.cc
 * @author Edgar Joel Martín Melián
 * @date Nov 22 2021
 * @brief The program reads a number n and prints the n-th harmonic number, 
 *        defined as Hn = 1/1 + 1/2 + ⋯ + 1/n.
 * @see https://jutge.org/problems/P59539
 */

#include <iomanip>
#include <iostream>

double HarmonicNumbers(int inserted_number) {
  const double kOne{1.00};
  double harmonic{0.00};
  for (int i{1}; i <= inserted_number; ++i) {
    harmonic += kOne / i;
  }
  return harmonic;
}

int main() {
  int inserted_number;
  std::cin >> inserted_number;
  std::cout << std::fixed << std::setprecision(4)
            << HarmonicNumbers(inserted_number) << std::endl;

  return 0;
}