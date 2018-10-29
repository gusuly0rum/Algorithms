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
  int k1 = index(prevNode->nextEdges, this);
  int k2 = index(nextNode->prevEdges, this);
  
  std::cout << prevNode->nextEdges.size() << "!" << std::endl;
  std::cout << k1 << "!" << std::endl;
  std::cout << nextNode->prevEdges.size() << "!" << std::endl;
  std::cout << k2 << "!" << std::endl;

  if (k1 != -1 && k1 < prevNode->nextEdges.size()) {
    prevNode->nextEdges.erase(prevNode->nextEdges.begin() + k1);
  }

  if (k2 != -1 && k2 < nextNode->prevEdges.size()) {
    nextNode->prevEdges.erase(nextNode->prevEdges.begin() + k2);
  }

  prevNode = nullptr;
  nextNode = nullptr;
}

// private members
void Edge::connect() {
  prevNode->nextEdges.push_back(this);
  nextNode->prevEdges.push_back(this);
}

int Edge::index(std::vector<Edge*> edges, Edge* edge) {
  auto iterator = std::find(edges.begin(), edges.end(), this);
  if (iterator != edges.end()) {
    return (int) (iterator +1 - edges.begin());
  }
  return -1;
}
