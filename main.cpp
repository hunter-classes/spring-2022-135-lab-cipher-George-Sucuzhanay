#include <iostream>

#include "funcs.h"

void print(std::vector<double> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}

int main()
{
  std::vector<double> e = getLetterFreqs("But she wasn't sure she actually preferred it. He walked down the steps from the train station in a bit of a hurry knowing the secrets in the briefcase must be secured as quickly as possible.");
  print(e);
  std::string x  = encryptCaesar("Hello World and Cpp", 26);
  std::string v = solve(encryptCaesar("Hello World and Cpp", 26));
  std::cout << x << std::endl;
  std::cout << v << std::endl;
  return 0;
}
