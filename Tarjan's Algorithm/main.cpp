#include "../Graphs/Edge.hpp"
#include "TarjansAlgorithm.hpp"

int main() {
  
  // test case
  Node node1{1};
  Node node2{2};
  Node node3{3};
  Node node4{4};
  Node node5{5};
  
  Edge edge12 {&node1, &node2};
  Edge edge14 {&node1, &node4};
  Edge edge23 {&node2, &node3};
  Edge edge34 {&node3, &node4};
  Edge edge45 {&node4, &node5};
  
  std::vector<Node*> nodes { &node2, &node5, &node1, &node4, &node3 };
  std::list<Node*> result {tarjan(nodes)};
  lprint(result);
  
  return 0;
}
