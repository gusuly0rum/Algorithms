#include "MergeSort.hpp"

int main() {
  
  std::vector<int> array { 1, 5, 7, 9, 15 };
  print(array);
  
  mergeSort(array);
  print(array);
  
  return 0;
}
