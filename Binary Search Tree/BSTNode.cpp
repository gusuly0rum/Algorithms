#include "BSTNode.hpp"

BSTNode::BSTNode(int value) {
  this->value = value;
  this->left = nullptr;
  this->rite = nullptr;
}

bool BSTNode::unbound() {
  return !(this->left && this->rite);
}

void BSTNode::append(BSTNode* node) {
}
