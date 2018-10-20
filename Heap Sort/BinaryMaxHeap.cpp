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

// helper methods
int BinaryMaxHeap::parentIndex(int childIndex) {
  int index = (childIndex - 1) / 2;
  if (childIndex < 0) throw std::out_of_range("Root has no parent");
  return index;
}

std::vector<int> BinaryMaxHeap::childIndices(int parentIndex) {
  std::vector<int> indices;
  int left = (parentIndex * 2 + 1);
  int rite = (parentIndex * 2 + 2);
  if (left < count()) indices.push_back(left);
  if (rite < count()) indices.push_back(rite);  
  return indices;
}

// advanced methodss
void BinaryMaxHeap::heapifyUp() {
  int childIdx = count() - 1;
  int parentIdx = parentIndex(count() - 1);
  int child = store[childIdx];
  int parent = store[parentIdx];
  
  if (child > parent) {
    store[childIdx] = parent;
    store[parentIdx] = child;
    heapifyUp();
  }
}

void BinaryMaxHeap::heapifyDown() {
}
