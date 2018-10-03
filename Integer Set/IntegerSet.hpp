class IntegerSet {
  //variables
  int count;
  int numBuckets;
  int** store;
    
public:
  // constructor
  IntegerSet();
  
  // basic operations
  void insert(int val);
  void remove(int val);
  bool includes(int val);
  
  // debugger
  void print();
  
private:
  // internal functions
  void resize();
  void fillStore();
  int hash(int val);
  int bucketIndex(int val);
};
