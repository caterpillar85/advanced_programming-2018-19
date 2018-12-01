#include <iostream>

int main(int argc, char const *argv[]) {

std::cout << "please, could give me your name?" << '\n';
std::string name;
std::cin >> name;
std::cout << "please, could give me your age in years?" << '\n';
double age;
std::cin >> age;
double age_months {age *12};

std::cout << "Hi, your name is " << name << " Your age is " << age_months << " in months" << '\n';

  return 0;
}
