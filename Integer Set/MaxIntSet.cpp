#include <iostream>
#include <stdexcept>
#include "MaxIntSet.hpp"

/* constructor */

MaxIntSet::MaxIntSet(int max) {
  max = max;
  store = new bool[max];
  fillStore();
}

/* public */

// O(1)
bool MaxIntSet::get(int value) {
  return store[value];
}

// O(1)
void MaxIntSet::set(int value) {
  store[value] = true;
}

// O(1)
void MaxIntSet::remove(int value) {
  store[value] = false;
}

// O(1)
bool MaxIntSet::includes(int value) {
  return !!store[value];
}

/* private */

void MaxIntSet::fillStore() {
  for (int index = 0; index < max; index++) {
    store[index] = false;
  }
}

void MaxIntSet::checkIndex(int index) {
  if (indexInvalid(index)) {
    throw std::out_of_range("Index out of bounds");
  }
}

bool MaxIntSet::indexInvalid(int index) {
  return (index >= max) || (index < 0);
}
