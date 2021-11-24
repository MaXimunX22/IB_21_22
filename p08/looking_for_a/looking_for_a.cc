/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2021-2022
 *
 * @file looking_for_a.cc
 * @author Edgar Joel Martín Melián
 * @date Nov 22 2021
 * @brief The program  reads a sequence of characters ended in a dot and tells 
 *        if the sequence has any lowercase ‘a’ or not.
 * @see https://jutge.org/problems/P75149
 */

#include <iostream>
#include <string>

bool FindA(std::string const &sentence) {
  const char kLetterLowerA{'a'};
  std::string::size_type size_type_string = sentence.find(kLetterLowerA);
  if (size_type_string == std::string::npos) {
    return false;
  } else {
    return true;
  }
}

int main() {
  std::string sentence;
  getline(std::cin, sentence);
  if (FindA(sentence)) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }

  return 0;
}