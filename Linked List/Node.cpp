#include "Node.hpp"

/* constructor */
Node::Node(int val) {
  value = val;
  next = nullptr;
  prev = nullptr;
}

/* basic operations */
void Node::destroy() {
  next -> prev = prev;
  prev -> next = next;
  next = nullptr;
  prev = nullptr;
}
