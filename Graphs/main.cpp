#include <iostream>
#include "Node.hpp"
#include "Edge.hpp"

void print(int value) {
  std::cout << value << std::endl;
}

void sprint(const char* string) {
  std::cout << string << std::endl;
}

void vprint(std::vector<Edge*> array) {
  std::cout << "{ ";
  for (int index = 0; index < array.size(); index++) {
    std::cout << array[index];
    if (index < array.size() - 1) std::cout << ", ";
  }
  std::cout << " }\n" << std::endl;
}

int main() {
  
  // test case 1
  Node node1{1};
  Node node2{2};
  Node node3{3};
  
  Edge edge1_2{&node1, &node2};
  Edge edge2_1{&node2, &node1};
  
  Edge edge3_2{&node3, &node2};
  Edge edge2_3{&node2, &node3};
  
  sprint("destination nodes of node1");
  for (int k = 0; k < node1.nextEdges.size(); k++) {
    print(node1.nextEdges[k]->nextNode->value);
  }
  sprint("");
  
  sprint("destination nodes of node2");
  for (int k = 0; k < node2.nextEdges.size(); k++) {
    print(node2.nextEdges[k]->nextNode->value);
  }
  sprint("");
  
  sprint("destination nodes of node2");
  for (int k = 0; k < node3.nextEdges.size(); k++) {
    print(node3.nextEdges[k]->nextNode->value);
  }
  sprint("");
  
  
  return 0;
}
