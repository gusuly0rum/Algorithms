#include <vector>

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
};
