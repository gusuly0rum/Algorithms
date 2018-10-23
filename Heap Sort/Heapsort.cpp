#include "Heapsort.hpp"
#include "BinaryMaxHeap.hpp"

// O(nlog(n))
std::vector<int> heapsort(std::vector<int> array) {
  BinaryMaxHeap heap;
  std::vector<int> result;
  for (int k = 0; k < array.size(); k++) heap.insert(array[k]);
  while (heap.count() > 0) result.push_back(heap.extract());
  return result;
}

std::vector<int> heapsortInplace(std::vector<int> array) {
  int index = 0;
  while (index < array.size()) {
    BinaryMaxHeap::heapifyUp(array, index);
    index++;
  }
  
  index = 0;
  while (true) {
    BinaryMaxHeap::heapifyDown(array, index);
    index++;
  }
  return array;
}
