#include "BSTNode.hpp"

class BinarySearchTree {
public:
  // member variables
  BSTNode* root;
    
public:
  // constructor
  BinarySearchTree();
  
  // basic operations
  void insert(int value);
  void remove(int value);
  bool includes(int value);
  BSTNode* find(int value);
    
private:
  // internal member functions
};
