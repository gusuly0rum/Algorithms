#include "BSTNode.hpp"

BSTNode::BSTNode(int value) {
  this->value = value;
  this->left = nullptr;
  this->rite = nullptr;
}

bool BSTNode::childless() {
  return !(this->left && this->rite);
}

void BSTNode::append(BSTNode* node) {
  if (this->childless) {
    
    if (node->value <= this->value) {
      this->left = node;
    } else {
      this-> right = node;
    }
    
  } else {
    
  }
}
