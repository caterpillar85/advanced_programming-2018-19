#include <iostream>

/* Prima del "main" si possono definire delle "funzioni" */

/*
int square(int x)
{
  return x*x;
}

int main() {

std::cout << square(2) << '\n';
std::cout << square(10) << '\n';
*/

int square(int x)
{

  for (int i = 1; i < 4; i++) {
        int x1 = 0;
        x = x1 + x;
  }
  return x;
}

int main() {

int x = 0;
std::cout << "inserisci un numero intero di cui vuoi il quadrato " ; '\n';
std::cin >> x;
std::cout << square(x) << '\n';

  return 0;
}
