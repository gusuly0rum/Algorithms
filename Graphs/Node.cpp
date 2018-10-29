#include "Node.hpp"

// constructor
Node::Node(int value) : value{value} {
}

// destructor
Node::~Node() {
  prevEdges.clear();
  nextEdges.clear();
  value = NULL;
}

// basic operations
void Node::destroy() {
  value = NULL;
}
