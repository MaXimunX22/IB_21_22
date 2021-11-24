/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file primality.cc
 * @author Edgar Joel Martín Melián
 * @date Nov 22 2021
 * @brief The program reads a sequence of natural numbers and, for each one, 
 *        tells if it is a prime number or not. Remember that a natural number 
 *        is prime if and only if it is greater than 1 and it does not have any 
 *        positive divisor other than 1 and itself.
 * @see https://jutge.org/problems/P48713
 */

#include <iostream>
#include <cmath>

bool IsPrime(int inserted_number) {
  const int kOne{1};
  const int kZero{0};
  for (int i{2}; i <= sqrt(inserted_number); ++i) {
    if (inserted_number % i == kZero) {
      return false;
    }
  }
  if (inserted_number <= 1) {
    return false;
  }
  return true;
}

int main() {
  int number_cases;
  std::cin >> number_cases;
  int cases;
  for (int i{0}; i < number_cases; ++i) {
    std::cin >> cases;
    std::cout << cases << " is ";
    if (IsPrime(cases)) {
      std::cout << "prime" << std::endl;
    } else {
      std::cout << "not prime" << std::endl;
    }
  }

  return 0;
}