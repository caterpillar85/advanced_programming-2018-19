/*
    "Advanced Programming"
    Target: Implement the Sieve of Eratosthenes algorithm. Write a code that
            prints on screen the first prime numbers up to `N` **included**, where `N`
            is read from stdin. The first prime number that should be printed is `2`
    Author: Daniele Bruno
    Version: 13/02/19
*/
#include <iostream>
#include <vector>
#include <cmath>

// Funzione per Eratosthenes
void print_vector_eratosthenes(int size)
{

  std::vector<bool> eratosthenes; //crea un vector di bool

  //popola l'array con tutti "true" == 1
  //std::fill(eratosthenes[1], eratosthenes[size], true);
  for (int i = 0; i < size; i++) {
    eratosthenes.push_back(i);
    //std::cout << "eratosthenes[" << eratosthenes[i] << "]" << " is in" << std::endl;
  }

  for (int i = 2; i <= std::sqrt(size); i++)
  {
    if (eratosthenes[i - 1] == 1)
    {
      for (int j = (i*i); j <= size; j+=i)
      {
        eratosthenes[j - 1] = false;
      }
    }
  }

  for (int i = 1; i <= size; i++)
  {
    if (eratosthenes[i - 1] == 1)
    {
      std::cout << "eratosthenes[" << i << "]" << " is prime number" << std::endl;
    }
  }
}

int main()
{
  std::cout << "This code allows to print a vector of prime numbers" << std::endl;
  std::cout << "Insert how many prime numbers do you want: " << std::endl;
  int size = 0;
  std::cin >> size;

    // scrivo l'array richiamando il template
    print_vector_eratosthenes(size);

  return 0;
}
