#include "Quicksort.hpp"

int main() {
  std::vector<int> array { 5, 4, 3, 2, 1, 0, 5, 4, 3, 2, 1, 0 };
  print(quicksort(array));
  
  return 0;
}
