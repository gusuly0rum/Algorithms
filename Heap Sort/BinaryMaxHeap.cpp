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

void BinaryMaxHeap::insert(int value) {
  store.push_back(value);
  heapifyUp();
}

// private
void BinaryMaxHeap::heapifyUp() {
}

void BinaryMaxHeap::heapifyDown() {
}

int BinaryMaxHeap::parentIndex(int childIndex) {
  int index = (childIndex - 1) / 2;
  if (index < 0) raise();
  return index;
}

std::vector<int> BinaryMaxHeap::childIndices(int parentIndex) {
  std::vector<int> indices;
  int left = (parentIndex * 2 + 1);
  int rite = (parentIndex * 2 + 2);
  indices.push_back(left);
  indices.push_back(rite);
  return indices;
}

void BinaryMaxHeap::raise() {
  throw std::out_of_range("Root has no parent");
}
