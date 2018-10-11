#include <vector>
#include <iostream>

class BinaryMaxHeap {
  // member variables
  std::vector<int> store;
  
public:
  // constructor & destructor
  BinaryMaxHeap();
  ~BinaryMaxHeap();
  
  // basic operations
  int max();
  int count();
  int extract();
  void push(int value);
  
private:
  // internal members
  void heapifyUp();
  void heapifyDown();
};

