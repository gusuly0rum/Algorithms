#include "Quicksort.hpp"

// naive implementation
void quicksort(std::vector<int>& array) {
  int length = (int) array.size();
  int pivotIndex = length / 2;
  int pivot = array[pivotIndex];
  
  int element;
  std::vector<int> left;
  std::vector<int> rite;
  
  for (int index = 0; index < length; index++) {
    element = array[index];
    element <= pivot ? left.push_back(element) : rite.push_back(element);
  }
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
