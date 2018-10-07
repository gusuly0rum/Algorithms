class RingBuffer {
  // variables
  int start;
  int count;
  int capacity;
  int* store;
  
public:
  // constructor & destructor
  RingBuffer();
  ~RingBuffer();
  
  // accessors
  int &operator[](int index);
  int get(int index);
  void set(int index, int value);
  
  // basic operators
  int pop();
  int shift();
  void push(int value);
  void unshift(int value);
  
  // debugger
  void print();
  
private:
  // internal functions
  void fill();
  void resize();
  int wrap(int index);
  int intern(int index);
  void checkIndexGet(int index);
  void checkIndexSet(int index);
  bool indexInvalidGet(int index);
  bool indexInvalidSet(int index);
};
