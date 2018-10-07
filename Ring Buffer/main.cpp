#include <iostream>
#include "RingBuffer.hpp"

void print(int value) {
  std::cout << value << std::endl;
}

int main() {
  RingBuffer array;
  array.push(3);
  array.unshift(2);
  array.unshift(1);
  array.push(4);
  array.unshift(0);
  array.push(5);
  
  print(array[0]);
  print(array[1]);
  print(array[2]);
  print(array[3]);
  print(array[4]);
  print(array[5]);
  array.print();
  
  return 0;
}
