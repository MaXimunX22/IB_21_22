/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file intervals.cc
 * @author alu0101434698@ull.es
 * @date Nov 17 2021
 * @brief The program computes the interval corresponding to their intersection,
 *        or tells that it is empty.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P51126
 */

#include <iostream>

void Intervals(int pos_a1, int pos_b1, int pos_a2, int pos_b2);

int main() {
  int pos_a1;
  int pos_a2;
  int pos_b1;
  int pos_b2;
  std::cin >> pos_a1 >> pos_b1 >> pos_a2 >> pos_b2;
  Intervals(pos_a1, pos_b1, pos_a2, pos_b2);

  return 0;
}

void Intervals(int pos_a1, int pos_b1, int pos_a2, int pos_b2) {
  if ((pos_a2 > pos_b1 && pos_a2 > pos_a1) ||
      (pos_a2 < pos_a1 && pos_b2 < pos_a1)) {
    std::cout << "[]" << std::endl;
  } else if (pos_a1 >= pos_a2) {
    if (pos_b1 >= pos_b2) {
      std::cout << "[" << pos_a1 << "," << pos_b2 << "]" << std::endl;
    } else {
      std::cout << "[" << pos_a1 << "," << pos_b1 << "]" << std::endl;
    }
  } else {
    if (pos_b1 >= pos_b2) {
      std::cout << "[" << pos_a2 << "," << pos_b2 << "]" << std::endl;
    } else {
      std::cout << "[" << pos_a2 << "," << pos_b1 << "]" << std::endl;
    }
  }
}