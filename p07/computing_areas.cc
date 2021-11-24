//FALTA POR TERMINAR
#include <iostream>
#include <string>
#include <cmath>

int main() {
  const std::string kRectangle{"rectangle"};
  const std::string kCircle{"circle"};
  std::string number_of_cases_string;
  getline(std::cin, number_of_cases_string);
  int number_of_cases{stoi(number_of_cases_string)};
  for (int i{1}; i <= number_of_cases; ++i) {
    std::string information;
    getline(std::cin, information);
    if (information.find(kRectangle)) {

    }
  }

  return 0;
}

double RecangleArea(double length, double width);

double CircleArea(double radius);