#include "BSTNode.hpp"

class BinarySearchTree {
public:
  // member variables
  BSTNode* root;
    
public:
  // constructor
  BinarySearchTree(BSTNode* root = nullptr);
  
  // basic operations
  void remove(int value);
  bool includes(int value);
  BSTNode* find(int value);
  BSTNode* insert(int value);
  
  // traversal
  std::vector<BSTNode*> bfs();
  std::vector<BSTNode*> dfs();
  
  // debugger
  void print();
};
