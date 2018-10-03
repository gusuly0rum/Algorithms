class MaxIntSet {
  // variables
  int capacity;
  bool* store;
    
public:
  // constructor
  MaxIntSet(int max);
  
  // accessors
  bool get(int value);
  void set(int value);
  
  // basic operations
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
