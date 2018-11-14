#include <iostream>
#include "Frog.hpp"
#include "Fibonacci.hpp"

void print(int value) {
  std::cout << value << std::endl;
}

void sprint(const char* string) {
  std::cout << string << std::endl;
}

int main() {
  
  // test case - Fibonacci Top Down
  Fibonacci fibonacci;
  sprint("test case - Fibonacci Top Down");
  print(fibonacci.topDown(1));
  print(fibonacci.topDown(2));
  print(fibonacci.topDown(3));
  print(fibonacci.topDown(4));
  print(fibonacci.topDown(5));
  sprint("");
  
  // test case - Fibonacci Bottom Up
  sprint("test case - Fibonacci Bottom Up");
  print(fibonacci.bottomUp(1));
  print(fibonacci.bottomUp(2));
  print(fibonacci.bottomUp(3));
  print(fibonacci.bottomUp(4));
  print(fibonacci.bottomUp(5));
  sprint("");
  
  // test case - Frog Top Down
  sprint("test case - Blair Top Down");
  
  // test case - Frog Bottom Up
  sprint("test case - Blair Bottom Up");
  
  return 0;
}
