#include "Node.hpp"

/* constructor */
Node::Node(int key, int val) {
  this->key = key;
  this->val = val;
  this->next = nullptr;
  this->prev = nullptr;
}

/* basic operations */
void Node::destroy() {
  next -> prev = prev;
  prev -> next = next;
  next = nullptr;
  prev = nullptr;
}
