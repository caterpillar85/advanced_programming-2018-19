/*
    "Advanced Programming"
    Target: write a function `get_xxx` that reads from stdin until a valid number is fed
    Author: Daniele Bruno
    Version: 17/11/2018
*/

#include <iostream>

int get_int()
{

int input;

while (!(std::cin >> input))
{
  std::cin.clear();
  std::cin.ignore();
}
return input;

}

double get_double()
{

double input;

while (!(std::cin >> input))
{
  std::cin.clear();
  std::cin.ignore();
}
return input;

}

int main()
{
  std::cout << "please, insert a value of any type" << '\n';
  int d = get_double();
  int i = get_int();
  std::cout << "the value that complete the function is: " << d <<'\n';
  std::cout << "the value that complete the function is: " << i <<'\n';
  return 0;
}
