#include <iostream>
#include "HashMap.hpp"

int main() {
  HashMap hashmap;
  hashmap.set(1,1);
  hashmap.set(2,2);
  hashmap.set(3,3);
  hashmap.set(4,4);
  hashmap.set(5,5);
  hashmap.print();
  return 0;
}
