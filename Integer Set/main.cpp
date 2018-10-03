#include "MaxIntSet.hpp"
#include <iostream>

int main() {
  MaxIntSet maxintset(5);
  maxintset.set(0);
  maxintset.set(2);
  maxintset.set(4);
  maxintset.print();
  return 0;
}
