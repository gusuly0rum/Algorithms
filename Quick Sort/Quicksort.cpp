#include "Quicksort.hpp"

void quicksort(std::vector<int> array) {
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
