/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file collatz.cc
 * @author alu0101434698@ull.es
 * @date Nov 17 2021
 * @brief The program counts the number of process that was used to calculate
 *        the resutl of the collatz sequence.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P80660
 */

#include <iostream>

int Collatz(int inserted_number);

int main() {
  std::string inserted_number_string;
  while (getline(std::cin, inserted_number_string)) {
    if (inserted_number_string.empty()) {
      break;
    } else {
      int inserted_number = stoi(inserted_number_string);
      std::cout << Collatz(inserted_number) << std::endl;
    }
  }
}

int Collatz(int inserted_number) {
  int counter{0};
  while (inserted_number != 1) {
    if (inserted_number % 2 == 0) {
      inserted_number = inserted_number / 2;
      ++counter;
    } else {
      inserted_number = (inserted_number * 3) + 1;
      ++counter;
    }
  }
  return counter;
}