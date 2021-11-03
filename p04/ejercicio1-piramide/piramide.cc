#include <iostream>

int main () {
	double lado, ancho, altura, area, volumen;

	std::cout << "Vamos a calcular el volumen de una pirámide rectangular" << std::endl;
	std::cout << "Introduce cuánto vale el lado de la base: ";
	std::cin >> lado;
	std::cout << "Introduce cuánto vale la altura de la base: ";
	std::cin >> ancho;
	std::cout << "Introduce cuánto vale la altura de la pirámide: ";
	std::cin >> altura;
	area = lado * ancho;
	volumen = (area * altura) / 3;
	std::cout << "El volumen de la pirámide es: " << volumen << std::endl;

	return 0;
}
