#include <iostream>

int main() {

  double nota, media, sum;

  std:: cout << "Vamos a calcular la nota media entre 3 alumnos." << std::endl;

  for (int i = 0; i < 3; i++) {
    std::cout << "Introduce la nota de el/la alumno/a " << i + 1 << ": ";
    std::cin >> nota;
    if (0 <= nota && nota <= 10) {
      sum += nota;
    } else{
      std::cout << "Nota no válida. Vuelva a intentarlo" << std::endl; 
      i--;
    }
  }

  media = sum/3;
  std::cout << "La media de los 3 alumons es: " << media << std::endl;

  return 0;
}