#include "BinarySearchTree.hpp"

/* constructor */
BinarySearchTree::BinarySearchTree(BSTNode* root) {
  this->root = root;
}

BinarySearchTree::~BinarySearchTree() {
  if (root) delete root;
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
  BSTNode* target = pair[0];
  BSTNode* parent = pair[1];
  
  if (target == root) {
    BSTNode* replacement = root->left->max();
    remove(replacement->value);
    replacement->left = root->left;
    replacement->rite = root->rite;
    root = replacement;
    delete target;
    return;
  }
  
  bool isLeft = false;
  if (target->value <= parent->value) isLeft = true;
  
  if (target->children().size() == 0) {
    isLeft ? parent->left = nullptr : parent->rite = nullptr;
    delete target;
    return;
  }
  
  if (target->children().size() == 1) {
    if (target->left) {
      isLeft ? parent->left = target->left : parent->rite = target->left;
    } else {
      isLeft ? parent->left = target->rite : parent->rite = target->rite;
    }
    delete target;
    return;
  }
  
  if (target->children().size() == 2) {
    BSTNode* replacement = target->left->max();
    remove(replacement->value);
    replacement->left = target->left;
    replacement->rite = target->rite;
    isLeft ? parent->left = replacement : parent->rite = replacement;
    delete target;
  }
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
