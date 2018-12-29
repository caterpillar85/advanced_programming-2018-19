/*
    "Advanced Programming"
    Target: Write a code that reads a number with its proper unit of measure,
            and prints back that number according to the SI units
    Author: Daniele Bruno
    Version: 30/11/18
*/

#include <iostream>

double inch_meter(double input)
{

  double output=input*0.254;
  std::cout << input << " inches corresponds to " << output << " meters" <<'\n';
return output;
}

double meter_inch(double input)
{

  double output=input*39.3701;
  std::cout << input << " meters corresponds to " << output << " inches" << '\n';
return output;
}


int main() {

double input=0.0;
std::string measure="";
std::string inches="";

  std::cout << "please, insert a value followed by a unit of measure, inches or meters" << '\n';
  std::cin >> input >> measure;

if (measure == inches) {
    inch_meter();
  } else {
    meter_inch();
  }

return 0;
    }
