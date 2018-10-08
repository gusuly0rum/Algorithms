#include "BinarySearchTree.hpp"

/* constructor */
BinarySearchTree::BinarySearchTree(BSTNode* root) {
  this->root = root;
}

/* basic operations */

BSTNode* BinarySearchTree::insert(int value) {
  BSTNode* node = new BSTNode(value);
  if (this->root == nullptr) {
    root = node;
  } else {
    root->append(node);
  }
  return node;
}

BSTNode* BinarySearchTree::find(int value) {
  BSTNode* node = this->root;
  while (node) {
    if (node->value == value) return node;
    node = (value < node->value) ? node->left : node->rite;
  }
  return nullptr;
}

/* private */
