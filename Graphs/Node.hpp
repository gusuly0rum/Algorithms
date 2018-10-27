#pragma once
#include <vector>
#include "Edge.hpp"

class Edge;

class Node {
public:
  // member variables
  std::vector<Edge*> prevEdges;
  std::vector<Edge*> nextEdges;
  int value;
  
public:
  // constructor
  Node(int value = NULL);
  ~Node();
};
