/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file seconds.cc
 * @author alu0101434698@ull.es
 * @date Nov 17 2021
 * @brief The program converts to seconds a given amount of years, days, hours,
 *        minutes and seconds.
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P70955
 */

#include <iostream>

int HowManySeconds(int years, int days, int hours, int minutes, int seconds);

int main() {
  int years{0};
  int days{0};
  int hours{0};
  int minutes{0};
  int seconds{0};
  std::cin >> years >> days >> hours >> minutes >> seconds;
  std::cout << HowManySeconds(years, days, hours, minutes, seconds)
            << std::endl;

  return 0;
}

int HowManySeconds(int years, int days, int hours, int minutes, int seconds) {
  const int seconds_per_minute{60};
  const int seconds_per_hours{3600};
  const int seconds_per_day{86400};
  const int seconds_per_year{31536000};
  int total_seconds{0};
  total_seconds = seconds + (seconds_per_minute * minutes) +
                  (seconds_per_hours * hours) + (seconds_per_day * days) +
                  (seconds_per_year * years);

  return total_seconds;
}