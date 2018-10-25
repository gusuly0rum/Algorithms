#include <iostream>
#include "MaxIntSet.hpp"
#include "IntegerSet.hpp"

int main() {
  
  // test case - MaxIntSet
  MaxIntSet maxintset(5);
  maxintset.insert(0);
  maxintset.insert(2);
  maxintset.insert(4);
  maxintset.remove(2);
  maxintset.print();
  
  // test case - IntSet::insert
  IntegerSet intset;
  intset.insert(1);
  intset.insert(2);
  intset.insert(3);
  intset.insert(4);
  intset.insert(5);
  intset.remove(2);
  intset.remove(3);
  
  // test case - IntSet::includes
  std::cout << intset.includes(1) << std::endl;
  std::cout << intset.includes(2) << std::endl;
  std::cout << intset.length() << std::endl;
  
  intset.print();
  
  return 0;
}
