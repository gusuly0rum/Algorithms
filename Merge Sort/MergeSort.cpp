#include "MergeSort.hpp"

// merge sort O(nlog(n))

void mergeSort(std::vector<int>& array) {
}


// debugger

void print(std::vector<int> array) {
  std::cout << "{ ";
  for (int index = 0; index < array.size(); index++) {
    std::cout << array[index];
    if (index < array.size() - 1) std::cout << ", ";
  }
  std::cout << " }\n" << std::endl;
}
