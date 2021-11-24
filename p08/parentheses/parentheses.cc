/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file parentheses.cc
 * @author Edgar Joel Martín Melián
 * @date Nov 24 2021
 * @brief The program Given a sequence made up of only ‘(’ and ‘)’, tell if the
 *        parentheses close correctly.
 * @see https://jutge.org/problems/P31111_en/statement
 */

#include <iostream>
#include <string>

bool Parentheses(std::string inserted_string) {
  const char kLeftParentheses{'('};
  const int kZero{0};
  bool flag{true};
  int count{0};
  for (int i{0}; i < inserted_string.length(); ++i) {
    if (inserted_string[i] == kLeftParentheses) {
      ++count;
    } else {
      --count;
    }
    if (count < kZero) {
      flag = false;
      break;
    }
  }
  if (count != 0) {
    flag = false;
  }
  return flag;
}

int main() {
  std::string inserted_string;
  getline(std::cin, inserted_string);
  if (Parentheses(inserted_string)) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }
}