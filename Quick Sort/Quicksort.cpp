#include <iostream>
#include "Quicksort.hpp"

// debugger
void print(std::vector<int> array) {
  std::cout << "{ ";
  for (int index = 0; index < array.size(); index++) {
    std::cout << array[index];
    if (index < array.size() - 1) std::cout << ", ";
  }
  std::cout << " }\n" << std::endl;
}

// naive implementation
std::vector<int> quicksort(std::vector<int> array) {
  int length = (int) array.size();
  if (length <= 1) return array;
  
  int pivotIndex = length / 2;
  int pivot = array[pivotIndex];
  
  int element;
  std::vector<int> left;
  std::vector<int> pivs;
  std::vector<int> rite;
  
  for (int index = 0; index < length; index++) {
    element = array[index];
    if (element < pivot) {
      left.push_back(element);
    } else if (element > pivot) {
      rite.push_back(element);
    } else {
      pivs.push_back(element);
    }
  }
  
  left = quicksort(left);
  rite = quicksort(rite);
  left.insert(left.end(), pivs.begin(), pivs.end());
  left.insert(left.end(), rite.begin(), rite.end());
  return left;
}


// inplace implementation
void quicksortInplace(std::vector<int>& array) {
}
