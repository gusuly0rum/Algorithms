#include "../Graphs/Edge.hpp"
#include "TarjansAlgorithm.hpp"

// Tarjan's Algorithm - Topological Sorting
std::vector<Node*> tarjan(std::vector<Node*>& nodes) {
  std::vector<Node*> result;
  std::unordered_set<Node*> visited;
  std::unordered_set<Node*>::const_iterator iter;
  
  for (int k = 0; k < nodes.size(); k++) {
    Node* node = nodes[k];
    iter = visited.find(node);
    
    if (iter != visited.end()) {
      visit(node, visited);
    }
  }
  
  return result;
}

bool visit(Node* node, std::unordered_set<Node*> visited) {
  return false;
}


// debugger
void vprint(std::vector<Node*>& array) {
  std::cout << "{ ";
  for (int index = 0; index < array.size(); index++) {
    std::cout << array[index]->value;
    if (index < array.size() - 1) std::cout << ", ";
  }
  std::cout << " }\n" << std::endl;
}
