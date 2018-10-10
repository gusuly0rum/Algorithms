class Node {
public:
  // member variables
  int value;
  Node* next;
  Node* prev;
  
public:
  // constructor
  Node(int val);
  
  // basic operations
  void destroy();
};
