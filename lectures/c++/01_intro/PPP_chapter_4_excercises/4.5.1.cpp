#include <iostream>

/* Prima del "main" si possono definire delle "funzioni" */

/* Scrivere un programma che restituisca la radice quadrata  */
/*
int square(int x)
{
  return x*x;
}

int main() {

std::cout << square(2) << '\n';
std::cout << square(10) << '\n';
*/


/* Scrivere un programma che restituisca la radice quadrata senza usare moltiplicazioni,
usando solo addizioni n volte*/
int print_square(int input)
{
  int x1 = 0;
  for (int i = 0; i < input; i++) {
      x1 += input;
  }
  return x1;
}

int main() {

int input;
std::cout << "please, insert a value you want the square " << '\n';
std::cin >> input;
std::cout << "\nThe answer is: " << print_square(input) << '\n';

}
