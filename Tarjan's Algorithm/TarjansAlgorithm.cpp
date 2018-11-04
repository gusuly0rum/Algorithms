#include "../Graphs/Edge.hpp"
#include "TarjansAlgorithm.hpp"

// Tarjan's Algorithm - Topological Sorting
std::vector<Node*> tarjan(std::vector<Node*>& nodes) {
  std::vector<Node*> result;
  return result;
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
