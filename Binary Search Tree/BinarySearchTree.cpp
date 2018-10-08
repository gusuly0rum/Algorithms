#include "BinarySearchTree.hpp"

/* constructor */
BinarySearchTree::BinarySearchTree(BSTNode* root) {
  this->root = root;
}

/* basic operations */
BSTNode* BinarySearchTree::find(int value) {
  BSTNode* node = this->root;
  while (node) {
    if (*node->value == value) return node;
    node = (value < *node->value) ? node->left : node->rite;
  }
  return nullptr;
}

/* private */
