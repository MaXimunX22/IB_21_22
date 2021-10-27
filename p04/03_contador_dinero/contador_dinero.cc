#include <iostream>

int main() {

  double total;
  int cantidad;

  std::cout << "Vamos a contar cuanto dinero tienes." << std::endl;
  std::cout << "¿Cuántas monedas de 1 céntimo tienes? ";
  std::cin >> cantidad;
  total += cantidad * 0.01;

  std::cout << "¿Cuántas monedas de 5 céntimos tienes? ";
  std::cin >> cantidad;
  total += cantidad * 0.05;
  
  std::cout << "¿Cuántas monedas de 20 céntimos tienes? ";
  std::cin >> cantidad;
  total += cantidad * 0.20;

  std::cout << "¿Cuántas monedas de 50 céntimos tienes? ";
  std::cin >> cantidad;
  total += cantidad * 0.50;

  std::cout << "¿Cuántos billetes de 5 euros tienes? ";
  std::cin >> cantidad;
  total += cantidad * 5;

  std::cout << "¿Cuántos billetes de 10 euros tienes? ";
  std::cin >> cantidad;
  total += cantidad * 10;

  std::cout << "¿Cuántos billetes de 20 euros tienes? ";
  std::cin >> cantidad;
  total += cantidad * 20;

  std::cout << "¿Cuántos billetes de 50 euros tienes? ";
  std::cin >> cantidad;
  total += cantidad * 50;

  std::cout << "¿Cuántos billetes de 100 euros tienes? ";
  std::cin >> cantidad;
  total += cantidad * 100;

  std::cout << "¿Cuántos billetes de 200 euros tienes? ";
  std::cin >> cantidad;
  total += cantidad * 200;

  std::cout << "¿Cuántos billetes de 500 euros tienes? ";
  std::cin >> cantidad;
  total += cantidad * 500;

  std::cout << "\nEn total tienes: " << total << " euros." << std::endl;

  return 0;
}