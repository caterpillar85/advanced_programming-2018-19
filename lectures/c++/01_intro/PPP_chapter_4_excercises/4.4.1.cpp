#include <iostream>

int main() {

const double eur_dollar = 1.16;
double valore = 1.0;
char valuta;

std::cout << "Inserisci un valore seguito dalla valuta (e o d) " << '\n';
std::cin >> valore >> valuta;

if (valuta == 'e') {
  std::cout << valore << valuta << " corrispondono a "
  << eur_dollar*valore << " dollari" << '\n';      /* conversione eur - dollar */
} else if (valuta == 'd') {
  std::cout << valore << valuta << " corrispondono a "
  << valore/eur_dollar << " euro" << '\n';            /* conversione dollar - eur */
} else {
  std::cout << "Purtroppo non posso convertire la valuta richiesta!" << '\n';      /* code */
}

  return 0;
}
