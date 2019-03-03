/*
    "Advanced Programming"
    Target: Populate an array named `primes` containing the first prime numbers
            up to 100. Consider 2 as the first prime (i.e. `primes[0] == 2`).
            Use std:vector
    Author: Daniele Bruno
    Version: 12/02/19
*/

#include <iostream>
#include <vector>

// Funzione (basata su template) per trovare i numeri primi
void print_vector_primes(int size)
{
// aggiungo elementi al vettore facendo il check
  //int number = 0;
  std::vector<int> primes;

  for (int i = 2; i < size; i++)
  {
    bool marker = true;
    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
        marker = false;
        break;
      }
    }
  if (marker)
  {
    primes.push_back(i);
    std::cout << "primes[" << i << "]" << " is prime number" << std::endl;
    }
  }
    //  delete[] primes;
}

int main()
{
  std::cout << "This code allows to print a vector of prime numbers" << std::endl;
  std::cout << "Insert how many prime numbers do you want: " << std::endl;
  int size = 0;
  std::cin >> size;

    // scrivo il vettore richiamando la funzione
    print_vector_primes(size);

  return 0;
}
