#include <iostream>
#include "Node.hpp"
#include "Edge.hpp"

void print(int value) {
  std::cout << value << std::endl;
}

void sprint(const char* string) {
  std::cout << string << std::endl;
}

void eprint(std::vector<Edge*> array) {
  std::cout << "{ ";
  for (int index = 0; index < array.size(); index++) {
    std::cout << array[index]->nextNode->value;
    if (index < array.size() - 1) std::cout << ", ";
  }
  std::cout << " }" << std::endl;
}

int main() {
  
  // test case 1 - connection
  sprint("test case 1 - connection");
  Node node1{1};
  Node node2{2};
  Node node3{3};
  
  Edge edge1_2{&node1, &node2};
  Edge edge2_1{&node2, &node1};
//  Edge edge3_2{&node3, &node2};
//  Edge edge2_3{&node2, &node3};
  
  eprint(node1.nextEdges);
  eprint(node2.nextEdges);
  eprint(node3.nextEdges);
  sprint("");
  
  
  // test case 2 - destruction
  sprint("test case 2 - destruction");
  edge1_2.destroy();
  eprint(node1.nextEdges);
  eprint(node2.nextEdges);
  eprint(node3.nextEdges);
  
  
  // test case 3 -
  
  return 0;
}
