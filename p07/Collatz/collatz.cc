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

  return 0;
}

int Collatz(int inserted_number) {
  const int kOne{1};
  const int kTwo{2};
  const int kThree{3};
  const int kZero{0};
  int counter{0};
  while (inserted_number != kOne) {
    if (inserted_number % kTwo == kZero) {
      inserted_number = inserted_number / kTwo;
      ++counter;
    } else {
      inserted_number = (inserted_number * kThree) + kOne;
      ++counter;
    }
  }
  return counter;
}