#include "Heapsort.hpp"
#include "BinaryMaxHeap.hpp"

int main() {
  
  // test case BMH::insert
  BinaryMaxHeap bmh;
  std::vector<int> array { 0, 1, 2, 3, 4, 5 };
  for (int k = 0; k < 6; k++) {
    bmh.insert(k);
  }

  // test case BMH::extract
  BinaryMaxHeap::print(bmh.store);
  bmh.extract();
  BinaryMaxHeap::print(bmh.store);
  bmh.extract();
  BinaryMaxHeap::print(bmh.store);
  
  // test case heapsort
  std::vector<int> result1 = heapsort(array);
  BinaryMaxHeap::print(result1);
  
  // test case heapsort inplace
  std::vector<int> result2 = heapsortInplace(array);
  BinaryMaxHeap::print(result2);
  
  return 0;
}
