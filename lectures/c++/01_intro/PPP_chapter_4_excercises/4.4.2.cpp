#include <iostream>

int main() {

/*
char a = 'a';
int i = 1;

while (i<100) {
  std::cout << a << '\t' << i << '\n';
  ++a;
  ++i;
}

restituisce le lettere da a_z e i numeri progressivi progressivi da 1 a 100
*/

/*

char a = 'a';

while (a <= 'z') {
  std::cout << a << '\t' << int (a) << '\n';
  ++a;
}

  restituisce le lettere da a_z e i corrispondenti valori delle lettere convertite in interi  */

for (char a = 'A'; a <= 'z'; ++a) {
  std::cout << a << '\t' << int (a) << '\n';
}

  return 0;
}
