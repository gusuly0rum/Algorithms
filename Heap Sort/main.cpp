#include "BinaryMaxHeap.hpp"

int main() {
  BinaryMaxHeap bmh;
  for (int k = 0; k < 6; k++) {
    bmh.insert(k);
  }

  BinaryMaxHeap::print(bmh.store);
  bmh.extract();
  BinaryMaxHeap::print(bmh.store);
  
  return 0;
}
