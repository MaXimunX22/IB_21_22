#include <iostream>

int main() {
  std::cout << "Este programa evidencie que los operadores lógicos and y or (&& y ||) de C++ " << std::endl;
  bool operando_a = true , operando_b = false;
  std::cout << "los operadores valen: " << operando_a << " y " << operando_b << std::endl;
  std::cout << "utilizaremos en primer lugar el operador or (||)" << std::endl;
  bool or_operandos_ab = (operando_a || operando_b);
  std::cout << "como resultado obtenemos: " << or_operandos_ab << ", ya que cuando se utiliza el or el segundo operando no se evaluará si el primero es true (1), puesto que el resultado de esa evaluación no cambiaría el resultado del or, que será cierta." << std::endl;
  std::cout << std::endl;
  std::cout << "Utilizaremos en segundo lugar el operador and (&&)" << std::endl;
  bool operando_c = false , operando_d = true;
  std::cout << "Cambiamos los valores de los operadores que ahora valen " << operando_c  << " y " << operando_d << std::endl;
  bool and_operandos_cd = (operando_c && operando_d);
  std::cout << "como resultado obtenemos: " << and_operandos_cd << ", ya que cuando se utiliza el and el segundo operando no se evaluará si el primero es false (0), puesto que el resultado de esa evaluación no cambiaría el resultado del and, que será falso." << std::endl;
  std::cout << std::endl;

  return 0;
 }