#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>

class Node {
public:
  int key;
  int val;
  Node* next;
  Node* prev;
  
public:
  Node(int key, int val);

private:
};

#endif
