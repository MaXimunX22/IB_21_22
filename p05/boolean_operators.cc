#include <iostream>

int main() {
  bool p;
  bool q;
  std::cout << "   P   " << "   Q   " << "  AND  "<< "   OR " << "  NOT P " << " NOT Q " << std::endl;
  p = {false}, q = {false};
  std::cout << "   " << p << "   " << "   " << q << "   " << "   " << (p&&q) << "   " << "   " << (p||q) << "   " << "   " << !p << "   " << "   " << !q << std::endl;
  p = {false}, q = {true};
  std::cout << "   " << p << "   " << "   " << q << "   " << "   " << (p&&q) << "   " << "   " << (p||q) << "   " << "   " << !p << "   " << "   " << !q << std::endl;
  p = {true}, q = {false};
  std::cout << "   " << p << "   " << "   " << q << "   " << "   " << (p&&q) << "   " << "   " << (p||q) << "   " << "   " << !p << "   " << "   " << !q << std::endl;
  p = {true}, q = {true};
  std::cout << "   " << p << "   " << "   " << q << "   " << "   " << (p&&q) << "   " << "   " << (p||q) << "   " << "   " << !p << "   " << "   " << !q << std::endl;
  return 0;
}