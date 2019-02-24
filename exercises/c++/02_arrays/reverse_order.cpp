/*
    "Advanced Programming"
    Target: Write a program that reads from stdin the length of an array and
            then store in it the numbers given from stdin. The program should
            then prints the numbers in **reverse order**.
    Author: Daniele Bruno
    Version: 09/02/19
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
      std::cout << "Enter the element number " << i + 1 << " of the array" << std::endl;
      std::cin >> d_array[i];
  }
  return d_array;
}

// Funzione (basata su template) per invertire gli elementi di un array
template <typename Type>
void print_array_reverse(Type* d_array, int size)
{
      for(int i = size - 1; i >= 0; i--)
        {
        std::cout << "array[" << i << "] = " << d_array[i] << std::endl;
        }
    delete[] d_array;
}

int main()
{
  std::cout << "This code allows to reverse a given array" << std::endl;
  std::cout << "Insert the array dimension: ";
  int size;
  std::cin >> size;
  // scelta della funzione (integer or double)
  std::cout << "Choose the type: 0 = integer ; 1 = double ";
  int type{0};
  std::cin >> type;
  if (type == 0) {
    // scrivo l'array richiamando il template
    // array di tipo int
    int* int_array = array_template<int>(size);
    print_array_reverse(int_array, size);
  }
    else {
      // scrivo l'array richiamando il template
      // array di tipo double
      double* double_array = array_template<double>(size);
      print_array_reverse(double_array, size);
    }
  return 0;
}
