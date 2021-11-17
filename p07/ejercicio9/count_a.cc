/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file count_a.cc
 * @author alu0101434698@ull.es
 * @date Nov 17 2021
 * @brief The program counts the number of 'a' that is in a introduced line.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P97969
 */

#include <iostream>
#include <string>

int CountA(std::string inserted_string);

int main() {
  std::string inserted_string;
  getline(std::cin, inserted_string);
  std::cout << CountA(inserted_string) << std::endl;
}

int CountA(std::string inserted_string) {
  const char searched_letter{'a'};
  int counter{0};
  for (int i{0}; i < inserted_string.length(); ++i) {
    if (inserted_string[i] == searched_letter) {
      ++counter;
    }
  }
  return counter;
}