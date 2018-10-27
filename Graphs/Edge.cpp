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
  prevNode->nextEdges.erase(prevNode->nextEdges.begin() + index(prevNode->nextEdges, this));
  nextNode->prevEdges.erase(nextNode->prevEdges.begin() + index(nextNode->prevEdges, this));
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
    return (int) (iterator - edges.begin() + 1);
  }
  return -1;
}
