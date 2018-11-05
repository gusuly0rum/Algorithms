#include "../Graphs/Edge.hpp"
#include "TarjansAlgorithm.hpp"

// Tarjan's Algorithm - Topological Sorting
std::vector<Node*> tarjan(std::vector<Node*>& nodes) {
  std::vector<Node*> result;
  std::unordered_set<Node*> visited;
  std::unordered_set<Node*>::const_iterator nodeIter;
  
  for (int k = 0; k < nodes.size(); k++) {
    Node* node = nodes[k];
    nodeIter = visited.find(node);
    
    if (nodeIter != visited.end()) {
      visit(node, visited, result);
    }
  }
  
  return result;
}

bool visit(Node* node, std::unordered_set<Node*> visited, std::vector<Node*> result) {
  visited.insert(node);
  std::list<Edge*>::iterator edgeIter;
  std::unordered_set<Node*>::const_iterator nodeIter;
  
  for (edgeIter = node->nextEdges.begin(); edgeIter != node->nextEdges.end(); edgeIter++) {
    Edge* edge = *edgeIter;
    Node* next = edge->nextNode;
    nodeIter = visited.find(next);
    
    if (nodeIter != visited.end()) {
      visit(next, visited, result);
    }
  }
  
  result.push_back(node);
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
