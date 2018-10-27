#include <iostream>
#include "Node.hpp"
#include "Edge.hpp"

void print(int value) {
  std::cout << value << std::endl;
}

void sprint(const char* string) {
  std::cout << string << std::endl;
}

int main() {
  
  // test case 1
  Node node1{1};
  Node node2{2};
  Node node3{3};
  
  Edge edge1_2{&node1, &node2};
//  Edge edge2_1{&node2, &node1};
  
//  Edge edge3_2{&node3, &node2};
//  Edge edge2_3{&node2, &node3};
  
  return 0;
}
