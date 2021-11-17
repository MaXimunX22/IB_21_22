/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file triangle.cc
 * @author alu0101434698@ull.es
 * @date Nov 17 2021
 * @brief The program hat prints a “triangle of size n”.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P29973
 */

#include <iostream>

void PrintTriangle(int inserted_number);

int main() {
  int inserted_number;
  std::cin >> inserted_number;
  PrintTriangle(inserted_number);

  return 0;
}

void PrintTriangle(int inserted_number) {
  for (int i{1}; i <= inserted_number; ++i) {
    for (int j{0}; j < i; ++j) {
      std::cout << "*";
    }
    std::cout << "\n";
  }
}