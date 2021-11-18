/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file elementos.cc
 * @author alu0101434698@ull.es
 * @date Nov 17 2021
 * @brief The program says who win the combat or if they are tie
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P51352
 */

#include <iostream>

void Elementos(char option_a, char option_b);

int main() {
  char option_a;
  char option_b;
  std::cin >> option_a >> option_b;
  Elementos(option_a, option_b);

  return 0;
}

void Elementos(char option_a, char option_b) {
  const char char_A{'A'};
  const char char_V{'V'};
  const char char_P{'P'};
  switch (option_a) {
    case 'A':
      if (option_b == char_A) {
        std::cout << "-" << std::endl;
      } else if (option_b == char_V) {
        std::cout << "2" << std::endl;
      } else if (option_b == char_P) {
        std::cout << "1" << std::endl;
      }
      break;
    case 'V':
      if (option_b == char_A) {
        std::cout << "1" << std::endl;
      } else if (option_b == char_V) {
        std::cout << "-" << std::endl;
      } else if (option_b == char_P) {
        std::cout << "2" << std::endl;
      }
      break;
    case 'P':
      if (option_b == char_A) {
        std::cout << "2" << std::endl;
      } else if (option_b == char_V) {
        std::cout << "1" << std::endl;
      } else if (option_b == char_P) {
        std::cout << "-" << std::endl;
      }
      break;
    default:
      break;
  }
}