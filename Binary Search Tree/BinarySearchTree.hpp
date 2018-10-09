#include "BSTNode.hpp"

class BinarySearchTree {
public:
  // member variables
  BSTNode* root;
    
public:
  // constructor & destructor
  BinarySearchTree(BSTNode* root = nullptr);
  ~BinarySearchTree();
  
  // basic operations
  void remove(int value);
  bool includes(int value);
  BSTNode* find(int value);
  BSTNode* insert(int value);
  
private:
  // internal
  std::vector<BSTNode*> getTarget(int value);
};
