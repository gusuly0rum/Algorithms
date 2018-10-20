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
  BinaryMaxHeap::heapifyUp(store, count() - 1, count());
}

// helper methods
int BinaryMaxHeap::parentIndex(int childIndex) {
  int index = (childIndex - 1) / 2;
  if (childIndex < 0) throw std::out_of_range("Root has no parent");
  return index;
}

std::vector<int> BinaryMaxHeap::childIndices(int parentIndex, int count) {
  std::vector<int> indices;
  int left = (parentIndex * 2 + 1);
  int rite = (parentIndex * 2 + 2);
  if (left < count) indices.push_back(left);
  if (rite < count) indices.push_back(rite);
  return indices;
}

// advanced methods
void BinaryMaxHeap::heapifyUp(std::vector<int>& array, int childIndex) {
  if (childIndex == 0) return;
  
  int parentIndex = BinaryMaxHeap::parentIndex(childIndex);
  int parent = array[parentIndex];
  int child = array[childIndex];
  
  if (child > parent) {
    array[childIndex] = parent;
    array[parentIndex] = child;
    BinaryMaxHeap::heapifyUp(array, parentIndex, length);
  }
}

void BinaryMaxHeap::heapifyDown(std::vector<int>& array, int parentIndex) {
}

// debugger
void BinaryMaxHeap::print(std::vector<int>& array) {
  std::cout << "{ ";
  for (int index = 0; index < array.size(); index++) {
    std::cout << array[index];
    if (index < array.size() - 1) std::cout << ", ";
  }
  std::cout << " }\n" << std::endl;
}
