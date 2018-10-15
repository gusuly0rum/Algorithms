#include <iostream>
#include "HashMap.hpp"

/* constructor */
HashMap::HashMap() {
  this->count = 0;
  this->numBuckets = 5;
  this->store = new LinkedList[numBuckets];
}

/* accessors */
int& HashMap::operator[](int key) {
}

/* basic operations */
void HashMap::remove(int key) {
}

bool HashMap::includes(int key) const {
}

/* private */
void HashMap::insert(int value) {
}

void HashMap::resize() {
}
