#include "Node.hpp"

// constructor
Node::Node(int value) : value{value} {
}

// destructor
Node::~Node() {
  prevEdges.clear();
  nextEdges.clear();
}

// basic operations
void Node::remove(Node* node) {
}
