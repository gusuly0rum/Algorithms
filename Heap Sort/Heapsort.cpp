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
  int count = (int) array.size();
  for (int k = 0; k < count; k++) BinaryMaxHeap::heapifyUp(array, k);
  
  int temp;
  while (count > 0) {
    count--;
    temp = array[0];
    array[0] = array[count];
    array[count] = temp;
    BinaryMaxHeap::heapifyDown(array, 0, count);
  }
  
  return array;
}
