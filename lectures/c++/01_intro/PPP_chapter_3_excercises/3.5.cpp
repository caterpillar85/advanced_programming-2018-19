#include <iostream>


int main() {

std::string previous = "";
std::string current;
std::cout << "inserisci una parola " << '\n';
while (std::cin >> current) {
  if (previous == current) {
    std::cout << "la parola ripetuta è: " << current << '\n';

  }
  previous = current;
}

  return 0;
}
