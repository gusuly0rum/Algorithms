class MaxIntSet {
  // variables
  int capacity;
  bool* store;
    
public:
  // constructor
  MaxIntSet(int max);
  
  // basic operations
  void insert(int value);
  void remove(int value);
  bool includes(int value);
  
  // debugger
  void print();
    
private:
  // internal functions
  void fillStore();
  void checkIndex(int index);
  bool indexInvalid(int index);
};
