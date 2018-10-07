#include <iostream>
#include <stdexcept>
#include "RingBuffer.hpp"

/* constructor */

RingBuffer::RingBuffer() {
  start = 0;
  count = 0;
  capacity = 5;
  store = new int[capacity];
  fill();
}

RingBuffer::~RingBuffer() {
  delete[] store;
}

/* public */

// accessors

// O(1)
int &RingBuffer::operator[](int index) {
  int internal = intern(index);
  checkIndexGet(internal);
  return store[internal];
}

// O(1)
int RingBuffer::get(int index) {
  int internal = intern(index);
  checkIndexGet(internal);
  return store[internal];
}

// O(1)
void RingBuffer::set(int index, int value) {
  int internal = intern(index);
  checkIndexSet(internal);
  store[internal] = value;
}

// O(1) ammortized
void RingBuffer::push(int value) {
  if (count == capacity) resize();
  set(count, value);
  count++;
}

// O(1) ammortized
void RingBuffer::unshift(int value) {
  if (count == capacity) resize();
  set(capacity - 1, value);
  count++;
}

// O(1)
int RingBuffer::pop() {
  count--;
  return get(count);
}

// O(1)
int RingBuffer::shift() {
  start++;
  return get(start - 1);
}

void RingBuffer::print() {
  std::cout << "{ ";
  for (int index = 0; index < capacity; index++) {
    std::cout << store[index];
    if (index < capacity - 1) std::cout << ", ";
  }
  std::cout << " }\n" << std::endl;
}

/* private */

void RingBuffer::checkIndexGet(int index) {
  if (indexInvalidGet(index)) {
    throw std::out_of_range("Index out of bounds");
  }
}

void RingBuffer::checkIndexSet(int index) {
  if (indexInvalidSet(index)) {
    throw std::out_of_range("Index out of bounds");
  }
}

bool RingBuffer::indexInvalidGet(int index) {
  return (index < 0 ) || (index >= count);
}

bool RingBuffer::indexInvalidSet(int index) {
  return (index < 0 ) || (index > count);
}

int RingBuffer::intern(int index) {
  return wrap(index + start) % capacity;
}

int RingBuffer::wrap(int index) {
  while (index < 0) {
    index += capacity;
  }
  return index;
}

void RingBuffer::fill() {
  for (int index = 0; index < capacity; index++) {
    store[index] = NULL;
  }
}

void RingBuffer::resize() {
//  int new_capacity = capacity * 2;
//  int* new_store = new int[new_capacity];
}
