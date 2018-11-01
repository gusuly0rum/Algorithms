#include <iostream>
#include "Node.hpp"
#include "Edge.hpp"

// debugger
void print(int value) {
  std::cout << value << std::endl;
}

// debugger
void sprint(const char* string) {
  std::cout << string << std::endl;
}

// debugger
void lprint(std::list<Edge*> list) {
  std::cout << "{ ";
  int k = 0;
  std::list<Edge*>::iterator it;
  for (it = list.begin(); it != list.end(); it++) {
    std::cout << (*it)->nextNode->value;
    if (k < list.size() - 1) std::cout << ", ";
    k++;
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
  Edge edge3_2{&node3, &node2};
  Edge edge2_3{&node2, &node3};
  
  lprint(node1.nextEdges);
  lprint(node2.nextEdges);
  lprint(node3.nextEdges);
  sprint("");
  
  
  // test case 2 - destruction
  sprint("test case 2 - destruction");
  edge1_2.destroy();
  edge2_1.destroy();
  lprint(node1.nextEdges);
  lprint(node2.nextEdges);
  lprint(node3.nextEdges);
  
  
  // test case 3 -
  
  return 0;
}
