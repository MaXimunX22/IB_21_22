/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file divisors.cc
 * @author Edgar Joel Martín Melián
 * @date Nov 24 2021
 * @brief The program print in order all the divisors of a given number.
 * @see https://jutge.org/problems/P39308_en/statement
 */

#include <iostream>
#include <string>
#include <cmath>

void PrintDivisors(int inserted_number) {
  const int kZero{0};
  const int kOne{1};
  int divisor_medium{0};
  for (int i{1}; i <= sqrt(inserted_number); ++ i){
    if (inserted_number % i == 0) {
      std::cout << " " << i;
    }
    divisor_medium = i;
  }
  int divisor_big{0};
  for (int i{divisor_medium}; i >= kOne; --i) {
    if (inserted_number % i == kZero) {
      divisor_big = inserted_number / i;
      if (divisor_big > divisor_medium) {
        std::cout << " " << divisor_big;
      }
    }
  }
}

int main() {
  int inserted_number;
  while (std::cin >> inserted_number) {
      std::cout << "divisors of " << inserted_number  << ":";
      PrintDivisors(inserted_number);
      std::cout << std::endl;
  }

  return 0;
}