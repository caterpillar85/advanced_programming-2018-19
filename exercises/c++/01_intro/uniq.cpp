/*
    "Advanced Programming"
    Target: replace the "uniq -c" command of the linux bash
    Author: Daniele Bruno
    Version: 20/10/18
*/

#include <iostream>

int main() {
std::string previous_line = "";
std::string new_line;

/* "While-statement" */

while (std::getline(std::cin, new_line)) {
int number_of_repetition = 1;

if (new_line == previous_line){
  ++number_of_repetition;
  std::cout << new_line << " è stata ripetuta: " << number_of_repetition <<
  " volte: " << '\n';
}

else if (new_line != previous_line) {
  previous_line = new_line;

}
  }
    }

/* For-Statement */

/*
for (int number_of_repetition = 1; number_of_repetition < 100; number_of_repetition++) {
  (std::getline(std::cin, new_line));

if (new_line == previous_line){

  std::cout << new_line << " è stata ripetuta: " << number_of_repetition <<
  " volte: " << '\n';
}

else if (new_line != previous_line) {
  previous_line = new_line;
}

  }
      }
  */
