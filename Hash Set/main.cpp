#include <iostream>
#include "HashSet.hpp"

int main() {
  HashSet hashset;
  hashset.insert(1);
  hashset.insert(2);
  hashset.insert(3);
  hashset.insert(4);
  hashset.insert(5);
  hashset.insert(6);
  
//  hashset.remove(2);
//  hashset.remove(3);
//  hashset.remove(10);
//
//  std::cout << hashset.includes(1) << std::endl;
//  std::cout << hashset.includes(5) << std::endl;
//  std::cout << hashset.includes(10) << std::endl;
  hashset.print();
  
  return 0;
}