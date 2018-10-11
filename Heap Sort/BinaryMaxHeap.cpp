#include "BinaryMaxHeap.hpp"

// constructor
BinaryMaxHeap::BinaryMaxHeap() {
  std::vector<int> store;
}

// destructor
BinaryMaxHeap::~BinaryMaxHeap() {
  store.clear();
}

// basic operations
int BinaryMaxHeap::count() {
  return (int) store.size();
}

int BinaryMaxHeap::max() {
  return store.front();
}

int BinaryMaxHeap::extract() {
  int maximum = max();
  store[0] = store.back();
  store.pop_back();
  heapifyDown();
  return maximum;
}

void BinaryMaxHeap::push(int value) {
  store.push_back(value);
  heapifyUp();
}

// private
void BinaryMaxHeap::heapifyUp() {
}

void BinaryMaxHeap::heapifyDown() {
}