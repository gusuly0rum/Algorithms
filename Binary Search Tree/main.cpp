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
  
  // BinarySearchTree::insert test case
//  print(bst.root->value == 5);
//  print(bst.root->left->value == 3);
//  print(bst.root->left->left->value == 1);
//  print(bst.root->left->left->left->value == 0);
//  print(bst.root->left->left->rite->value == 2);
//  print(bst.root->left->rite->value == 4);
//  print(bst.root->rite->value == 7);
//  print(bst.root->rite->rite->value == 9);
//  print(bst.root->rite->rite->rite->value == 10);
//
//  // BinarySearchTree::rmeove test case
//  bst.remove(2);
//  bst.root->printBFS();
//  bst.remove(3);
//  bst.root->printBFS();
//  bst.remove(5);
//  bst.root->printBFS();
//  bst.remove(7);
//  bst.root->printBFS();
  
  BSTNode* node = new BSTNode(1);
  node->~BSTNode();
  
//  bst.~BinarySearchTree();

  return 0;
}
