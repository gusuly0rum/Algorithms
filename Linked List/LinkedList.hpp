#include "Node.hpp"

class LinkedList {
public:
  int count;
  Node* head;
  Node* tail;
  
public:
  LinkedList(Node head, Node tail);
  Node* first();
  Node* last();
  int length();
  bool isEmpty();
  
private:
};
