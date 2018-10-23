#include "Heapsort.hpp"
#include "BinaryMaxHeap.hpp"

int main() {
  
  // test case BMH::insert
  BinaryMaxHeap bmh;
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
  std::vector<int> array { 0, 1, 2, 3, 4, 5 };
  std::vector<int> result = heapsort(array);
  BinaryMaxHeap::print(result);
  
  // test case heapsort inplace
  
  return 0;
}
