#include <iostream>

int main() {
  int a {0};
  bool b = true;
  double c(2.4);
  float d{3.54213};
  int & Entero = a;
  bool & Booleana = b;
  double & Decimal = c;
  float & Decimal_largo = d;
  std::cout << "Este programa declara e inicializa distintas variables y se puede representar con un alias" << std::endl << std::endl;
  std::cout << "Variable a = " << a << std::endl; 
  std::cout << "Alias Entero = " << Entero << std::endl;
  std::cout << "Variable b = " << b << std::endl; 
  std::cout << "Alias Booleana = " << Booleana << std::endl;
  std::cout << "Variable c = " << c << std::endl; 
  std::cout << "Alias Decimal = " << Decimal << std::endl;
  std::cout << "Variable d = " << d << std::endl; 
  std::cout << "Alias Decimal largo = " << Decimal_largo << std::endl;
  std::cout << std::endl;
  std::cout << "¿Son iguales los valores de las referencias que los de las variables referenciadas?" << std::endl << "Sí, porque son alias." << std::endl;
  return 0;
}