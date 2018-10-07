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

// O(1)
int RingBuffer::get(int index) {
  checkIndex(index);
  return store[index];
}

void RingBuffer::push(int value) {
  if (count == capacity) resize();
  store[count] = value;
  count++;
}

void RingBuffer::unshift(int value) {
  if (count == capacity) resize();
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

void RingBuffer::checkIndex(int index) {
  if (indexInvalid(index)) {
    throw std::out_of_range("Index out of bounds");
  }
}

bool RingBuffer::indexInvalid(int index) {
  return (index < 0 ) || (index >= capacity);
}

void RingBuffer::fill() {
  for (int index = 0; index < capacity; index++) {
    store[index] = NULL;
  }
}

void RingBuffer::resize() {
  int new_capacity = capacity * 2;
  int* new_store = new int[new_capacity];
}
