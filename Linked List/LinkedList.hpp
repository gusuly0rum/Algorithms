#include "Node.hpp"

class LinkedList {
public:
  // variables
  int count;
  Node* head;
  Node* tail;
  
public:
  // constructor & destructor
  LinkedList();
  ~LinkedList();
  
  // accessors
  Node* first() const;
  Node* last() const;
  
  // basic operations
  void push(int value);
  void remove(int value);
  bool isEmpty() const;
  bool includes(int value) const;
  Node* find(int value) const;
  
  // debugger
  void print() const;
  
private:
  // internal functions
};
