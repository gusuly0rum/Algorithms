#include "BinarySearchTree.hpp"

/* constructor */
BinarySearchTree::BinarySearchTree(BSTNode* root) {
  this->root = root;
}

/* basic operations */
BSTNode* BinarySearchTree::insert(int value) {
  BSTNode* node = new BSTNode(value);
  if (root == nullptr) {
    root = node;
  } else {
    root->append(node);
  }
  return node;
}

void BinarySearchTree::remove(int value) {
  std::vector<BSTNode*> pair = getTarget(value);
}

BSTNode* BinarySearchTree::find(int value) {
  BSTNode* node = root;
  while (node) {
    if (node->value == value) return node;
    node = (value < node->value) ? node->left : node->rite;
  }
  return nullptr;
}

bool BinarySearchTree::includes(int value) {
  BSTNode* node = root;
  while (node) {
    if (node->value == value) return true;
    node = (value < node->value) ? node->left : node->rite;
  }
  return false;
}

std::vector<BSTNode*> BinarySearchTree::getTarget(int value) {
  BSTNode* target = root;
  BSTNode* parent = nullptr;
  std::vector<BSTNode*> pair;
  
  while (target) {
    if (target->value == value) {
      pair.push_back(target);
      pair.push_back(parent);
      return pair;
    }
    parent = target;
    target = (value < target->value) ? target->left : target->rite;
  }
  
  return pair;
}
