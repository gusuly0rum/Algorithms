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
  
  // helper methodss
  static int parentIndex(int childIndex);
  static std::vector<int> childIndices(int parentIndex);
  
  // advanced operations
  static void heapifyUp();
  static void heapifyDown();
  
private:
  // internal members
  void checkIndex(int index);
};

