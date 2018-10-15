#include <iostream>
#include "HashMap.hpp"

HashMap::HashMap() {
  this->count = 0;
  this->numBuckets = 5;
  this->store = new LinkedList[numBuckets];
}
