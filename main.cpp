#ifndef TESTS

// Main.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "postfix.h"
#include <sstream>
#include <istream>
int main()
{
  // std::cout << getResult(std::cin);
  // std::istringstream input = std::istringstream("1 1 + =");

  
  // std::cout << getResult(input);
  std::istringstream input = std::istringstream("10 2 - =");
  std::cout << getResult(input);
  // input = std::istringstream("8 2 * =");
  // std::cout << getResult(input);
  // input = std::istringstream("27 3 / =");
  // std::cout << getResult(input);
  // input = std::istringstream("14 4 % =");
  // std::cout << getResult(input);
  // input = std::istringstream("14 4 + 2 * 4 / 3 - 4 % =");
  // std::cout << getResult(input);
  // input = std::istringstream("5 3 - 2 4 + * =");
  // std::cout << getResult(input);
  return 0;
}

#endif