/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file time_descomposition.cc
 * @author Edgar Joel Martín Melián
 * @date Nov 18 2021
 * @brief The program prints the number of hours, minutes and seconds 
 *        represented by n given seconds.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P37469_en
 */

#include <iostream>

void PrintTime(int seconds) {
  const int kSecondsPerHour{3600};
  const int kSecondsPerMinute{60};
  int hours{seconds / kSecondsPerHour};
  seconds = seconds % kSecondsPerHour;
  int minutes{seconds / kSecondsPerMinute};
  seconds = seconds % kSecondsPerMinute;
  std::cout << hours << " " << minutes << " " << seconds << std::endl;
}

int main() {
  int inserted_seconds{0};
  std::cin >> inserted_seconds;
  PrintTime(inserted_seconds);

  return 0;
}