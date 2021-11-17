/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file add_second.cc
 * @author alu0101434698@ull.es
 * @date Nov 17 2021
 * @brief The program adds one second to a clock time, given its hours, minutes
 *        and seconds
 * @bug There are no known bugs
 * @see https://jutge.org/problems/P34279
 */

#include <iostream>

void AddSecond(int hours, int minutes, int seconds);

int main() {
  int hours;
  int minutes;
  int seconds;
  std::cin >> hours >> minutes >> seconds;
  AddSecond(hours, minutes, seconds);

  return 0;
}

void AddSecond(int hours, int minutes, int seconds) {
  const int kSixty{60};
  const int kTwentyfour{24};
  ++seconds;
  if (seconds == kSixty) {
    seconds = 0;
    ++minutes;
    if (minutes == kSixty) {
      minutes = 0;
      ++hours;
      if (hours == kTwentyfour) {
        hours = 0;
      }
    }
  }
  int time_array[3] = {hours, minutes, seconds};
  for (int i{0}; i < 3; ++i) {
    if (time_array[i] < 10 && i < 2) {
      std::cout << "0" << time_array[i] << ":";
    } else if (time_array[i] < 10 && i == 2) {
      std::cout << "0" << time_array[i];
    } else if (i < 2) {
      std::cout << time_array[i] << ":";
    } else {
      std::cout << time_array[i];
    }
  }
  std::cout << "\n";
}