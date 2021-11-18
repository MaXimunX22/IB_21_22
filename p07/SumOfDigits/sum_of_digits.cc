/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file sum_of_digits.cc
 * @author alu0101434698@ull.es
 * @date Nov 17 2021
 * @brief The program reads several numbers and prints the sum of the digits of
 *        each one
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P33839
 */

#include <iostream>

int SumOfDigits(int inserted_number);

int main() {
  std::string inserted_number_string;
  while (getline(std::cin, inserted_number_string)) {
    if (inserted_number_string.empty()) {
      break;
    } else {
      int inserted_number = stoi(inserted_number_string);
      std::cout << "The sum of the digits of " << inserted_number << " is "
                << SumOfDigits(inserted_number) << "." << std::endl;
    }
  }

  return 0;
}

int SumOfDigits(int inserted_number) {
  const int kTen{10};
  const int kZero{0};
  int result{0};
  while (inserted_number > kZero) {
    result += inserted_number % kTen;
    inserted_number = inserted_number / kTen;
  }

  return result;
}