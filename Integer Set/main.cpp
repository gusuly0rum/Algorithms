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
  intset.insert(0);
//  intset.print();
  return 0;
}
