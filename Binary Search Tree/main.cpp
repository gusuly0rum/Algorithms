#include "BinarySearchTree.hpp"

void print(int value) {
  std::cout << value << std::endl;
}

int main() {
  BinarySearchTree bst;
  int values[9] { 5, 3, 7, 1, 4, 9, 0, 2, 10 };
  int length = sizeof(values) / sizeof(values[0]);
  
  for (int index = 0; index < length; index++) {
    bst.insert(values[index]);
  }
  
  return 0;
}
