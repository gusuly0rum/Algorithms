#include "Heapsort.hpp"
#include "BinaryMaxHeap.hpp"

std::vector<int> heapsort(std::vector<int> array) {
  BinaryMaxHeap heap;
  std::vector<int> result;
  
  for (int index = 0; index < (int) array.size(); index++) {
    heap.insert(array[index]);
  }
  
  while (heap.count() > 0) {
    result.push_back(heap.extract());
  }
  
  return result;
}

void heapsortInplace(std::vector<int> array) {
}
