/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file first_position.cc
 * @author Edgar Joel Martín Melián
 * @date Nov 22 2021
 * @brief The program reads a sequence of natural numbers and prints the 
 *        position of the first even number.
 * @see https://jutge.org/problems/P89078_en/statement
 */

#include <cmath>
#include <iostream>
#include <vector>

bool IsEven(int inserted_number) {
  const int kTwo{2};
  const int kOne{1};
  if (inserted_number % kTwo == kOne) {
    return false;
  } else {
    return true;
  }
}

int main() {
  int inserted_number;
  int counter{1};
  while (std::cin >> inserted_number && !IsEven(inserted_number)) {
    ++counter;
  }
  std::cout << counter << std::endl;
  return 0;
}