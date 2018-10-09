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
  bool includes(int value) const;
  BSTNode* find(int value) const;
  BSTNode* insert(int value);
  
  // advanced operations
  int depth(BSTNode* node) const;
  bool isBalanced() const;
  
private:
  // internal
  std::vector<BSTNode*> getTarget(int value) const;
};
