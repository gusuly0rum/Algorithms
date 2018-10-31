#include <iostream>
#include "Edge.hpp"

// constructor
Edge::Edge(Node* prevNode, Node* nextNode, int weight) :
prevNode{prevNode},
nextNode{nextNode},
weight{weight} {
  connect();
}

// destructor
Edge::~Edge() {
}

// basic operations
void Edge::destroy() {
  prevNode->nextEdges.erase(prevNode->nextEdges.begin() + index(prevNode->nextEdges, this));
  nextNode->prevEdges.erase(nextNode->prevEdges.begin() + index(nextNode->prevEdges, this));
  prevNode = NULL;
  nextNode = NULL;
}

// private members
void Edge::connect() {
  prevNode->nextEdges.push_back(this);
  nextNode->prevEdges.push_back(this);
}

int Edge::index(std::vector<Edge*> edges, Edge* edge) {
  for (int k = 0; k < edges.size(); k++) {
    if (edges[k] == edge) return k;
  }
  return -1;
}
