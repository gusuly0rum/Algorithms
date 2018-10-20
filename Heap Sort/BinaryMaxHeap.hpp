#include <vector>
#include <iostream>
#include <stdexcept>

class BinaryMaxHeap {
  // member variables
public:
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
  
  // helper methods
  static int parentIndex(int childIndex);
  static std::vector<int> childIndices(int parentIndex, int count);
  
  // advanced operations
  static void heapifyUp(std::vector<int>& array, int childIndex, int length);
  static void heapifyDown();
  
  // debugger
  static void print(std::vector<int>& array);
};

