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
  
  return 0;
}
