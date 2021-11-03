#include <iostream>
 
int main() {
  int num_a{2};
  int num_b{4};
  std::cout << "OPERADORES ARITMETICOS." << std::endl;
  std::cout << "El resultado de operar " << num_a << " + " << num_b << " es: " << num_a + num_b << std::endl;
  std::cout << "El resultado de operar " << num_a << " - " << num_b << " es: " << num_a - num_b << std::endl;
  std::cout << "El resultado de operar " << num_a << " * " << num_b << " es: " << num_a * num_b << std::endl;
  std::cout << "El resultado de operar " << num_a << " / " << num_b << " es: " << num_a / num_b << std::endl;
  std::cout << "El resultado de operar " << num_a << " % " << num_b << " es: " << num_a % num_b << std::endl;
  std::cout << "\nCOMPARADORES ARITMETICOS" << std::endl;
  std::cout << "El resultado de operar " << num_a << " == " << num_b << " es: " << (num_a == num_b) << std::endl;
  std::cout << "El resultado de operar " << num_a << " > " << num_b << " es: " << (num_a > num_b) << std::endl;
  std::cout << "El resultado de operar " << num_a << " < " << num_b << " es: " << (num_a < num_b) << std::endl;
  std::cout << "El resultado de operar " << num_a << " >= " << num_b << " es: " << (num_a >= num_b) << std::endl;
  std::cout << "El resultado de operar " << num_a << " <= " << num_b << " es: " << (num_a <= num_b) << std::endl;
  std::cout << "El resultado de operar " << num_a << " & " << num_b << " es: " << (num_a & num_b) << std::endl;
  std::cout << "El resultado de operar " << num_a << " | " << num_b << " es: " << (num_a | num_b) << std::endl;
  std::cout << "El resultado de operar " << num_a << " << " << num_b << " es: " << (num_a << num_b) << std::endl;
  std::cout << "El resultado de operar " << num_a << " >> " << num_b << " es: " << (num_a >> num_b) << std::endl;
  std::cout << "El resultado de operar " << num_a << " ^ " << num_b << " es: " << (num_a ^ num_b) << std::endl;
  return 0;
}