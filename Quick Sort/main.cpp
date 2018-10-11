#include "Quicksort.hpp"

int main() {
  std::vector<int> array { 1, 2, 3, 4, 5, 5, 4, 3, 2, 1 };
  print(quicksort(array));
  
  return 0;
}
