class Node {
public:
  // member variables
  int key;
  int value;
  Node* next;
  Node* prev;
  
public:
  // constructor
  Node(int val = 0, int key = 0);
  
  // basic operations
  void destroy();
};
