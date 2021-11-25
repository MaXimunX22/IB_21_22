#include <iostream>
#include <vector>

void PrintReverseSequence(const std::vector<int>& cin_numbers) {
  if (cin_numbers.size() > 0) {
    for (int i = cin_numbers.size() - 1; i > 0; --i) {
      std::cout << cin_numbers[i] << " ";
    }
    std::cout << cin_numbers[0] << std::endl;
  } else {
    std::cout << "\n";
  }
}

int main() {
  int number_of_numbers;
  while (std::cin >> number_of_numbers) {
    std::vector<int> cin_numbers;
    for (int i{0}; i < number_of_numbers; ++i) {
      int inserted_number;
      std::cin >> inserted_number;
      cin_numbers.push_back(inserted_number);
    }
    PrintReverseSequence(cin_numbers);
  }

  return 0;
}