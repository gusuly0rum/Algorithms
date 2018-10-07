#include <iostream>
#include "RingBuffer.hpp"

void print(int value) {
  std::cout << value << std::endl;
}

int main() {
  RingBuffer array;
  array.push(0);
  array.push(1);
  array.push(2);
  array.push(3);
  array.unshift(-1);
  
  print(array[0]);
  print(array[1]);
  print(array[2]);
  print(array[3]);
  
  array.print();
  return 0;
}
