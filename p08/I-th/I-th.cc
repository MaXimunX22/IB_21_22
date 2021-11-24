/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file I-th.cc
 * @author Edgar Joel Martín Melián
 * @date Nov 22 2021
 * @brief The program that, given an integer number i and a sequence of natural
 *        numbers x1, …, xn, prints xi.
 * @see https://jutge.org/problems/P39225_en/statement
 */

#include <iostream>

void PrintNumberInPos(int position_search, int number_in_pos) {
  std::cout << "At the position " << position_search << " there is a(n) "
            << number_in_pos << "." << std::endl;
}

int main() {
  int position_search;
  std::cin >> position_search;
  int number_in_pos;
  for (int i{1}; i <= position_search; ++i) {
    std::cin >> number_in_pos;
  }
  PrintNumberInPos(position_search, number_in_pos);

  return 0;
}