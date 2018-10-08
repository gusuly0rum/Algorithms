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
  if (this->unbound()) {
    if (node->value <= this->value) {
      this->left = node;
    } else {
      this->rite = node;
    }
    
  } else {
    if (node->value <= this->value) {
      this->left->append(node);
    } else {
      this->rite->append(node);
    }
  }
}
