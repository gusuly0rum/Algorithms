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
  bool childless();
  void append(BSTNode* node);
};
