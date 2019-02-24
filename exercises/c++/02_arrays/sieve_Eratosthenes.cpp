/*
    "Advanced Programming"
    Target: Implement the Sieve of Eratosthenes algorithm. Write a code that
            prints on screen the first prime numbers up to `N` **included**, where `N`
            is read from stdin. The first prime number that should be printed is `2`
    Author: Daniele Bruno
    Version: 13/02/19
*/
#include <iostream>
#include <cmath>

// template della funzione generica per la creazione di un array
// restituisce il pointer al primo elemento
template <typename Type>
Type* array_template(int size)  //funzione di tipo "Type"
{
  Type* d_array{new Type[size]};
  for(int i = 0; i < size; ++i)
  {
      d_array[i];
  }
  return d_array;
}

// Funzione (basata su template) per Eratosthenes
template <typename Type>
void print_array_eratosthenes(Type* d_array, int size)
{
  bool* primes = array_template<bool>(size); //crea un array restituendo il pointer al primo elemento
  std::fill(primes + 1, primes + size, true); //popola l'array con tutti "true"

  for (int i = 2; i <= std::sqrt(size); i++)
  {
    if (primes[i - 1])
    {
      for (int j = (i*i); j <= size; j+=i)
      {
        primes[j - 1] = false;
      }
    }
  }

  for (int i = 1; i <= size; i++)
  {
    if (primes[i - 1])
    {
      std::cout << "primes[" << i << "]" << " is prime number" << std::endl;
    }
  }
}

int main()
{
  std::cout << "This code allows to print an array of prime numbers" << std::endl;
  std::cout << "Insert how many prime numbers do you want: " << std::endl;
  int size = 0;
  std::cin >> size;

    // scrivo l'array richiamando il template
    bool* eratosthenes = array_template<bool>(size);
    print_array_eratosthenes(eratosthenes, size);

  return 0;
}
