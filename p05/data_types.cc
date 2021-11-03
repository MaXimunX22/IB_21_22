#include <iostream>

int main() {

  std::cout << "Este programa te dice el tamaño que utiliza el compilador para almacenar cada uno de los tipos básicos del lenguaje" << std::endl;
  std::cout << "\nEl tipo de datos bool se representa utilizando " << sizeof(bool) << " bytes." << std::endl;
  std::cout << "\nEl tipo de datos short se representa utilizando " << sizeof(short) << " bytes." << std::endl;
  std::cout << "\nEl tipo de datos int se representa utilizando " << sizeof(int) << " bytes." << std::endl;
  std::cout << "\nEl tipo de datos float se representa utilizando " << sizeof(float) << " bytes." << std::endl;
  std::cout << "\nEl tipo de datos long se representa utilizando " << sizeof(long) << " bytes." << std::endl;
  std::cout << "\nEl tipo de datos double se representa utilizando " << sizeof(double) << " bytes." << std::endl;
  std::cout << "\nEl tipo de datos char se representa utilizando " << sizeof(char) << " bytes." << std::endl;
  return 0;
}