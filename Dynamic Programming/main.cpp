#include "Frog.hpp"
#include "debugger.hpp"
#include "Fibonacci.hpp"

int main() {
  
  // test case - Fibonacci Top Down
  sprint("test case - Fibonacci Top Down");
  Fibonacci fibonacci;
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
  sprint("test case - Frog Top Down");
  Frog frog;
  vvprint(frog.topDown(1));
  vvprint(frog.topDown(2));
  vvprint(frog.topDown(3));
  vvprint(frog.topDown(4));
  sprint("");
  
  // test case - Frog Bottom Up
  sprint("test case - Frog Bottom Up");
  sprint("");
  
  return 0;
}
