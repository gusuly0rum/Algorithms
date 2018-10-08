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
    void append(BSTNode* node);
    
private:
    // internal member functions
};
