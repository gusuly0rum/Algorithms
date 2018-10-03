#include <iostream>
#include <stdexcept>
#include "MaxIntSet.hpp"

/* constructor */

MaxIntSet::MaxIntSet(int max) {
  capacity = max;
  store = new bool[capacity];
  fillStore();
}

/* public */

// O(1)
bool MaxIntSet::get(int value) {
  checkIndex(value);
  return store[value];
}

// O(1)
void MaxIntSet::set(int value) {
  checkIndex(value);
  store[value] = true;
}

// O(1)
void MaxIntSet::remove(int value) {
  checkIndex(value);
  store[value] = false;
}

// O(1)
bool MaxIntSet::includes(int value) {
  checkIndex(value);
  return !!store[value];
}

void MaxIntSet::print() {
  std::cout << "{ ";
  for (int index = 0; index < capacity; index++) {
    std::cout << store[index];
    if (index < capacity - 1) std::cout << ", ";
  }
  std::cout << " }\n" << std::endl;
}

/* private */

void MaxIntSet::fillStore() {
  for (int index = 0; index < capacity; index++) {
    store[index] = false;
  }
}

void MaxIntSet::checkIndex(int index) {
  if (indexInvalid(index)) {
    throw std::out_of_range("Index out of bounds");
  }
}

bool MaxIntSet::indexInvalid(int index) {
  return (index < 0) || (index >= capacity);
}
