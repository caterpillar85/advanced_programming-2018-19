/*
    "Advanced Programming"
    Target: Populate an array named `primes` containing the first prime numbers
            up to 100. Consider 2 as the first prime (i.e. `primes[0] == 2`).
    Author: Daniele Bruno
    Version: 12/02/19
*/

#include <iostream>

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

// Funzione (basata su template) per trovare i numeri primi
template <typename Type>
void print_array_primes(Type* d_array, int size)
{
// aggiungo elementi all'array facendo il check
  int number = 0;
  int* primes = array_template<int>(size);
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
    primes[number++] = i;
    std::cout << "primes[" << i << "]" << " is prime number" << std::endl;
    }
  }
      delete[] primes;
}

int main()
{
  std::cout << "This code allows to print an array of prime numbers" << std::endl;
  std::cout << "Insert how many prime numbers do you want: " << std::endl;
  int size = 0;
  std::cin >> size;

    // scrivo l'array richiamando il template
    int* primes = array_template<int>(size);
    print_array_primes(primes, size);

  return 0;
}
