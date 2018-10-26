#include <vector>

class Node {
public:
  // member variables
  std::vector<int> prevEdges;
  std::vector<int> nextEdges;
  
public:
  // constructor
  Node();
  ~Node();
};
