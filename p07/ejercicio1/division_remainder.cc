/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file division_remainder.cc
 * @author alu0101434698@ull.es
 * @date Nov 17 2021
 * @brief The program reads two natural numbers a and b, with b > 0, and prints 
 *        the integer division d and the remainder r of a divided by b.
 *        By definition, d and r must be the only integer numbers such that 
 *        0=<r<b and db+r=a.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P48107
 */

#include <iostream>

int Division(int dividend, int divider);
int Remainder(int dividend, int divider);

int main() {
  int dividend{0};
  int divider{0};
  std::cin >> dividend >> divider;
  std::cout << Division(dividend, divider) << " " << Remainder(dividend, divider) << std::endl;
}

int Division(int dividend, int divider) {
  return dividend / divider;
}

int Remainder(int dividend, int divider) {
  return dividend % divider;
}