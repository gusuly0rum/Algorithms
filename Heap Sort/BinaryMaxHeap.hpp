#include <vector>
#include <iostream>
#include <stdexcept>

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
  void insert(int value);
  
private:
  // internal members
  void heapifyUp();
  void heapifyDown();
  
  int parentIndex(int childIndex);
  std::vector<int> childIndices(int parentIndex);
  
  // errors
  void raise();
};

