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

// private members
void Edge::connect() {
  prevNode->nextEdges.push_back(this);
  nextNode->prevEdges.push_back(this);
}

void Edge::destroy() {
  std::vector<Edge*> nextEdges {prevNode->nextEdges};
  std::vector<Edge*> prevEdges {nextNode->prevEdges};
  int k1 = index(nextEdges, this);
  int k2 = index(prevEdges, this);
  if (k1 != -1) nextEdges.erase(nextEdges.begin() + k1);
  if (k2 != -1) prevEdges.erase(prevEdges.begin() + k2);
  prevNode = nullptr;
  nextNode = nullptr;
}

int Edge::index(std::vector<Edge*> edges, Edge* edge) {
  auto iterator = std::find(edges.begin(), edges.end(), this);
  if (iterator != edges.end()) {
    return (int) (iterator - edges.begin() + 1);
  }
  return -1;
}
