class DynamicArray {
  // variables
  int count;
  int capacity;
  int* store;
  
public:
  // constructor & destructor
  DynamicArray();
  ~DynamicArray();
  
  // accessors
  int get(int index);
  void set(int index, int val);
  
  // basic operations
  int pop();
  int shift();
  void push(int val);
  void unshift(int val);
  
  // debugger
  void print();

private:
  // internal functions
  void fill();
  void resize();
  bool isInvalid(int index);
  void checkIndex(int index);
};
