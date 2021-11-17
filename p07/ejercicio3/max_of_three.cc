/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file max_of_three.cc
 * @author alu0101434698@ull.es
 * @date Nov 17 2021
 * @brief The program reads three numbers and prints their maximum.
 * @see https://jutge.org/problems/P90615
 */

#include <iostream>

int BiggerNumber(int inserted_number_1, int inserted_number_2, int inserted_number_3);

int main() {
  int inserted_number_1;
  int inserted_number_2;
  int inserted_number_3;
  std::cin >> inserted_number_1 >> inserted_number_2 >> inserted_number_3;
  std::cout << BiggerNumber(inserted_number_1, inserted_number_2, inserted_number_3) << std::endl;

  return 0;
}

int BiggerNumber(int inserted_number_1, int inserted_number_2, int inserted_number_3) {
  if (inserted_number_1 >= inserted_number_2 && inserted_number_1 >= inserted_number_3) {
    return inserted_number_1;
  }
  else if (inserted_number_2 >= inserted_number_1 && inserted_number_2 >= inserted_number_3) {
    return inserted_number_2;
  } else {
    return inserted_number_3;
  }
}