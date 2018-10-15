#include <iostream>
#include "HashSet.hpp"

int main() {
  HashSet hashset;
  hashset.insert(1);
  hashset.insert(2);
  hashset.insert(3);
  hashset.insert(4);
  hashset.insert(5);
  
//  hashset.remove(1);
//  hashset.remove(5);
//  hashset.remove(10);
  
  std::cout << hashset.includes(1) << std::endl;
  std::cout << hashset.includes(5) << std::endl;
  std::cout << hashset.includes(10) << std::endl;
  hashset.print();
  
  return 0;
}
