#include "MaxIntSet.hpp"
#include "IntegerSet.hpp"

int main() {
  MaxIntSet maxintset(5);
  maxintset.insert(0);
  maxintset.insert(2);
  maxintset.insert(4);
  maxintset.remove(2);
  maxintset.print();
  
  IntegerSet intset;
  intset.insert(1);
  intset.insert(2);
  intset.insert(3);
  intset.insert(4);
  intset.insert(5);
  intset.insert(6);
  std::cout << intset.count << std::endl;
  intset.print();
  
  return 0;
}
