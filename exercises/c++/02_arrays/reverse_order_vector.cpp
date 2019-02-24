/*
    "Advanced Programming"
    Target: Write a program that reads from stdin the length of an array and
            then store in it the numbers given from stdin. The program should
            then prints the numbers in **reverse order**.
            Perform the same actions using std::vector
    Author: Daniele Bruno
    Version: 09/02/19
*/

#include <iostream>
#include <vector>

int main()
{
  std::cout << "This code allows to reverse a given vector" << std::endl;
  std::cout << "Insert the vector dimension: ";
  int size;
  std::cin >> size;

    // scrivo l'array usando un vector di tipo int
    // crea un vettore di tipo type con dimensione n e lo inizializza ai valori costanti t
    std::vector <int> vec(size);
    for (int i = 0; i < size; ++i)
    {
      std::cout << "Enter the element number " << i + 1 << " of the vector" << std::endl;
      std::cin >> vec[i];
    }

    for(int i = size - 1; i >= 0; i--)
    {
      std::cout << "vector[" << i << "] = " << vec[i] << std::endl;
    }
  return 0;
  }
