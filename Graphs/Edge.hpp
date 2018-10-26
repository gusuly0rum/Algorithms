#include "Node.hpp"

class Edge {
public:
  // member variables
  Node& prevNode;
  Node& nextNode;
  
public:
  // constructor
  Edge();
  ~Edge();
};
