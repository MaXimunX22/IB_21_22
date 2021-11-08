#include <iostream>
#include <vector>
#include <string>

int main() {
  int num_words;
  std::vector<std::string> words;
  std::string written_word;
  std::string longest_word;
  std::string shortest_word{"abcdefghijklmnopqrstuvwxyz"};
  std::cout << "Este programa solicita que pidas una cantidad de palabras que luego escribiras y te dira que palabra es la mas larga y la mas corta." << std::endl;
  std::cout << std::endl;
  std::cout << "Introduce el numero de palabras que vas a escribir: ";
  std::cin >> num_words;
  words.reserve(num_words);
  for (int i = 0; i < num_words; ++i) {
    std::cout << "Palabra " << (i + 1) << ": ";
    std::cin >> written_word;
    words[i] = written_word;
    if (words[i].length() > longest_word.length()) {
      longest_word = words[i];
    }
    else if (words[i].length() < shortest_word.length()) {
      shortest_word = words[i];
    }
  }
  std::cout << "La palabra más larga es: " << longest_word << std::endl;
  std::cout << "La palabra más corta es: " << shortest_word << std::endl;
  
  return 0;
}