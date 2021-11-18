/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file three_words.cc
 * @author alu0101434698@ull.es
 * @date Nov 17 2021
 * @brief The program reads three words a, b and c, and prints a line with c, b 
 *        and a in this order.
 * @see https://jutge.org/problems/P62421_en
 */

#include <iostream>

void ThreeWords(std::string inserted_word_1, std::string inserted_word_2,
                std::string inserted_word_3);

int main() {
  std::string inserted_word_1;
  std::string inserted_word_2;
  std::string inserted_word_3;
  std::cin >> inserted_word_1 >> inserted_word_2 >> inserted_word_3;
  ThreeWords(inserted_word_1, inserted_word_2, inserted_word_3);

  return 0;
}

void ThreeWords(std::string inserted_word_1, std::string inserted_word_2,
                std::string inserted_word_3) {
  std::cout << inserted_word_3 << " " << inserted_word_2 << " "
            << inserted_word_1 << std::endl;
}