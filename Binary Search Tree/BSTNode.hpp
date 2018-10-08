#include <vector>
#include <iostream>

class BSTNode {
public:
  // member variables
  int value;
  BSTNode* left;
  BSTNode* rite;

public:
  // constructor
  BSTNode(int value = 0);

  // basic operations
  bool unbound();
  void append(BSTNode* node);
  std::vector<BSTNode*> children();
  
  // traversal
  std::vector<BSTNode*> bfs();
  std::vector<BSTNode*> dfs();
  
  // debugger
  void print();
};
