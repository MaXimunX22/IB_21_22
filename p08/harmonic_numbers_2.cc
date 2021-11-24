#include <iomanip>
#include <iostream>
#include <string>

double HarmonicNumbers(int inserted_number) {
  const double kOne{1.00};
  double harmonic{0.00};
  for (int i{1}; i <= inserted_number; ++i) {
    harmonic += kOne / i;
  }
  return harmonic;
}

int main() {
  const char kSpace{' '};
  std::string inserted_numbers_string;
  while (getline(std::cin, inserted_numbers_string)) {
    if (inserted_numbers_string.empty()) {
      break;
    } else {
      int inserted_number_1{stoi(inserted_numbers_string.substr(0, (inserted_numbers_string.find(kSpace))))};
      int inserted_number_2{stoi(inserted_numbers_string.substr((inserted_numbers_string.find(kSpace) + 1), (inserted_numbers_string.size() - 1)))};
      std::cout << std::fixed << std::setprecision(10)
                << HarmonicNumbers(inserted_number_1) -
                       HarmonicNumbers(inserted_number_2)
                << std::endl;
    }
  }

  return 0;
}