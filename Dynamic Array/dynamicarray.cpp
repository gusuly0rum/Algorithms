#include <iostream>
#include <stdexcept>
#include "dynamicarray.hpp"

/* Constructor & Destructor */

DynamicArray::DynamicArray() {
  count = 0;
  capacity = 5;
  store = new int[capacity];
  fill();
}

DynamicArray::~DynamicArray() {
  delete [] store;
}

/* Public */

// O(1)
int DynamicArray::get(int index) {
  checkIndex(index);
  return store[index];
}

// O(1)
void DynamicArray::set(int index, int val) {
  checkIndex(index);
  store[index] = val;
}

// O(1)
void DynamicArray::push(int val) {
  if (count == capacity) resize();
  store[count] = val;
  count++;
}

// O(1)
int DynamicArray::pop() {
  checkIndex(count - 1);
  count--;
  store[count] = NULL;
  return store[count];
}

// O(n)
void DynamicArray::unshift(int val) {
  if (count == capacity) resize();
  for (int index = count - 1; index >= 0; index--) {
    store[index + 1] = store[index];
  }
  store[0] = val;
  count++;
}

// O(n)
int DynamicArray::shift() {
  checkIndex(0);
  int first = store[0];
  for (int index = 1; index < count; index++) {
    store[index - 1] = store[index];
  }
  count--;
  store[count] = NULL;
  return first;
}

void DynamicArray::print() {
  std::cout << "{ ";
  for (int index = 0; index < capacity; index++) {
    std::cout << store[index];
    if (index < capacity - 1) std::cout << ", ";
  }
  std::cout << " }\n" << std::endl;
}

/* Private */

void DynamicArray::checkIndex(int index) {
  if (isInvalid(index)) {
    throw std::out_of_range("Index out of bounds");
  }
}

bool DynamicArray::isInvalid(int index) {
  return (index < 0) || (index >= count);
}

void DynamicArray::resize() {
  int new_capacity = capacity * 2;
  int* new_store = new int[capacity];
  
  for (int index = 0; index < count; index++) {
    new_store[index] = store[index];
  }
  
  delete [] store;
  store = new_store;
  capacity = new_capacity;
  fill();
}

void DynamicArray::fill() {
  for (int index = count; index < capacity; index++) {
    store[index] = NULL;
  }
}
