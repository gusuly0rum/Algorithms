#include "Node.hpp"

/* constructor */
Node::Node(int val, int key) {
  this->key = key;
  this->value = val;
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
